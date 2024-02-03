const int pinLED = 5;

void setup() {
  // Setta il Pin D5 come uscita (OUTPUT)
  pinMode (pinLED, OUTPUT);
}

void loop() {
  digitalWrite (pinLED, HIGH);	// Accendi il LED
  delay(500);	// Pausa di 500 millisecondi
  digitalWrite (pinLED, LOW);	// Spegni il LED
  delay(500);	// Pausa di 500 millisecondi
}
