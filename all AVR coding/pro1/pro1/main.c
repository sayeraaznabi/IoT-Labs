/*
 * pro1.c
 *
 * Created: 10/22/2017 7:24:17 PM
 * Author : novel
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>


int main(void)
{
	DDRD |=(1 << PD0);
    /* Replace with your application code */
    while (1) 
    {
		PORTD |= (1<<PD0);
		_delay_ms(100);
		PORTD &= (0<<PD0);
		_delay_ms(100);
    }
	return 0;
}

