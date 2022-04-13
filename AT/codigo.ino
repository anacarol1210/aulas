const int led1 = 4; //verde 1
const int led2 = 3;//amarelo 1
const int led3 = 2;//vermelho 1
const int led4 = 9;//verde 2
const int led5 = 8;//amarelo 2
const int led6 = 7;//vermelho 2
const int led7 = 6;//verde 3
const int led8 = 5;//vermelho 3
const int led9 = 11;//verde 4 
const int led10 = 10;//vermelho 4

void setup()
{
    pinMode(led1, OUTPUT); //verde 1
    pinMode(led2, OUTPUT); //amarelo 1
    pinMode(led3, OUTPUT); //vermelho 1
    pinMode(led4, OUTPUT); //verde 2
    pinMode(led5, OUTPUT); //amarelo 2 
    pinMode(led6, OUTPUT); //vermelho 2
    pinMode(led7, OUTPUT); //verde 3 
    pinMode(led8, OUTPUT); //vermelho 3
    pinMode(led9, OUTPUT); //verde 4 
    pinMode(led10, OUTPUT); //vermelho 4
 
}

void loop()
{
  // verde, vermelho, vermelho e Verde (3s)
   digitalWrite (led1, HIGH);//verde 1
   digitalWrite (led6, HIGH); //vermelho 2
   digitalWrite (led8, HIGH); //vermelho 3
   digitalWrite (led9, HIGH); //verde 4
   delay(3000);
  //amarelo, vermelho, vermelho e Verde (3s)
   digitalWrite (led1, LOW);//verde 1
   digitalWrite (led2, HIGH); //amarelo 1 ligado
   digitalWrite (led6, HIGH); //vermelho 2 ligado
   digitalWrite (led8, HIGH); //vermelho 3
   digitalWrite (led9, HIGH); //verde 4
   delay(3000);
   digitalWrite (led2, LOW); //amarelo 1
   digitalWrite (led9, LOW); //verde 4
   digitalWrite (led3, HIGH); // vermelho 1
   digitalWrite (led10, HIGH); // vermelho 4
   delay(2000);
   digitalWrite (led6, LOW); //vermelho 2
   digitalWrite (led8, LOW); //vermelho 3
   digitalWrite (led3, LOW); // vermelho 1
   digitalWrite (led10, LOW); // vermelho 4
   digitalWrite (led7, HIGH); //verde 3
   digitalWrite (led3, HIGH); //vermelho 1
   digitalWrite (led4, HIGH); //verde 2
   digitalWrite (led10, HIGH); //vermelho 4
   delay(3000);
   digitalWrite (led3, HIGH); //vermelho 1
   digitalWrite (led4, LOW); //verde 2
   digitalWrite (led5, HIGH); //amarelo 2
   digitalWrite (led7, HIGH); //verde 3
   digitalWrite (led10, HIGH); //vermelho 4
   delay(3000);
   digitalWrite (led3, HIGH); //vermelho 1
   digitalWrite (led5, LOW); //amarelo 2
   digitalWrite (led6, HIGH); //vermelho 2
   digitalWrite (led7, LOW); //verde 3
   digitalWrite (led8, HIGH); //vermelho 3
   digitalWrite (led10, HIGH); //vermelho 4
   delay(2000);
    digitalWrite (led3, LOW); //vermelho 1
   digitalWrite (led6, LOW); //vermelho 2
   digitalWrite (led8, LOW); //vermelho 3
   digitalWrite (led10, LOW); //vermelho 4
   delay(3);
//
//
 
}
