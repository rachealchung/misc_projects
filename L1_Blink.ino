/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/
/*
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PB3, OUTPUT);
  pinMode(PB4, OUTPUT);
  pinMode(PB5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(PB3, HIGH);  // turn the LED on (HIGH is the voltage level)
  // delay(18);                      // wait for a second
  // digitalWrite(PB3, LOW);   // turn the LED off by making the voltage LOW
  //delay(18);                      // wait for a second
  digitalWrite(PB4, HIGH);
  digitalWrite(PB5, HIGH);
}
*/

// Pin Mapping (Ensure these are PWM capable on your board)
const int redPin = PB3;
const int greenPin = PB4;
const int bluePin = PB5;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Magenta; Green OFF
  digitalWrite(greenPin, LOW); 

  // Red at 100%
  digitalWrite(redPin, HIGH); 

  // Blue set to 50%
  analogWrite(bluePin, 127); 
}
