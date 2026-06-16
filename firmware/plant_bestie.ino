#define PIR_PIN 7 
#define LED_OUT 6
//define soil moisture pin 

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_OUT, OUTPUT);
  //define soil moisture pin input 
  Serial.begin(9600);
  delay(10000);
}

void loop() {
  int motion = digitalRead(PIR_PIN);
  //read soil moisture level

  //if soil moisture ok
    //LED off
    digitalWrite(LED_OUT, motion); //turn on TFT screeen if motion is high (load happy png x3 shuffle) 

  //if soil moiture medium 
    //LED on
    //turn on TFT screen if motion is high (load png medium x3 shuffle)
  

  //if soil moisture bad
    //blink LED rapidly
    //turn on TFT screen if motion is high (load png dry x3 shuffle)

  
  
delay(100);
}
