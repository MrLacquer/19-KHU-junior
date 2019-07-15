#define LEFT_IR_PIN   A6 
#define RIGHT_IR_PIN  A7 //핀번호 설정

void setup() {
  Serial.begin(9600);  // 시리얼통신을 9600보드레이트로 설정
}

void loop() {
  int right = analogRead(RIGHT_IR_PIN); // right라는 변수에 A7번핀에서 읽은 값을 아날로그값으로 저장
  int left = analogRead(LEFT_IR_PIN); // left라는 변수에 A6번핀에서 읽은 값을 아날로그값으로 저장
  Serial.print(left);
  Serial.print(“/");
  Serial.println(right); // left right값을 순서대로 출력
  delay(100);
}
