#include <Wire.h>

const int MPU6050_ADDR = 0x68; 
const int MPU6050_REG_GYRO_Z = 0x47; 

unsigned long previousTime = 0;

void setup() {
  Wire.begin();
  Serial.begin(9600); 
  MPU6050_Init();
}

void loop() {
  unsigned long currentTime = millis(); 
  
    unsigned long elapsedTime = currentTime - previousTime;
  
  
  previousTime = currentTime;
  
  int16_t gyro_z;
  
  gyro_z = MPU6050_ReadWord(MPU6050_REG_GYRO_Z);
  float w = gyro_z *(250.0 / 32786.0);
 float theta1 = w * (elapsedTime/1000.0);
 float theta =+ theta1;

  Serial.print(" theta: ");
  Serial.print(theta);
  Serial.println(" degree");
  
  delay(10); 
}

void MPU6050_Init() {

  Wire.beginTransmission(MPU6050_ADDR);
  Wire.write(0x6B);
  Wire.write(0x00);
  Wire.endTransmission(true);
}

int16_t MPU6050_ReadWord(int reg_addr) {
  Wire.beginTransmission(MPU6050_ADDR);
  Wire.write(reg_addr);
  Wire.endTransmission(false);
  
  Wire.requestFrom(MPU6050_ADDR, 2, true);
  
  byte high_byte = Wire.read();
  byte low_byte = Wire.read();
  
  int16_t value = (high_byte << 8) | low_byte;
  return value;
}
