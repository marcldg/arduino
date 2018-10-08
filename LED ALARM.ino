//ItKindaWorks - Creative Commons 2016
//github.com/ItKindaWorks
//
//Simple Arduino RGB LED mood light


//Change these to match the pins on your Arduino - make sure theyre PWM capable
int greenPin = 10;
int bluePin = 5;
int redPin = 5;
int witPin = 6;

void setup(){
  //pinMode(greenPin, OUTPUT);
  //pinMode(bluePin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(witPin, OUTPUT);
}

void loop(){
    //fadeFromTo(bluePin, greenPin);
    //fadeFromTo(greenPin, redPin);
    fadeFromTo(redPin, witPin);
}

void fadeFromTo(int from, int to){
  for(int i = 0; i < 255; i++){
    analogWrite(to, i);
    delay(5);
    analogWrite(from, 255 - i);
    delay(5);
  }
}
