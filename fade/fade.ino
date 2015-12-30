/*
 * Fade - Fade brightness of LED in and out
 * Clayton Walker
 */

int ledPin = 9;
int brightness = 0; //how bright the LED is
int fadeAmount = 5; //how many points to fade the LED by

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //set the brightness level
  analogWrite(ledPin, brightness);
  //increment or decrement the brightness level
  brightness = brightness + fadeAmount;

  //reverse direction of fadeAmount
  if(brightness == 0 || brightness == 255){
    fadeAmount = -fadeAmount;
  }

  //add a delay
  delay(30);
}
