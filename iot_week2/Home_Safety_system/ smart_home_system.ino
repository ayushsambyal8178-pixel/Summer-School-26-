#include <Servo.h>

Servo door;

// Sensors
int tempSensor = A0;
int gasSensor  = A1;      // Gas/Smoke Sensor
int ldr        = A2;
int pirSensor  = 2;

// Push Buttons
int lockButton   = 3;
int unlockButton = 4;

// LEDs
int blueLED   = 5;   // Cool Temperature
int greenLED  = 6;   // Normal Temperature
int yellowLED = 7;   // High Temperature
int roomLED   = 8;   // Automatic Room Light
int redLED    = 10;  // Gas Alert

// Buzzer
int buzzer = 11;

void setup()
{
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(roomLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(pirSensor, INPUT);

  pinMode(lockButton, INPUT_PULLUP);
  pinMode(unlockButton, INPUT_PULLUP);

  door.attach(9);
  door.write(0);   // Door Locked

  Serial.begin(9600);
}

void loop()
{
  // ----------------------------
  // Temperature Monitoring
  // ----------------------------
  int reading = analogRead(tempSensor);

  float voltage = reading * (5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100;

  if (temperature < 25)
  {
    digitalWrite(blueLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
  }
  else if (temperature < 35)
  {
    digitalWrite(blueLED, LOW);
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
  }
  else
  {
    digitalWrite(blueLED, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
  }

  // ----------------------------
  // Automatic Room Light
  // ----------------------------
  int lightLevel = analogRead(ldr);

  if (lightLevel < 500)
  {
    digitalWrite(roomLED, HIGH);
  }
  else
  {
    digitalWrite(roomLED, LOW);
  }

  // ----------------------------
  // Gas/Smoke Detection
  // ----------------------------
  int gasValue = analogRead(gasSensor);

  if (gasValue > 300)
  {
    digitalWrite(redLED, HIGH);
    tone(buzzer, 1500);
  }
  else
  {
    digitalWrite(redLED, LOW);
    noTone(buzzer);
  }

  // ----------------------------
  // Motion Detection
  // ----------------------------
  if (digitalRead(pirSensor) == HIGH)
  {
    Serial.println("Intruder Detected!");

    tone(buzzer, 1000);
    delay(500);
    noTone(buzzer);
  }

  // ----------------------------
  // Door Lock System
  // ----------------------------
  if (digitalRead(lockButton) == LOW)
  {
    door.write(0);
    Serial.println("Door Locked");
    delay(300);
  }

  if (digitalRead(unlockButton) == LOW)
  {
    door.write(90);
    Serial.println("Door Unlocked");
    delay(300);
  }

  // ----------------------------
  // Serial Monitor
  // ----------------------------
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C");

  Serial.print(" | Gas: ");
  Serial.print(gasValue);

  Serial.print(" | Light: ");
  Serial.print(lightLevel);

  Serial.print(" | Motion: ");

  if (digitalRead(pirSensor))
    Serial.println("Detected");
  else
    Serial.println("Safe");

  delay(200);
}
