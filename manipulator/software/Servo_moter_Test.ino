/*#include <Servo.h>////서보모터를 쉽게 사용할수 있는 라이브러리.

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5; ////모터 1번부터 5번

short al1,al2,al3,al4;//,al5;
void setup()
{
  Serial.begin(9600);
  motor1.attach(3); //// 1번 모터를 5번에 연결하여 사용.
  motor2.attach(5); 
  motor3.attach(6);
  motor4.attach(9);
  motor5.attach(10);
}
void loop() ////무한반복 루프문.
{
  motor1.write(90);/////모터 전부 90도로 맞춘다.
  motor2.write(90);
  motor3.write(90);
  motor4.write(90);
  //motor5.write(90);
  al1 = analogRead(A1); /// al1값에 아두이노 A1값을 넣겠다는것.
  al2 = analogRead(A2); 
  al3 = analogRead(A3);
  al4 = analogRead(A4);
  al5 = analogRead(A5); ////////////////al1~5값을 사용하기위해서는 변수.

  
  delay(50); ///////잠깐 정지 0.05초
}*/
