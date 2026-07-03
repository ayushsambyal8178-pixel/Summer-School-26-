#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);   // Address 0x20 corresponds to jumper value 0

void setup() {
  lcd.begin(16, 2);
  lcd.setBacklight(HIGH);
  lcd.print("Hello AYUSH ");
}

void loop() {
}
