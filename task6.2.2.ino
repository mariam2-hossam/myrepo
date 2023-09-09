#include <SignalFilter.h>

int encoderPin = 2;
int encoderPulseSignal;
int filteredOutput;

void setup() {
  pinMode(encoderPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Read the encoder pulse signal
  encoderPulseSignal = analogRead(encoderPin);

  // Apply the LPF to the pulse signal
  filteredOutput = filter(encoderPulseSignal, FILTER_LPF, fc);

  // Use the filtered output for further processing
  // ...

  // Print the filtered output for debugging
  Serial.println(filteredOutput);
}
