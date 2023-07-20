int redpin = 3;
int greenpin = 5;
int bluepin = 9;
 
void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);

}

void loop() 
 { setColor(255,0,0); delay(1000); // red
   setColor(0,255,0); delay(1000); //lgreen
   setColor(0,0,255); delay(1000); // blue

}

void setColor(int red,int green,int blue)
{
  analogWrite(redpin,red);
  analogWrite(greenpin,green);
  analogWrite(bluepin,blue);
}
