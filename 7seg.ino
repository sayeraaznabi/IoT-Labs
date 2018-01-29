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

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
int a= 2;
int b= 3;
int c= 4;
int d= 5;
int e= 6;
int f= 8;
int g= 9;

void setup(){
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void displayDigit(int digit)
{
  if(digit !=1 && digit !=4)
    digitalWrite(a, HIGH);
  
  if(digit !=5 && digit !=6)
    digitalWrite(b, HIGH);
  
  if(digit !=2)
    digitalWrite(c, HIGH);
  
  if(digit !=1 && digit !=4 && digit !=7)
    digitalWrite(d, HIGH);
  
  if(digit ==0 || digit ==2 || digit ==6 || digit ==8)
    digitalWrite(e, HIGH);
  
  if(digit !=1 && digit !=2 && digit !=3 && digit !=7)
    digitalWrite(f, HIGH);
  
  if(digit !=0 && digit !=1 && digit !=7)
    digitalWrite(g, HIGH);
  
}
void turnOff()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

// the loop function runs over and over again forever
void loop() {
  for(int i=0;i<10;i++)
  {
      displayDigit(i);
      delay(1000);
      turnOff();
  }
}
