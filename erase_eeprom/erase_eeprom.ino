/*
 * Arduino EEPROM Clear
 *
 * Sets all of the bytes of the EEPROM to 0.
 * This example code is in the public domain.

 */

#include <EEPROM.h>

void setup()
{
  pinMode(13, OUTPUT);     
  // write a 0 to all 512 bytes of the EEPROM
  for (int i = 0; i < 512; i++)
    EEPROM.write(i, 0);
    
  // turn the LED on when we're done
    digitalWrite(13, HIGH);
    delay(1000);   
    digitalWrite(13, LOW);
    
}

void loop()
{
}
