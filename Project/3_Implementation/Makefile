#TargetName : Dependencies
#<TAB>commands
PROJ_NAME=DISTANCE_MEASUREMENT_USING_ATMEGA32_AND_HCSRO4

SRC=src/main.c src/timer.c src/ultrasonic.c 


#Main application file name
MAIN_APP = main


#Main hex file path in windows format
MAIN_HEX_PATH = C:\Users\yoges\VSCODE###\M2_EmbSys\Project\3_Implementation\src\$(MAIN_APP).hex

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	   EXEC = out
   endif
endif

# Compiler and other Section
CC = avr-gcc
OBJCOPY = avr-objcopy.exe
# AVRDUDE := avrdude

#Options for avr-gcc
CFLAGS = -g -Os -o

#Linking options for avr-gcc
LFLAGS = -Os -mmcu=atmega328 -o

#Options for HEX file generation
HFLAGS = -j .text -j .data -O ihex


# Sources files needed for building the application 
SRC = src/$(MAIN_APP).c src/ultrasonic.c src/timer.c


# The headers files needed for building the application
INCLUDE = inc/ultrasonic.h inc/timer.h inc/lcd_config.h inc/timer_config.h inc/LCD.h

# commands Section
Burn : Build
	$(AVRDUDE) $(DUDEFLAGS)

Build : $(MAIN_APP).elf
	$(OBJCOPY) $(HFLAGS) $< $(MAIN_APP).hex
	
$(MAIN_APP).elf: $(MAIN_APP).o
	$(CC) $(SRC) $(INCLUDE) $(LFLAGS) $@
	
$(MAIN_APP).o:$(SRC)
	$(CC) $^ $(INCLUDE) $(CFLAGS) $@

clear :
	rm -r *.o *.elf *.hex *.out