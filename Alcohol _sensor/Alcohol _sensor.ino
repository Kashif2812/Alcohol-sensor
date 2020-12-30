#include <LiquidCrystal.h>  //include library for lcd

LiquidCrystal lcd(7,6,5,4,3,2);  // create object for lcd and intilize it
int value; //variable to hold the value of alchohal

void setup() {
lcd.begin(16,2);  // begin lcd
}

void loop() {


value=analogRead(A0); //reading value from arduino analog pin which is recieving value from sensor pin
lcd.setCursor(0,0);    // setting cursor on lcd,s 0th row and 0th column
lcd.print("value of alcohol");   // writing string on lcd
lcd.setCursor(0,1);  // setting cursor on 0th column of 1st row 
lcd.print(value);  //printing value on lcd
delay(100);   //waiting  for 100 milli second 
}
