int leds[] = {3, 5, 6, 9, 10, 11};
int numLEDs = 6;

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {

  for (int i = 0; i < numLEDs; i++) {

    // Fade In
    for (int brightness = 0; brightness <= 255; brightness += 5) {
      analogWrite(leds[i], brightness);
      delay(20);
    }

    // Fade Out
    for (int brightness = 255; brightness >= 0; brightness -= 5) {
      analogWrite(leds[i], brightness);
      delay(20);
    }

    analogWrite(leds[i], 0);
  }
}
