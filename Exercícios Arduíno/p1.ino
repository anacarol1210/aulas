void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(3, LOW);
  delay(500); // Wait for 500 millisecond(s)
}

