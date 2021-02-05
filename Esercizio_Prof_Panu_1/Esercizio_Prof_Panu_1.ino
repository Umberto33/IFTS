void setup() {

  Serial.begin(9600);  //Inizializzo la Seriale

  Serial.println("Accende e spegne il led con la seriale");
  Serial.println("l lampeggia il led");
  Serial.println("a accende il led");
  Serial.println("s spegne il led");
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  if (Serial.available() ) {
    unsigned char comando = Serial.read ();

    if ('l' == comando) {
      digitalWrite (LED_BUILTIN, HIGH);
      Serial.println("led acceso");
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("led spento");
      delay(500);
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("led acceso");
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("led spento");
      delay(500);
      
      
  
    } else if ('a' == comando) {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("led acceso");

    } else if ('s' == comando) {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("led spento");

    } else {
      Serial.println("comando non riconosciuto, inserire 0 o 1");
    }
  }
}
