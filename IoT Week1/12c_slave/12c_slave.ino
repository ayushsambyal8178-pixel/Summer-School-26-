#include <Wire.h>

const int led = 13;

void setup() {
  pinMode(led, OUTPUT);

  Wire.begin(8);                 // Slave address
  Wire.onReceive(receiveEvent);  // Register receive function
}

void loop() {
  // Nothing to do here
}

void receiveEvent(int howMany) {

  while (Wire.available()) {
    int x = Wire.read();

    if (x == 1) {
      digitalWrite(led, HIGH);
    }
    else {
      digitalWrite(led, LOW);
    }
  }
}
