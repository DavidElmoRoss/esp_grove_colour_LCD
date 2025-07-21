/*
    Title:  Puts HELLO WORLD on GROVE RGB DISPLAY on RED BACKGROUND
    Author: David Elmo Ross
            
    Desciption: Connect VCC to 3.3V, and Ground to Ground
                Connect SDA to PIN 21 and SCL to pin 22
                Puts HELLO WORLD on GROVE RGB DISPLAY on RED BACKGROUND
*/
#include "arduino.h"                // include arduino library  
#include <Wire.h>                   // include Wire.h library
#include "rgb_lcd.h"                // include rgb_lcd library

rgb_lcd lcd;                        // make lcd an instance of rgb_lcd

void setup() 
{
  Wire.begin();                     // initialize WIRE system
  lcd.begin(16,2);                  // start up the LCD
  lcd.display();                    // turn on LCD display
  lcd.setRGB(0xFF,0,0);             // make screen colour RED
  lcd.setCursor(3,0);               // Position cursor at col 3 and row 0
  lcd.print("HELLO WORLD");         // print HELLO WORLD
}

void loop() 
{
}
