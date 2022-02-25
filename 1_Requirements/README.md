# Distance Measurement using HC-SR04 and AVR Microcontroller

# INTRODUCTION
 
 
 Use an HC-SR04 ultrasonic sensor to give your robot the perception of distance.

This popular ultrasonic distance sensor provides stable and accurate distance measurements from 2cm to 450cm. It has a focus of less than 15 degrees and an accuracy of about 2mm.

This sensor uses ultrasonic sound to measure distance just like bats and dolphins do. Ultrasonic sound has such a high pitch that humans cannot hear it. This particular sensor sends out an ultrasonic sound that has a frequency of about 40 kHz. The sensor has two main parts: a transducer that creates an ultrasonic sound and another that listens for its echo. To use this sensor to measure distance, the robot's brain must measure the amount of time it takes for the ultrasonic sound to travel.

Sound travels at approximately 340 meters per second. This corresponds to about 29.412µs (microseconds) per centimeter. To measure the distance the sound has travelled we use the formula: Distance = (Time x SpeedOfSound) / 2. The "2" is in the formula because the sound has to travel back and forth. First the sound travels away from the sensor, and then it bounces off of a surface and returns back. The easy way to read the distance as centimeters is to use the formula: Centimeters = ((Microseconds / 2) / 29). For example, if it takes 100µs (microseconds) for the ultrasonic sound to bounce back, then the distance is ((100 / 2) / 29) centimeters or about 1.7 centimeters.

Usage

Connect the VCC and GND pins to a 5V power supply, the trigger input (Trig) pin to a digital output and the echo (Echo) pin to a digital input on your robot's microcontroller. Pulse the trigger (Trig) pin high for at least 10us (microseconds) and then wait for a high level on the echo (Echo) pin. The amount of time the Echo pin stays high corresponds to the distance that the ultrasonic sound has travelled. The quicker the response, the closer your robot is to an obstacle.

We recommend the NewPing library to use this sensor with your Arduino or compatible
