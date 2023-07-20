int redpin = 3;
int greenpin = 5;
int bluepin = 9;
 
void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);

}

void loop() 
 { setColor(0,0,255); delay(50); 
   setColor(0,0,0); delay(100); 
   setColor(255,0,0); delay(80); 

}

void setColor(int red,int green,int blue)
{
  analogWrite(redpin,red);
  analogWrite(greenpin,green);
  analogWrite(bluepin,blue);
}
