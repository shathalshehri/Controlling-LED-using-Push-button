# Controlling LED using Push Button

Welcome to the **Controlling LED using Push Button** project repository. This project demonstrates a basic electronics application where a push button is used to control an LED connected to a microcontroller.

## Table of Contents

- [Files Included](#files-included)
- [Setup](#setup)
- [Getting Started](#getting-started)
- [Conclusion](#conclusion)

## Files Included

### 1. LED_with_PushButton.ino

This file contains the Arduino code used to control the LED with a push button. It manages the interaction between the push button and LED states.

### 2. LEDwPushButtonCode.png

![Circuit Diagram](LEDwPushButtonCode.png)

This circuit diagram illustrates how to correctly wire the push button and LED to your microcontroller. Verify your connections against this diagram before proceeding.

### 3. PushButton-w-LED.MOV

This MOV file is a visual demonstration of the project in action. Click the link below to watch the demo:

[Watch Demo Video](https://github.com/shathalshehri/Controlling-LED-using-Push-button/blob/main/PushButton-w-LED.MOV)

### 4. SetUp.JPG

![Setup Image](SetUp.JPG)

This image shows the physical setup of the components used in this project. Use it as a reference to ensure your hardware setup matches the project requirements.

## Setup

To replicate this project, follow these steps for setup:

### Components Needed

- Microcontroller (e.g., Arduino)
- Push Button
- LED
- Resistor (appropriate value for the LED)
- Breadboard and jumper wires

### Circuit Connection

1. Connect one leg of the push button to ground.
2. Connect the other leg of the push button to digital pin 2 on the microcontroller.
3. Connect one end of a resistor to digital pin 7 (or your chosen pin for the LED).
4. Connect the other end of the resistor to the anode (longer leg) of the LED.
5. Connect the cathode (shorter leg) of the LED to ground.

### Upload Code

Use the Arduino IDE or similar software to upload the `LED_with_PushButton.ino` code to your microcontroller.

## Getting Started

After setting up the hardware and uploading the code, follow these steps to operate the LED using the push button:

- Press the push button to turn on the LED.
- Release the push button to turn off the LED.

Ensure your connections are secure and correct before powering on your microcontroller.

## Conclusion

By following these steps, you will successfully set up and operate an LED using a push button with your microcontroller. This project serves as an introductory exercise to basic electronics and programming concepts.

Feel free to explore and modify the code to suit your learning and experimentation goals. Happy coding!

