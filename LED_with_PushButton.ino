/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
int ledPin = 7;   // Pin connected to LED
int inPin = 2;    // Pin connected to push button
int val = 0;      // Variable to store the read value



void setup() {
  
  pinMode(inPin,INPUT_PULLUP);  //configure inPin as an input and enable the internal pull-up resistor
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
}


void loop() {
  val = digitalRead(inPin);  // Read the state of the push button

  if (val == LOW) {   // Check if push button is pressed (active low)
    digitalWrite(ledPin, HIGH);  // Turn on the LED
  } else {
    digitalWrite(ledPin, LOW);   // Turn off the LED
  }
}
