
void setup_PS2() {
  delay(1000);
  pinMode(CLK_PIN, INPUT_PULLUP);
  pinMode(DATA_PIN, INPUT_PULLUP);

  //clear buffer
  for (int i = 0; i < BUFFER_SIZE; i++) {
    buffer[i] = 0;
  }

  attachInterrupt(1, ps2interrupt, FALLING);
}

// The ISR for the external interrupt
void ps2interrupt(void)
{
  static uint8_t bitcount = 0;
  static uint8_t incoming = 0;
  static uint32_t prev_ms = 0;
  uint32_t now_ms;
  uint8_t n, val;

  val = digitalRead(DATA_PIN);
  now_ms = millis();
  if (now_ms - prev_ms > 250) {
    bitcount = 0;
    incoming = 0;
  }
  prev_ms = now_ms;
  n = bitcount - 1;
  if (n <= 7) {
    incoming |= (val << n);
  }
  bitcount++;
  if (bitcount == 11) {

    buffer[write_index] = incoming;
    write_index = (write_index + 1) % BUFFER_SIZE;
    if(DEBUG){
      Serial.print("Raw PS2: ");
      Serial.println(incoming,HEX);
    }
    bitcount = 0;
    incoming = 0;
  }
}



//read the raw PS2 data. This is ugly but so are all the other methods online. Is there even a clean way to read PS2????
void process_buffer() {
  uint8_t new_index;
  if (read_buffer(0) != 0) {
    //regular key press
    if (read_buffer(0) != 0xF0 && read_buffer(0) != 0xE0 && read_buffer(0) != 0xE1) {
      if (is_modifier(read_buffer(0), 0)) {
        set_modifier(read_buffer(0), 0);
        send_key(read_buffer(0), 0, 1);
      }
      else {
        send_key(read_buffer(0), 0, 0);
      }
      new_index = read_index + 1;
    }

    //regular key release, check for modifier
    else if (read_buffer(0) == 0xF0) {
      while (!read_buffer(1)); //wait for next byte
      if (is_modifier(read_buffer(1), 0)) {
        unset_modifier(read_buffer(1), 0);
      }
      release_key();
      new_index = read_index + 2;
    }

    //long key
    else if (read_buffer(0) == 0xE0) {
      while (!read_buffer(1)); //wait for next byte
      //long key press
      if (read_buffer(1) != 0xF0) {
        if (is_modifier(read_buffer(1), 1)) {
          set_modifier(read_buffer(1), 1);
          send_key(read_buffer(1), 1, 1);
        }
        else if (is_media(read_buffer(1))) {
          send_media(read_buffer(1));
        }
        else {
          send_key(read_buffer(1), 1, 0);
        }


        if (read_buffer(1) == 0x12) { //obnoxiously long print screen key
          while (!read_buffer(3)); //wait for the remaining 2 bytes before clearing buffer
          new_index = read_index + 4;
        }
        else {
          new_index = read_index + 2;
        }
      }

      //long key release
      else {
        while (!read_buffer(2)); //wait for next byte
        if (is_modifier(read_buffer(2), 1)) {
          unset_modifier(read_buffer(2), 1);
        }

        release_key();

        if (read_buffer(1) == 0x12) { //obnoxiously long print screen key
          while (!read_buffer(5)); //wait for the remaining 3 bytes before clearing buffer
          new_index = read_index + 5;
        }
        else {

          new_index = read_index + 3;
        }
      }
    }

    //extraaaaaa long, pain in the ass, pause key
    else if (read_buffer(0) == 0xE1) {
      send_key(0x6D, 1, 0);
      while (!read_buffer(7)); //wait for the remaining 7 bytes before clearing buffer, WTF
      new_index = read_index + 8;
    }

    //clear read bytes
    for (int i = 0; i < new_index - read_index; i++) {
      uint8_t x = (read_index + i) % BUFFER_SIZE;
      buffer[x] = 0;
    }

    read_index = new_index % BUFFER_SIZE;
  }
}



uint8_t read_buffer(uint8_t i) {
  return buffer[(read_index + i) % BUFFER_SIZE];
}


