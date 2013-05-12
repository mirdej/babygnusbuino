/*
  pins_arduino.h - Pin definition functions for ATMEGA644
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis
  2012 Michael Egger

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA

  $Id: wiring.h 249 2007-02-03 16:52:51Z mellis $
*/



// ATMEL ATTINY85 / BABYGNUSBUINO
//
//                      	    +---\/---+
//    USB-     	(D5)     PB5   1|        |8  VCC
//    USB+		(D3)     PB3   2|        |7  PB 2 		(D2)  
//       		(D4)	 PB4   3|        |6  PB 1 		(D1)
//  GND                        4|        |5  PB 0  		(D0)
//                           	+--------+
//

#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <avr/pgmspace.h>

#define NUM_DIGITAL_PINS            6
#define NUM_ANALOG_INPUTS           2
#define analogInputToDigitalPin(p)  (p)
#define digitalPinHasPWM(p)         ((p==1) || (p==0)) || (p==3) || (p==4))

static const uint8_t SS   = 4;
static const uint8_t MOSI = 0;
static const uint8_t MISO = 1;
static const uint8_t SCK  = 2;

static const uint8_t SDA = 0;
static const uint8_t SCL = 2;
static const uint8_t LED_BUILTIN = 5;

static const uint8_t A2 = 2;
static const uint8_t A4 = 4;



#ifdef ARDUINO_MAIN


#define PB 1


const uint16_t PROGMEM port_to_mode_PGM[] = {
	NOT_A_PORT,
	(uint8_t) &DDRB,
};

const uint16_t PROGMEM port_to_output_PGM[] = {
	NOT_A_PORT,
	(uint8_t) &PORTB,
};

const uint16_t PROGMEM port_to_input_PGM[] = {
	NOT_A_PORT,
	(uint8_t) &PINB,
};

const uint8_t PROGMEM digital_pin_to_port_PGM[] = {
	// PORTLIST		
	// -------------------------------------------		
	PB, /* 0 */
	PB,
	PB,
	PB,
	PB,
	PB
};

//ok
const uint8_t PROGMEM digital_pin_to_bit_mask_PGM[] = {
	// PIN IN PORT		
	// -------------------------------------------		
	_BV(0), /* 0, port B */
	_BV(1),
	_BV(2),
	_BV(3),
	_BV(4),
	_BV(5)
};

//ok
const uint8_t PROGMEM digital_pin_to_timer_PGM[] = {
	// TIMERS		
	// -------------------------------------------		
	TIMER0A,     	
	TIMER0B,     	
	NOT_ON_TIMER,
	NOT_ON_TIMER,
	TIMER1B,
	NOT_ON_TIMER
};

#endif

#endif