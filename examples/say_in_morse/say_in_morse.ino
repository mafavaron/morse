#include <morse.h>

// Print some messages in Morse code using built-in LED

// Created 17 May 2019 by Mauri Favaron

morse myMorse;

void setup()
{
  myMorse.SetDotLength(200L);
}

void loop()
{
  myMorse.Print("Hello, World!");
  delay(2000);
}

