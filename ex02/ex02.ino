#define LED_PIN 13
unsigned long pre = 0;
const int interval = 500;
void setup() { pinMode(LED_PIN, OUTPUT); }
void loop() {
  unsigned long now = millis();
  if (now - pre >= interval) {
    pre = now;
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  }
}