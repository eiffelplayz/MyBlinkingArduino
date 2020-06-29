// Prepare LED initialization for the fist time
void setup() {
  pinMode(8, OUTPUT);
}

// Keep LED on and off in 1000 milliseconds ( 1 second )
void loop() {
   digitalWrite(8, HIGH);
   delay(1000);
   digitalWrite(8, LOW);
   delay(1000);
}