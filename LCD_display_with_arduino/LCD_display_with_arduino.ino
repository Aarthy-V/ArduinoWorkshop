#include <LiquidCrystal.h> 
int Contrast=100;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  

 void setup()
 {
    analogWrite(6,Contrast);
     lcd.begin(16, 2);     
} 

     
     
     void loop()
 { 
     lcd.setCursor(0,0);
     lcd.print("Hello");
     //lcd.setCursor(1,0);
     //lcd.print("LCD");
 }
