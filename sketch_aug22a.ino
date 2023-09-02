
#include <Wire.h> 
#define firstbutton 2 
#define secondbutton 13 
int message = 0; 
void setup() 
{ 
  Wire.begin(); 
  Serial.begin(9600); 
}
 
void loop() { 
 if(firstbutton==1&&secondbutton==1) 
  { 
   Wire.beginTransmission(8); 
   Wire.write(1); 
   Wire.endTransmission(); 
  }
  else if(firstbutton==1&&secondbutton==0) 
  { 
   Wire.beginTransmission(8); 
   Wire.write(2); 
   Wire.endTransmission(); 
    
  }
  else if(firstbutton==0&&secondbutton==1) 
   { 
    Wire.beginTransmission(8); 
   Wire.write(3); 
   Wire.endTransmission(); 
   }
  else {
   Wire.beginTransmission(8); 
   Wire.write(4); 
   Wire.endTransmission(); 
  }
}
