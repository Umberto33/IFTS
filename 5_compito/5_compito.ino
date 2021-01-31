void setup() {
  pinMode(13, OUTPUT);       // configuro il pin 13 come output (dove c'è il LED)
  pinMode(12, INPUT_PULLUP);  // configuro il pin 12 come input (dove c'è il pulsante)
  pinMode(3, INPUT_PULLUP);
  Serial.begin (9600);
}





void loop() {
  if (digitalRead (12) == LOW) {
    delay(5000);
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite (13, LOW);
  } else {
    if (digitalRead (3) == LOW) {
      Serial.println("Bubu");
      delay(1000);
    }



  }

}
