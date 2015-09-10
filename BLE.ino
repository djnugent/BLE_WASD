





void start_BLE(bool reset) {

  ble.begin(DEBUG); //verbose on-off


  if (reset) {
    /* Initialise the module */
    if(DEBUG){
       Serial.print(F("Initialising the Bluefruit LE module: "));
       Serial.println(F("Performing a factory reset: "));
    }
    ble.factoryReset();

    //Disable command echo from Bluefruit
    ble.echo(false);

    ble.info();

    //rename device
    ble.println("AT+GAPDEVNAME=BLE_WASD");

    /* Enable HID Service */
    if(DEBUG){
      Serial.println(F("Enable HID Service (including Keyboard): "));
    }
    if (! ble.sendCommandCheckOK(F( "AT+BleKeyboardEn=On"  ))) {
      if(DEBUG){
        Serial.println(F("Could not enable Keyboard"));
      }
    }

    /* Add or remove service requires a reset */
    if (! ble.reset() ) {
      if(DEBUG){
        Serial.println(F("Couldn't reset??"));
      }
    }

  }

}



void send_key(uint8_t c, uint8_t is_long_key, uint8_t no_release) {
  uint8_t hid_key;
  if (is_long_key) {
    hid_key = PS2Long_to_HID_keymap[c];
  }
  else {
    hid_key = PS2_to_HID_keymap[c];
  }
  if (hid_key == HID_ENTER) { //reset just to clean up every now and then
    modifiers = 0;
  }

  if(hid_key == HID_ESC && modifiers == 0x03){
    start_BLE(1); //reset Keyboard
    return;
  }
  //convert to command
  String key = hex_to_str(hid_key);
  String mod = hex_to_str(modifiers);
  String cmd = "AT+BLEKEYBOARDCODE=" + mod + "-00-" + key + "-00-00-00-00";
  //send bluetooth
  ble.println(cmd);

  if(DEBUG){
    Serial.println("Sent hid: " + key);
  }

  if (!no_release) {
    ble.println("AT+BLEKEYBOARDCODE=00-00");
  }

}

void release_key() {
  ble.println("AT+BLEKEYBOARDCODE=00-00");
}

uint8_t is_modifier(uint8_t c, uint8_t is_long_key) {
  if (is_long_key) {
    switch (c) {
      case (PS2_LEFT_GUI - 0xE000):
      case (PS2_RIGHT_CTRL - 0xE000):
      case (PS2_RIGHT_ALT - 0xE000):
      case (PS2_RIGHT_GUI - 0xE000):
        return 1;
        break;
    }
  }
  else {
    switch (c) {
      case PS2_LEFT_CTRL:
      case PS2_LEFT_SHIFT:
      case PS2_LEFT_ALT:
      case PS2_RIGHT_SHIFT:
        return 1;
        break;
    }
  }
  return 0;
}

uint8_t is_media(uint8_t c) {
  switch (c) {
    case (PS2_PLAY_PAUSE - 0xE000):
    case (PS2_STOP - 0xE000):
    case (PS2_FWD_TRACK - 0xE000):
    case (PS2_REV_TRACK - 0xE000):
    case (PS2_VOL_UP - 0xE000):
    case (PS2_VOL_DWN - 0xE000):
    case (PS2_MUTE - 0xE000):
      return 1;
      break;
  }
  return 0;
}

void send_media(uint8_t c) {
  String str;
  switch (c) {
    case (PS2_PLAY_PAUSE - 0xE000):
      str = "PLAYPAUSE";
      break;
    case (PS2_STOP - 0xE000):
      str = "MEDIASTOP";
      break;
    case (PS2_FWD_TRACK - 0xE000):
      str = "MEDIANEXT";
      break;
    case (PS2_REV_TRACK - 0xE000):
      str = "MEDIAPREVIOUS";
      break;
    case (PS2_VOL_UP - 0xE000):
      str = "VOLUME+,100";
      break;
    case (PS2_VOL_DWN - 0xE000):
      str = "VOLUME-,100";
      break;
    case (PS2_MUTE - 0xE000):
      str = "MUTE";
      break;
  }
  ble.println("AT+BLEHIDCONTROLKEY=" + str);
}

void set_modifier(uint8_t c, uint8_t is_long_key) {
  if (is_long_key) {
    switch (c) {
      case (PS2_LEFT_GUI - 0xE000):
        modifiers |= 1 << 3;
        break;
      case (PS2_RIGHT_CTRL - 0xE000):
        modifiers |= 1 << 4;
        break;
      case (PS2_RIGHT_ALT - 0xE000):
        modifiers |= 1 << 6;
        break;
      case (PS2_RIGHT_GUI - 0xE000):
        modifiers |= 1 << 7;
        break;
    }
  }
  else {
    switch (c) {
      case PS2_LEFT_CTRL:
        modifiers |= 1 << 0;
        break;
      case PS2_LEFT_SHIFT:
        modifiers |= 1 << 1;
        break;
      case PS2_LEFT_ALT:
        modifiers |= 1 << 2;
        break;
      case PS2_RIGHT_SHIFT:
        modifiers |= 1 << 5;
        break;
    }
  }
}

void unset_modifier(uint8_t c, uint8_t is_long_key) {
  if (is_long_key) {
    switch (c) {
      case (PS2_LEFT_GUI - 0xE000):
        modifiers &= ~(1 << 3);
        break;
      case (PS2_RIGHT_CTRL - 0xE000):
        modifiers &= ~(1 << 4);
        break;
      case (PS2_RIGHT_ALT - 0xE000):
        modifiers &= ~(1 << 6);
        break;
      case (PS2_RIGHT_GUI - 0xE000):
        modifiers &= ~(1 << 7);
        break;
    }
  }
  else {
    switch (c) {
      case PS2_LEFT_CTRL:
        modifiers &= ~(1 << 0);
        break;
      case PS2_LEFT_SHIFT:
        modifiers &= ~(1 << 1);
        break;
      case PS2_LEFT_ALT:
        modifiers &= ~(1 << 2);
        break;
      case PS2_RIGHT_SHIFT:
        modifiers &= ~(1 << 5);
        break;
    }
  }
}


