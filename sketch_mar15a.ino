#include <Arduino.h>
void setup(){
    pinMode(PIN_LED2, OUTPUT);
}
 
void loop(){
    digitalWrite(PIN_LED2, HIGH);
    delay(200);
    digitalWrite(PIN_LED2, LOW);
    delay(100);
}