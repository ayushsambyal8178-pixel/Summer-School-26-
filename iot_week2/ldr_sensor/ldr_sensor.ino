// C++ code
//
int LDR_VAL = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop()
{
  LDR_VAL = analogRead(A0);
  Serial.println(LDR_VAL);
  if (LDR_VAL < 500) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
