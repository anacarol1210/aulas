int onoff = 0;
  
void setup()
{
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);
}

void loop(){
  onoff = digitalRead(3); 

  if (onoff == HIGH) {
    digitalWrite(2, LOW);
  } else {
   digitalWrite(2, HIGH);
  }
}

// Aprendi o if/ else em anos anteriores nas aulas de coding e resolvi usar o "int' para validar o estado do botão para facilitar.
