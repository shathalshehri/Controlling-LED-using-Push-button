# Controlling LED using Push Button

Welcome to the **Controlling LED using Push Button** project repository. This project demonstrates a basic electronics application where a push button is used to control an LED connected to a microcontroller.

## Table of Contents

- [Files Included](#files-included)
- [Hardware Required](#hardware-required)
- [Setup](#setup)
- [Getting Started with Arduino IDE](#getting-started-with-arduino-ide)
- [Understanding INPUT_PULLUP](#understanding-input_pullup)
- [Conclusion](#conclusion)

## Files Included

### 1. LED_with_PushButton.ino

This file contains the Arduino code used to control the LED with a push button. It manages the interaction between the push button and LED states.

### 2. LEDwPushButtonCode.png

![Code Screenshot](LEDwPushButtonCode.png)

This screenshot shows the code running on the microcontroller. Use it as a reference when programming your microcontroller.

### 3. PushButton-w-LED.MOV

This MOV file is a visual demonstration of the project in action. Click the link below to watch the demo:

[Watch Demo Video](https://github.com/shathalshehri/Controlling-LED-using-Push-button/blob/main/PushButton-w-LED.MOV)

### 4. SetUp.JPG

![Setup Image](SetUp.JPG)

This image shows the physical setup of the components used in this project. Use it as a reference to ensure your hardware setup matches the project requirements.

## Hardware Required

To replicate this project, you will need the following hardware components:

- Microcontroller (Arduino Board)
- LED
- Push Button
- Wires
- Breadboard

## Setup

To set up the hardware for this project, follow these steps:

1. **Components Needed**:
   - Ensure you have all the hardware components listed above.
   
2. **Circuit Connection**:
   - Refer to the setup image (`SetUp.JPG`) to correctly wire the push button and LED to your microcontroller.

## Getting Started with Arduino IDE

If you are new to using the Arduino IDE, refer to the [Arduino IDE v2 Getting Started Tutorial](https://docs.arduino.cc/software/ide-v2/tutorials/getting-started-ide-v2/) for instructions on how to download, install, and use the IDE for programming your microcontroller.

## Understanding INPUT_PULLUP

The easy way to connect a button on your Arduino without adding a pull-down resistor is to use the built-in pull-up resistor of the Arduino. To access it, set the pinMode() as `INPUT_PULLUP`. 

- **Note**: `INPUT_PULLUP` effectively inverts the behavior of the `INPUT` mode, where `HIGH` means the button is off (not pressed), and `LOW` means the button is on (pressed). This behavior will be observable in the experiment.

## Conclusion

By following these steps, you will successfully set up and operate an LED using a push button with your microcontroller. This project serves as an introductory exercise to basic electronics and programming concepts.

Feel free to explore and modify the code to suit your learning and experimentation goals. 

