#ifndef		LCD_CONFIG_H_
#define		LCD_CONFIG_H_

#include <avr/io.h>

//LCD DATA AND CONTROL PORTS
#define   DATA_BUS 	    	 PORTA
#define   CTL_BUS		     PORTB
#define   DATA_DDR	    	 DDRA
#define   CTL_DDR		     DDRB

//LCD DATA PINS
#define   LCD_D4			   
#define   LCD_D5			   
#define   LCD_D6			   
#define   LCD_D7			   

// LCD CONTROL PINS
#define   LCD_EN			   
#define	  LCD_RW			   
#define	  LCD_RS			   




#endif		//PIN_CONFIG_H_
