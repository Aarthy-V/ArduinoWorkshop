#include "max6675.h"
#include <LiquidCrystal.h> 


int thermoCS  = 10;
int thermoSO =  9;
int thermoSCK = 13;

int Contrast=100;

MAX6675 thermocouple(thermoSCK, thermoCS, thermoSO);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  



 void setup()
 {
     analogWrite(6,Contrast);
     lcd.begin(16, 2);
     Serial.begin(9600);
     lcd.setCursor(0,0);
     lcd.print("Temperature");
 } 
 
 
 void loop()
 { 
    float temperature_read = thermocouple.readCelsius();  
    lcd.setCursor(0,1);
    lcd.print(temperature_read);  
    Serial.print(temperature_read);  
    delay(1000);
    
    
 }
 
