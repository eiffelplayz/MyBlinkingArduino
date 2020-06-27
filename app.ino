// Prepare LED initialization for the fist time
void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

// Keep LED on and off in 1000 milliseconds ( 1 second )
void loop() {
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   delay(1000);
   digitalWrite(10, LOW);
   digitalWrite(11, LOW); 
   delay(1000);
}
