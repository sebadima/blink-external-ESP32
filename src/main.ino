const int pinLED = 18;

void setup() {
  // Setta il Pin D5 come uscita (OUTPUT)
  pinMode (pinLED, OUTPUT);
}

void loop() {
  digitalWrite (pinLED, HIGH);	// Accendi il LED
  delay(1000);	// Pausa di un secondo
  digitalWrite (pinLED, LOW);	// Spegni il LED
  delay(1000);	// Pausa di un secondo 
}
