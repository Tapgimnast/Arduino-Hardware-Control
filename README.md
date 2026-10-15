# Arduino Hardware Control Projects

This repository contains a collection of embedded systems projects focused on hardware control, sensor integration, and PWM signals using Arduino and C++.

## 1. 2-Axis Joystick Servo Controller
**Description:** 
A mechanical control system utilizing an analog joystick for continuous bidirectional movement. It implements mathematical mapping algorithms to convert 10-bit ADC sensor data (0-1023) into precise positional control (0-180 degrees).
**Hardware Components:**
* 1x Arduino Uno
* 1x Analog-to-Digital (ADC) Joystick
* 2x Servo Motors
* Jumper Wires & Breadboard

## 2. Joystick DC Motor Mapping
**Description:** 
A control script mapping analog Y-axis data from a joystick to determine the direction and speed of a DC motor. It converts ADC values into precise PWM signals for an L293D motor driver, adjusting RPM dynamically based on joystick position.
**Hardware Components:**
* 1x Arduino Uno
* 1x Analog Joystick
* 1x L293D Motor Driver
* 1x DC Motor

## 3. Tilt-Activated Serial Motor Control
**Description:** 
A logic script controlling a DC motor based on the state of a tilt sensor. When triggered, the system reads a user-input speed value from the Serial Monitor and applies it to the motor via PWM through an L293D driver.
**Hardware Components:**
* 1x Arduino Uno
* 1x Tilt Sensor
* 1x L293D Motor Driver
* 1x DC Motor

## 4. PWM HMI with Boundary Feedback
**Description:** 
A tactile interface using push buttons to adjust PWM output continuously. The logic features strict boundary checking to prevent variable overflow/underflow (0-255 limits) and triggers an auditory buzzer alert when operational limits are reached.
**Hardware Components:**
* 1x Arduino Uno
* 2x Push Buttons
* 1x Active Buzzer
* 1x LED

## 5. 74HC595 Binary Counter
**Description:** 
A binary counter utilizing the 74HC595 shift register. The script counts from 0 to 255 and shifts the bits sequentially to output pins, optimizing microcontroller pin usage via bitwise operations to drive external components.
**Hardware Components:**
* 1x Arduino Uno
* 1x 74HC595 Shift Register
* LEDs & Resistors

## 6. Bidirectional DC Motor Control
**Description:** 
A foundational bidirectional DC motor control system using the L293D driver and PWM signals for dynamic RPM adjustment. It demonstrates H-bridge logic by toggling direction pins and modifying duty cycles for variable speed.
**Hardware Components:**
* 1x Arduino Uno
* 1x L293D Motor Driver
* 1x DC Motor
* Jumper Wires & Breadboard
