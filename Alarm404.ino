void setup() 
{
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT);
  // setting the following pins to output 5v to be used on the other motion sensors and the buzzer
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() 
{
  // setting both pins to output 5v.
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  
  if (digitalRead(6) == HIGH) 
  {
    Serial.println("Left Active"); // If motion is detected on the left side it will sound the alarm and show active
    digitalWrite(7,HIGH);
  }
  else 
  {
    Serial.println("Inactive");
    digitalWrite(7, LOW);
  }
  
  
  if (digitalRead(5) == HIGH) 
  {
    Serial.println("Middle Active"); // // If motion is detected on the middle it will sound the alarm and show active
    digitalWrite(7,HIGH);
  }
  else 
  {
    Serial.println("Inactive");
    digitalWrite(7, LOW);
  }

  
  if (digitalRead(4) == HIGH) 
  {
    Serial.println("Right Active"); // // If motion is detected on the right side it will sound the alarm and show active
    digitalWrite(7,HIGH);
  }
  else 
  {
    Serial.println("Inactive");
    digitalWrite(7, LOW);
  }
}
