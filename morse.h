/*
  morse.h - Library for emitting Morse-encoded messages through the built-in LED.
  Copyright (c) 2019 by Mauri Favaron.  This is open-source software, covered by the MIT license.
*/

#ifndef morse_h
#define morse_h

#if ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
	#include "pins_arduino.h"
	#include "WConstants.h"
#endif

#define STANDARD_LEN 300

class morse
{
  public:
    morse(void);
    void Print(const char* sMessage);
    bool SetDotLength(const unsigned long iLen);
  private:
  	unsigned long delay_short;
  	unsigned long delay_long;
    void dih(void);
    void dah(void);
    void brk(void);
    void spc(void);
};

#endif

