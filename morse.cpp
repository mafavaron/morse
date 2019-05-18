/*
  Test.h - Test library for Wiring - implementation
  Copyright (c) 2006 John Doe.  All right reserved.
*/

#include "morse.h"

// Constructor

morse::morse(void)
{
  pinMode(LED_BUILTIN, OUTPUT);
  this.delay_short = STANDARD_LEN;
  this.delay_long  = 3*STANDARD_LEN;
}

// Public methods

void morse::Print(const char* sMessage)
{
}

bool morse::SetDotLength(const unsigned long iLen)
{
	
	// Check input parameters
	if(iLen <= 0) {
		return false;
	}
	else {
		this.delay_short = iLen;
		this.delay_long  = 3*iLen;
	}
}

// Private methods

void morse::dih(void)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(this.delay_short);
  digitalWrite(LED_BUILTIN, LOW);
  delay(this.delay_short);
}

void morse::dah(void)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(this.delay_long);
  digitalWrite(LED_BUILTIN, LOW);
  delay(this.delay_short);
}

