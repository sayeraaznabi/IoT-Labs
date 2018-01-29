/*
 * Timer_lern.c
 *
 * Created: 11/17/2017 11:02:57 AM
 * Author : novel
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <avr/interrupt.h>
int count=0;
volatile int flag=0;

ISR (TIMER0_OVF_vect)
{
	count++;
	if (count >=1000)
	{
		if (flag==0)
		{
			PORTB |=(1<<PORTB0);
			flag=1;
		}
		else if(flag==1)
		{
			PORTB &=~(1<<PORTB0);
			flag=0;
		}
		count=0;
	}
	TCNT0= 225;
	TOIE0 |=(1<<TOV0);	
}



void main()
{
    /* Replace with your application code */
	DDRB |= (1<<PORTB0);
	
	TCNT0 =225;
	TCCR0A |= (1<<CS22) | (1<<CS21) |(1<<CS20);
	TIMSK0 |= (1<<TOIE0);
	
	sei ();
    while (1) 
    
}

