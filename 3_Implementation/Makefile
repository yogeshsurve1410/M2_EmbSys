#TargetName : Dependencies
#<TAB>commands
PROJ_NAME=DISTANCE_MEASUREMENT_USING_ATMEGA32_AND_HCSRO4

SRC=src/main.c src/timer.c src/ultrasonic.c 


#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly.
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

Build : $(SRC)
	avr-gcc $(SRC) -Iinc  -o $(call FixPath,$(PROJ_NAME).$(hex)) -lm
	avr-gcc -Os -DF_CPU=8000000UL -mmcu=atmega32 -c main.c LCD/LCD.c ultrasonic.c timer/timer.c
	avr-gcc -mmcu=atmega32 *.o -o run
	avr-objcopy -O ihex -R .eeprom run run.hex
	avrdude -F -V -c usbasp -p ATMEGA32 -P /dev/ttyACM0 -b 115200 -U flash:w:run.hex
Run : Build
	./$(call FixPath,$(PROJ_NAME).$(hex))

Clean:
	$(RM) $(call FixPath,*.out)