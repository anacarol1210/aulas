void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(1000); 
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(1000); 
  
}
