
void setup()
{
  pinMode(5,OUTPUT); // RED LED
  pinMode(8,INPUT);  // FIRST BUTTON 
  pinMode(6,OUTPUT); // YELLOW LED
  pinMode(9,INPUT);  // SECOND BUTTON
  pinMode(7,OUTPUT); // BLUE LED
  pinMode(10,INPUT); // THIRD BUTTON
}

void loop()
{
  int buttonState1=digitalRead(8);
  int buttonState2=digitalRead(9);
  int buttonState3=digitalRead(10);
  if(buttonState1==HIGH)
  {
    digitalWrite(5,HIGH); // TURN ON THE RED LED
  }
  else
  {
    digitalWrite(5,LOW); // TURN OFF THE RED LED
  }
  
  if(buttonState2==HIGH)
  {
    digitalWrite(6,HIGH); // TURN ON THE YELLOW LED
  }
  else
  {
    digitalWrite(6,LOW); // TURN OFF THE YELLOW LED
  }
  
  if(buttonState3==HIGH)
  {
    digitalWrite(7,HIGH); // TURN ON THE BLUE LED
  }
  else
  {
    digitalWrite(7,LOW); // TURN OFF THE BLUE LED
  }
}
