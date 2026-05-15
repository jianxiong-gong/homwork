#define LED_PIN 13
#define KEY_PIN 2
void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(KEY_PIN, INPUT_PULLUP);
}
void loop() {
  if (digitalRead(KEY_PIN) == LOW)
    digitalWrite(LED_PIN, HIGH);
  else
    digitalWrite(LED_PIN, LOW);
}//优化逻辑//最终版本