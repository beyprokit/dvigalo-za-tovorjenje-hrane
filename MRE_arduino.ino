// C++ code
//
#include "LiquidCrystal.h"
float input_voltage = 0.0;
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
 int analog_value = analogRead(A1);
   input_voltage = (analog_value * 5.0) / 1024.0; 

   
   if (input_voltage < 0.1) 
   {
     input_voltage=0.0;
   } 

   
    Serial.println("Voltage=");
    Serial.println(input_voltage);
    delay(300);
}
