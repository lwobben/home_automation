/*
  Activates a pin, typically connected to a relay, setting it to HIGH for 2 minutes.
  Subsequently, the Arduino enters a deep sleep mode for 1 day, minimizing power consumption.

  This configuration could be used to activate a valve connected to a normally-open relay, 
  allowing it to open for two minutes each day, facilitating the controlled flow of liquid.

  Note: for the deep sleep mode it is necessary to connect D0 to RST (AFTER code upload).
*/

const int RELAY_PIN = D7;

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RELAY_PIN, HIGH);
  delay(12e4); // 2 minutes
  digitalWrite(RELAY_PIN, LOW);
  ESP.deepSleep(864e8); // 1 day
}
