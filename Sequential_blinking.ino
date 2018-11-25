#include <SPI.h>
#include <Pixy.h>

Pixy pixy;
int LEDUp = 10;
int LEDLeft = 9;
int LEDRight = 8;
int LEDDown = 7;

void setup() {
   pinMode(LEDUp, OUTPUT);
   pinMode(LEDLeft, OUTPUT);
   pinMode(LEDRight, OUTPUT);
   pinMode(LEDDown, OUTPUT);
   pixy.init();
}


void loop() {
    digitalWrite(LEDUp, HIGH); // turn on LEDUp
    delay(500);                // wait for 500ms
    digitalWrite(LEDLeft, HIGH); // turn on LEDUp
    delay(500);
    digitalWrite(LEDRight, HIGH); // turn on LEDUp
    delay(500);
    digitalWrite(LEDDown, HIGH); // turn on LEDUp
    delay(500);
    digitalWrite(LEDUp, LOW);  // turn off LEDUp
    delay(500);               // wait for 500ms
    digitalWrite(LEDLeft, LOW); // turn on LEDUp
    delay(500);
    digitalWrite(LEDRight, LOW); // turn on LEDUp
    delay(500);
    digitalWrite(LEDDown, LOW); // turn on LEDUp
    delay(500);
}
