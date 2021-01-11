#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT); // comment
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, true);
  delay(100);
  digitalWrite(LED_BUILTIN, false);
  delay(100);
}