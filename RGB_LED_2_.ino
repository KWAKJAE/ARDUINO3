int redpin = 3;
int greenpin = 5;
int bluepin = 9;
 
void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);

}

void loop() 
 { setColor(255,0,119); delay(50); 
   setColor(72,124,831); delay(100); 
   setColor(117,151,23); delay(80); 

}

void setColor(int red,int green,int blue)
{
  analogWrite(redpin,red);
  analogWrite(greenpin,green);
  analogWrite(bluepin,blue);
}
