# Controlling LED using Push Button

## Overview

Welcome to the **Controlling LED using Push Button** project repository. This project demonstrates a basic electronics application where a push button is used to control an LED connected to a microcontroller.

## Files Included

### 1. LED_with_PushButton.ino

This file contains the Arduino code used to control the LED with a push button. It manages the interaction between the push button and LED states.

### 2. LEDwPushButtonCode.png

![Circuit Diagram](LEDwPushButtonCode.png)

This circuit diagram illustrates how to correctly wire the push button and LED to your microcontroller. Verify your connections against this diagram before proceeding.

### 3. PushButton-w-LED.MOV

This MOV file is a visual demonstration of the project in action. It showcases how pressing the push button alters the state of the connected LED.

### 4. SetUp.JPG

![Setup Image](SetUp.JPG)

This image shows the physical setup of the components used in this project. Use it as a reference to ensure your hardware setup matches the project requirements.

## Getting Started

To replicate this project:

1. **Setup**: Connect the components as follows:
   - Connect one leg of the push button to ground.
   - Connect the other leg of the push button to digital pin 2 on the microcontroller.
   - Connect one end of a resistor to digital pin 7 (or your chosen pin for the LED).
   - Connect the other end of the resistor to the anode (longer leg) of the LED.
   - Connect the cathode (shorter leg) of the LED to ground.

2. **Upload Code**: Use the Arduino IDE or similar software to upload the `LED_with_PushButton.ino` code to your microcontroller.

## Demo

[![Click to watch demo](thumbnail_image.png)](PushButton-w-LED.MOV)

Click the image above to watch a demo of the project in action.

## Conclusion

By following these steps, you will successfully set up and operate an LED using a push button with your microcontroller. This project serves as an introductory exercise to basic electronics and programming concepts.

Feel free to explore and modify the code to suit your learning and experimentation goals. Happy coding!
