#include <SPI.h>
#include "Adafruit_BLE.h"
#include "Adafruit_BluefruitLE_SPI.h"
#include "BluefruitConfig.h"
#include "define.h"


#if not defined (_VARIANT_ARDUINO_DUE_X_) && not defined (_VARIANT_ARDUINO_ZERO_)
  #include <SoftwareSerial.h>
#endif


/**
 * BLE WASD Keyboard
 * Daniel Nugent
 * 
 * This program uses an adafruit BLE + Micro microcontroller to decode PS2, remap the scan codes to HID, and send over bluetooth GAT
 * Additional parts include the the tricket lipo backpack, WASD code keyboard, microusb male, and 3.7v batteries
 * 
 * Ctrl + Shift + esc will reconfigure the keyboard
 *    -Use on first use or if the bluetooth module freezes or changes name
 * 
 * Make sure you keyboard can run on 3.3v or make sure you can provide  it with 5v
 *
 *
 * Problems: The status leds don't work, only one way communication
 *           
 * 
 */





#define DEBUG 0
#define BUFFER_SIZE 15

//pins to use for PS2 keyboard
#define CLK_PIN 2
#define DATA_PIN 3


//buffer to store key strokes
static volatile uint8_t buffer[BUFFER_SIZE];

//keep track of out place in the buffer
uint8_t write_index = 0;
uint8_t read_index = 0;

//bitmask of our currently pressed modifier keys(shift, ctrl, alt, gui, etc)
uint8_t modifiers = 0;

// Create the bluefruit object, either software serial...uncomment these lines
/*
/* ...hardware SPI, using SCK/MOSI/MISO hardware SPI pins and then user selected CS/IRQ/RST */
Adafruit_BluefruitLE_SPI ble(BLUEFRUIT_SPI_CS, BLUEFRUIT_SPI_IRQ, BLUEFRUIT_SPI_RST);



void setup() {
  if(DEBUG){
    Serial.begin(115200); //debuging
    while (!Serial);  // required for Flora & Micro
    delay(500);
  }
  setup_PS2();
  start_BLE(0); //use 1 to configure the bluetooth module(or press ctrl + shift + esc)
}

void loop() {
  process_buffer();
}


//Create a two character hex string for debugging
String hex_to_str(uint8_t hex) {
  String str = String(hex, HEX);
  if (hex < 16) {
    str = "0" + str;
  }
  return str;
}




