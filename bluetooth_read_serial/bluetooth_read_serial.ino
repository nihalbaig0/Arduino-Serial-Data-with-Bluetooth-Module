#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  
  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
  Serial.begin(9600);
  mySerial.println("Hello Bluetooth");
  Serial.println("Hello USB");
}

void loop() {
  int sensorData = 750;
  mySerial.print("Sensor reading: ");
  mySerial.println(sensorData);

} 