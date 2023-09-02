#include <Wire.h> 
#define led 11
int message = 0; 
void setup() 
{ 
  pinMode(led,INPUT); 
  Serial.begin(9600); 
  Wire.begin(8); 
  Wire.onReceive(receiveEvent);
}
 void receiveEvent(int bytes)
  {
    while(Wire.available()){
      message =Wire.read();
    }
 } 
void loop() 
{ 
   switch (message) { 
    case 1: 
   analogWrite (led, 255); 
   Serial.print("Glitch");
     break; 
 
    case 2: 
      analogWrite(led, 128); 
       Serial.print("Vector focused");
     break; 
 
    case 3: 
      analogWrite(led, 192);
       Serial.print("Vector distracted"); 
     break; 
 
    default: 
      analogWrite(led, 0);
       Serial.print("No message"); 
     break; 
}}
