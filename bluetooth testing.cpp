#include <SoftwareSerial.h>
SoftwareSerial mySerial(3, 4); //Rx,Tx

void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  Serial.println("ready");
  mySerial.begin(38400);
}

void loop() {
   if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
 
}
