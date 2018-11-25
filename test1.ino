#include <SPI.h>
#include <Pixy.h>
#include <stdio.h>
#include <stdlib.h>

Pixy pixy;
int LEDUp = 10;
int LEDLeft = 9;
int LEDRight = 8;
int LEDDown = 7;

void setup()
{
  pinMode(LEDUp, OUTPUT);
  pinMode(LEDLeft, OUTPUT);
  pinMode(LEDRight, OUTPUT);
  pinMode(LEDDown, OUTPUT);
  Serial.begin(9600);
  Serial.print("Starting...\n");
  pixy.init();
}

void loop()
{
  uint16_t type;
  static int i = 0;
  int j;
  int16_t signature;
  int16_t angle;
  uint16_t blocks;
  blocks = pixy.getBlocks();
  if (blocks)
  {
    i++;         //Delay each 50 Loops everi 50 loop go in
    if (i % 50 == 0) //Delay each 50 Loops everi 50 loop go in
    {
      Serial.print("Detected :");
      Serial.print(blocks);
      Serial.print("\n");

      for (j = 0; j < blocks; j++)
      {
        Serial.print("Sign =");
        signature = (pixy.blocks[j].signature);
        Serial.print(signature, OCT);
        Serial.print("\t");

        Serial.print("Loc X =");
        Serial.print(pixy.blocks[j].x);
        Serial.print("\t");

        Serial.print("Loc Y =");
        Serial.print(pixy.blocks[j].y);
        Serial.print("\t");

        Serial.print("width =");
        Serial.print(pixy.blocks[j].width);
        Serial.print("\t");

        Serial.print("Height =");
        Serial.print(pixy.blocks[j].height);
        Serial.print("\t");

        Serial.print("angle =");
        angle = (pixy.blocks[j].angle);
        Serial.print(angle);
        Serial.print("\t");

        pixy.blocks[j].print(); // This print all one Line
      }
      Serial.print("\n\n");
      printf("Result: X: %d Y: %d",pixy.blocks[0].x, pixy.blocks[0].y);
    }
  }
}
