int Button1 = 2;                                      // Pin for input button
unsigned long lastDebounceTime1 = 0;                  // the last time the output pin was toggled
unsigned long debounceDelay = 50;                     // the debounce time; increase if the output flickers
int lastButtonState1 = HIGH;                          // The state of the button
int ToggleStatus = LOW;                               // Status to toggle on each press

void setup () {
  pinMode(Button1, INPUT_PULLUP);                     // Use Button1 pin as INPUT with PULLUP
  Serial.begin(9600);                                 // Start Serial connection
}

void loop() {
  int reading1 = digitalRead(Button1);                // Reed the INPUT state

  if (reading1 == LOW && lastButtonState1 == HIGH) {  // If button is pressed and not was in prev loop.
    lastButtonState1 = LOW;                           // Set button state to LOW
    lastDebounceTime1 = millis();                     // Start debounce timer
    Serial.println("Button 1");                       // Print to serial, or other commands in yoour application
    ToggleStatus != ToggleStatus;                     // Toggle the status between HIGH and LOW;

  } else if (reading1 == HIGH && lastButtonState1 == LOW && ((millis() - lastDebounceTime1) > debounceDelay)) {
                                                      // If button is not pressed, it was before and the delay is over
    lastButtonState1 = HIGH;                          // Set button state back to HIGH

  } else if (reading1 == LOW) {                       // If button is pressed and it was presed in prev loop
    lastDebounceTime1 = millis();                     // Reset debounce timer
  }
}
