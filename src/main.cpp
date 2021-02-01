#include <Arduino.h>

void setup() {
  // put your setup code here, to run once: !
  //pinMode(LED_BUILTIN,OUTPUT); // comment
  pinMode(D2,OUTPUT); // comment
  pinMode(D1,OUTPUT); // comment
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(LED_BUILTIN, true);

  digitalWrite(D2, true);
  digitalWrite(D1, false);
  delay(500);
  //digitalWrite(LED_BUILTIN, false);

  digitalWrite(D2, false);
  digitalWrite(D1, true);
  delay(500);
}