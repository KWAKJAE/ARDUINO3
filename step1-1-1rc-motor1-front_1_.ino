//A 바퀴만 움직임 

int motor1PinA = 2;
int motor1PinB = 3;
int enablelPinA = 11;

void setup() {
  pinMode(motor1PinA, OUTPUT);
  pinMode(motor1PinB, OUTPUT);
  pinMode(enablelPinA, OUTPUT);
  analogWrite(enablelPinA,100);//모터 속도를 정해준다.
}

void loop() {
  digitalWrite(motor1PinA, LOW);
  digitalWrite(motor1PinB, HIGH);
  delay(1000);
}
