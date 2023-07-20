int echo_pin = 3; // 초음파 센서 echo pin을 3번
int trig_pin = 5; // 초음파 센서 trig pin을 5번

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(echo_pin, INPUT); // 수신을 하기 때문에 INPUT으로 설정
  pinMode(trig_pin, OUTPUT); // 송신을 하기 때문에 OUTPUT으로 설정
}

void loop() {
  float duration, distance;
  digitalWrite(trig_pin, HIGH); // 초음파 발사 시작 (high)
  delay(10); // trigger 핀이 10ms 동안 발사됨
  digitalWrite(trig_pin, LOW); // 초음파 발사 종료 (low)
  
  duration = pulseIn(echo_pin, HIGH); // duration 값을 가져옴
  // pulseIn 함수는 pulseIn(핀번호, 핀상태)의 형태로 이루어져 있으며, 핀상태가 바뀌면
  // 그때까지 경과한 시간을 ms(밀리초) 단위로 반환합니다. 단위는 마이크로 초입니다.
  
  // 초음파의 속도는 초당 340미터를 이동하거나, 29마이크로초당 1센치를 이동합니다.
  distance = float(duration / 2) / 29.1; // 왕복 거리를 계산
  
  Serial.print(distance); // 시리얼 포트를 열어서 거리를 확인합니다.
  Serial.println("mm"); // cm로 하고 싶으면 '/10'을 해주면 됩니다.
  delay(3);
}
