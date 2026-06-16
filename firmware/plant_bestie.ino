#define PIR_PIN 7 
#define LED_OUT 6

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_OUT, OUTPUT);
  Serial.begin(9600);
  delay(10000);
}

void loop() {
  int motion = digitalRead(PIR_PIN);
    digitalWrite(LED_OUT, motion);
delay(100);
}
