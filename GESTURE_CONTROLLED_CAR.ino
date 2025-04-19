// ATMEGA 32
// GESTURE CONTROLLED CAR
// Created on 26-03-2021 by Raj Kothari
// 4 is D1, 5 is D2, 6 is D3, 7 is D4
// Forward: Red on and Green on
// Left: Red on
// Right: Green on
// Reverse: Buzzer
// stop: Red and green off
void setup()
{
  pinMode (A5, INPUT);
  pinMode (A6, INPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (19, OUTPUT);
}

void loop()
{
  if (analogRead (A5) > 360)
  {
    forward ();
  }
  else if (analogRead (A5) < 300)
  {
    reverse ();
  }
  else if (analogRead (A6) < 300)
  {
    right ();
  }
  else if (analogRead (A6) > 360)
  {
    left ();
  }
  else
  {
    pause ();
  }
}

void forward()
{
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(19, LOW);
}

void reverse()
{
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(19, HIGH);
}

void left()
{
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(19, LOW);
}

void right()
{
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW); 
  digitalWrite(9, HIGH); 
  digitalWrite(19, LOW);
}

void pause()
{
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(19, LOW);
}
