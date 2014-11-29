/*
Copyright (C) 2011 Ricardo Batista <rjbatista at gmail dot com>

This program is free software: you can redistribute it and/or modify
it under the terms of the version 3 GNU General Public License as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include <TM1638.h>

// define a module on data pin 8, clock pin 9 and strobe pin 7
TM1638 module(8, 9, 7);
int a;
int color = 0x00FF;
int color1 = 0xFF00;;
void setup() {
 // initialize serial communication at 9600 bits per second:
 Serial.begin(9600);
 // display a hexadecimal number and set the left 4 dots
module.setupDisplay(true, 1); // where 7 is intensity (from 0~7)
module.clearDisplay();
}

void loop() {

//module.setLED(TM1638_COLOR_RED, 0);  // set LED number x to red
//module.setLED(TM1638_COLOR_GREEN, 1); // set LED number x to green
//delay(1000);
//module.setLED(TM1638_COLOR_NONE, 0);  // set LED number x to red
//module.setLED(TM1638_COLOR_NONE, 1); // set LED number x to green
//module.setLED(TM1638_COLOR_RED, 2);  // set LED number x to red
//module.setLED(TM1638_COLOR_GREEN, 3); // set LED number x to green
//delay(1000);
module.setLEDs(0xE007);
//delay(1000);
for (a=5000; a!=0; a--) {
  module.setDisplayToDecNumber(a,0,false);
  if (color == 0x00FF){
    color = 0xFF00; 
  }
  else {
    color = 0x00FF; }
  module.setLEDs(a);
  
//  module.setLED(TM1638_COLOR_NONE, a);  // set LED number x to red
  delay(1000);
}
}
