
/**
 * special_functions - intercept keyboard commands before they get sent
 * Used to reconfigure the keyboard and clear any stuck modifiers
 * Can be used to do whatever youd like...
 * Possibly convert the keypad into a T9 keyboard
 * Return a 1 to send the key and a 0 to block it from being sent
 **/

bool special_functions(uint8_t hid_key, uint8_t is_long_key){

  //reset modifiers
  if (hid_key == HID_ENTER) { //reset just to clean up every now and then
    modifiers = 0;
  }

  //reconfigure keyboard
  if(hid_key == HID_ESC && modifiers == 0x03){
    start_BLE(1); //reset Keyboard
    return 0;
  }

  //remap keypad to work as T9 keyboard...
  
  return 1;
  
}

