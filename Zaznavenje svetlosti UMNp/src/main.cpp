#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:ž
  for (int i = 2; i < 13; i++){
    pinMode(i, OUTPUT);
    //digitalWrite(i, HIGH);
  }
  /* pinMode(A0, INPUT);
  pinMode(A1, INPUT); */
  pinMode(A2, INPUT);

  Serial.begin(9600);
}
void loop() {
  
  /* int merjena_temperatura = analogRead(A1);
  Serial.print("A1 (temparatura): ");
  Serial.println(merjena_temperatura);
  delay(500); */
  int merjena_svetlost = analogRead(A2);
  /* Serial.print("A2 (svetilnost): ");
  Serial.println(merjena_svetlost); */

  merjena_svetlost = map(merjena_svetlost, 0, 55, 0, 9); //map funkcija je v bistvu križni račun
  
  for (int i = 0; i < 11; i++)
  {
    if(merjena_svetlost>= i){
      digitalWrite(i + 2, HIGH);
    }
    else{
      digitalWrite(i + 2, LOW);
    }
  }
  
  // put your main code here, to run repeatedly:
}