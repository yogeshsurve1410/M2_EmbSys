#ifndef __AVR_ATmega8__
    #define __AVR_ATmega8__
#endif 

#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
 DDRC |= 1 << PINC5;
 while(1)
 {

     _delay_ms(1000);
     PORTC ^=1 << PINC5;
     _delay_ms(1000);

 }


    return 0;
}