/*
 * AVRGCC4.c
 *
 * Created: 2012/3/8 19:07:35
 *  Author: fe
 */ 

#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	
		unsigned char i,j,k,led=0;
	        DDRB=0xFF;
    while(1)
    {
	
		if (led)
		PORTB|=0x01;
		
		else
		 PORTB&=0xFE;
		 
		 led=!led;
		 
		 for(i=0; i<255; i++)
		      
			  for(j=0; j<255; j++)
			            
						k++;
						
        //TODO:: Please write your application code 
    }
}
		
