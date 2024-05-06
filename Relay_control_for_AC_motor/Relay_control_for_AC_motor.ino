                       

#define RELAY1  7                        


void setup()
{    
Serial.begin(9600);
  pinMode(RELAY1, OUTPUT);       
}

void loop()
{
if (millis()>=7500)
   {digitalWrite(RELAY1,0);           // Turns ON Relays 1
   Serial.println("Light ON");
   delay(2000);
   }                                      // Wait 2 seconds
else
   {digitalWrite(RELAY1,1);          // Turns Relay Off
   Serial.println("Light OFF");
   delay(2000);
   }
   
}
