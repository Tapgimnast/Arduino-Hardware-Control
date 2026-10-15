# Arduino Hardware Control Projects

This repository contains a collection of embedded systems projects focused on hardware control, sensor integration, and PWM signals using Arduino and C++.

## 1. 2-Axis Joystick Controller
* **Description:** A mechanical control system utilizing an analog joystick for continuous bidirectional movement. It implements mathematical mapping algorithms to convert 10-bit ADC sensor data (0-1023) into precise control signals for movement and speed.
* **Key Hardware:** Arduino, Analog Joystick, DC/Servo Motors, Jumper Wires.

## 2. Hardware Logic & Motor Control
* **Description:** A bidirectional DC motor control system designed for dynamic RPM adjustment using PWM signals. This project also features a binary counter display, optimizing microcontroller pin usage via a shift register and bitwise operations.
* **Key Hardware:** Arduino, L293D Motor Driver, DC Motor, 74HC595 Shift Register, LEDs, Tilt Sensor.

## 3. PWM Dimmer with Boundary Feedback
* **Description:** A Human-Machine Interface (HMI) for tactile PWM adjustment. It features strict boundary-checking logic to prevent variable overflow/underflow (0-255 limits) and integrates an auditory alert system to provide immediate hardware feedback when limits are reached.
* **Key Hardware:** Arduino, LED, Push Buttons, Active Buzzer, Resistors.
