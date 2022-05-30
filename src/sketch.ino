#define LED_PIN 13
    void setup() {
        pinMode(LED_PIN, OUTPUT);
        Serial.begin(9600);
    }
    void loop() {
        Serial.println("Hello Arduino");
        digitalWrite(LED_PIN, HIGH); delay(3000);
        digitalWrite(LED_PIN, LOW);  delay(3000);
    }

