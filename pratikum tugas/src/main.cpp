#include <Arduino.h>
int ledm = 16;
int ledk = 17;
int ledh = 18;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledm, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledh, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledm, HIGH);//merah nyala
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, LOW);
  delay(30000);
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, HIGH);//kuning nyala
  digitalWrite(ledh, LOW);
  delay(5000);
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, HIGH);//hijau nyala
  delay(20000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}