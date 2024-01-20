#include <SoftwareSerial.h>

SoftwareSerial sim800l(14, 12); // RX, TX

void setup() {
  Serial.begin(9600);
  sim800l.begin(9600);
}

void loop() {
  if (sim800l.available()) {
    Serial.write(sim800l.read());
  }
  if (Serial.available()) {
    sim800l.write(Serial.read());
  }
}
