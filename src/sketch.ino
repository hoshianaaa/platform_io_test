#define LED_PIN 13
#include <calculator.h>

Calculator calc;

bool return_true()
{
  return true;
}

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    Serial.println("Hello Arduino");
    Serial.println(calc.add(25, 17));
    digitalWrite(LED_PIN, HIGH); delay(3000);
    digitalWrite(LED_PIN, LOW);  delay(3000);
}
