// C++ code
//
#include <Adafruit_LiquidCrystal.h>

#include <Servo.h>

int pir = 0;

Adafruit_LiquidCrystal lcd_1(0);

Servo servo_6;

void setup()
{
  pinMode(3, INPUT);
  lcd_1.begin(16, 2);
  servo_6.attach(6, 500, 2500);
}

void loop()
{
  pir = digitalRead(3);
  lcd_1.setCursor(0, 0);
  lcd_1.print(pir);
  if (pir == 1) {
    lcd_1.setCursor(0, 1);
    lcd_1.print("Gate OPEN");
    servo_6.write(90);
  } else {
    lcd_1.setCursor(0, 1);
    lcd_1.print("Gate CLOSE");
    servo_6.write(0);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
