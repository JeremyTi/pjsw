#include "robotHeader.h"
#include <avr/io.h>

int main(void)
{
    DDRB |= (0 << PINB0); // L bumper input
    DDRC |= (0 << PINC6); // R bumper input
    while(!(PINB & 0b00000001 | PINC & 0b01000000)) // Kijk of de bumper die bitch nog niet geraakt heeft
    {
        PORTD = 0b00110000; // niks geraakt dus rij maar door
    }
    PORTD = 0b00000000; // BITCH DOWN!

    return 0;
}
