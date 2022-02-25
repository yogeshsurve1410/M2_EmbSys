# Distance Measurement using HC-SR04 and AVR Microcontroller

# INTRODUCTION
 
 
 Use an HC-SR04 ultrasonic sensor to give your robot the perception of distance.

This popular ultrasonic distance sensor provides stable and accurate distance measurements from 2cm to 450cm. It has a focus of less than 15 degrees and an accuracy of about 2mm.

This sensor uses ultrasonic sound to measure distance just like bats and dolphins do. Ultrasonic sound has such a high pitch that humans cannot hear it. This particular sensor sends out an ultrasonic sound that has a frequency of about 40 kHz. The sensor has two main parts: a transducer that creates an ultrasonic sound and another that listens for its echo. To use this sensor to measure distance, the robot's brain must measure the amount of time it takes for the ultrasonic sound to travel.

Sound travels at approximately 340 meters per second. This corresponds to about 29.412µs (microseconds) per centimeter. To measure the distance the sound has travelled we use the formula: Distance = (Time x SpeedOfSound) / 2. The "2" is in the formula because the sound has to travel back and forth. First the sound travels away from the sensor, and then it bounces off of a surface and returns back. The easy way to read the distance as centimeters is to use the formula: Centimeters = ((Microseconds / 2) / 29). For example, if it takes 100µs (microseconds) for the ultrasonic sound to bounce back, then the distance is ((100 / 2) / 29) centimeters or about 1.7 centimeters.

Usage

Connect the VCC and GND pins to a 5V power supply, the trigger input (Trig) pin to a digital output and the echo (Echo) pin to a digital input on your robot's microcontroller. Pulse the trigger (Trig) pin high for at least 10us (microseconds) and then wait for a high level on the echo (Echo) pin. The amount of time the Echo pin stays high corresponds to the distance that the ultrasonic sound has travelled. The quicker the response, the closer your robot is to an obstacle.

We recommend the NewPing library to use this sensor with your Arduino or compatible
In this tutorial we are going to discuss and design a circuit for measuring distance. This circuit is developed by interfacing ultrasonic sensor“HC-SR04” with AVR microcontroller. This sensor uses a technique called “ECHO” which is something you get when sound reflects back after striking with a surface.

We know that sound vibrations can not penetrate through solids. So what happens is, when a source of sound generates vibrations they travel through air at a speed of 220 meters per second. These vibrations when they meet our ear we describe them as sound. As said earlier these vibrations can not go through solid, so when they strike with a surface like wall, they are reflected back at the same speed to the source, which is called echo.
Ultrasonic sensor “HC-SR04” provides an output signal proportional to distance based on the echo. The sensor here generates a sound vibration in ultrasonic range upon giving a trigger, after that it waits for the sound vibration to return. Now based on the parameters, sound speed (220m/s) and time taken for the echo to reach the source, it provides output pulse proportional to distance.


As shown in figure, at first we need to initiate the sensor for measuring distance, that is a HIGH logic signal at trigger pin of sensor for more than 10uS, after that a sound vibration is sent by sensor, after a echo, the sensor provides a signal at the output pin whose width is proportional to distance between source and obstacle.

This distance is calculate as, distance (in cm) = width of pulse output (in uS) / 58.

Here the width of the signal must be taken in multiple of uS(micro second or 10^-6).

# COMPONENT REQUIRED
Hardware: ATMEGA32, Power supply (5v), AVR-ISP PROGRAMMER, JHD_162ALCD (16x2LCD), 1000uF capacitor, 10KΩ resistor (2 pieces) , HC-SR04 sensor.

Software: VSCode, SimulIde, Ardunino

1. ATMEGA32
  
 ![image](https://user-images.githubusercontent.com/83902823/155761596-5963afe5-f450-4e08-9639-19237d3ba683.png)
 
  
  The high-performance, low-power Microchip 8-bit AVR® RISC-based microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB EEPROM, 2 KB SRAM, 54/69 general purpose I/O lines, 32 general purpose working registers, a JTAG interface for boundary-scan and on-chip debugging/programming, three flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a universal serial interface (USI) with start condition detector, an 8-channel 10-bit A/D converter, programmable watchdog timer with internal oscillator, SPI serial port, and five software selectable power saving modes. The device operates between 1.8-5.5 volts.
  
2. AVR-ISP Programmer

![image](https://user-images.githubusercontent.com/83902823/155761636-b5dadf5b-d746-4e60-8f80-c96adbddada2.png)

  Until now,Support IC manufacturer, pcs devices and keeps growing.
High speed thanks to the flexible hardware engine. Programming speed adjustable for complicated application environments brought by user target board, length of ISP cable etc.
Stand-alone and PC-Hosted (USB2.0 High Speed) dual mode;
Supports ISP programming of devices with I2C, SPI, UART, BDM, MON, MW, JTAG, CAN, ICC, RS232 and any other serial port.
ATE interface;
Over-current and ESD protection to protect your equipment;
DLL and API for easy integration into customers’ system.

3. JHD_162ALCD (16x2LCD)

![image](https://user-images.githubusercontent.com/83902823/155761467-4082fa1a-0f63-45eb-99b9-ed5ff2ecd750.png)
    This is 16 x 2 LCD Display with Yellow/Green Backlight ASCII Alphanumeric Character. 16×2 LCD Display Support mostly All Digital Microcontroller such as Arduino, 8051, PIC, AVR, ARM, MSP, COP8, STM, Raspberry Pi etc. About 16×2 LCD Display: 16×2 LCD is a basic 16 character by 2 line display Yellow/Green Back light.


4. 1000uF capacitor
 
 
 ![image](https://user-images.githubusercontent.com/83902823/155761782-5a25df04-4b65-4f8e-9224-c06bef3b6a24.png)
1000uF 25V Electrolytic Capacitor is a high quality electrolytic capacitor which offers long life and high reliability. Electrolytic Capacitors are most commonly used type of capacitors in Electronic Circuits. Electrolytic Capacitors have 2 Polars - Positive and Negative






















# Block Diagram

![image](https://user-images.githubusercontent.com/83902823/155760824-b586f56c-3f25-4281-a495-7caaad957f91.png)

