const int BLINK_LED = 10;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(BLINK_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(BLINK_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(BLINK_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
