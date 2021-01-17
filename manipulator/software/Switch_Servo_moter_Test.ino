/*#include <Servo.h>

Servo motor1,motor2,motor3,motor4,motor5;
int SW=11;
int al1,al2,al3,al4,al5;
int ang1,ang2,ang3,ang4,ang5;
byte phase = 0;
void setup()
{
  Serial.begin(9600);
  motor1.attach(3); 
  motor2.attach(5); 
  motor3.attach(6);
  motor4.attach(9);
  motor5.attach(10);      
  pinMode(SW, INPUT_PULLUP);////스위치
  motor1.write(90);
  motor2.write(90);
  motor3.write(90);
  motor4.write(90);
  motor5.write(90);

}
void loop()
{
  if(digitalRead(SW)==LOW)////스위치를 아래로 내렸을때.
 { 
  { 
  phase=1;////내렸을떄 phase=1이되고.
  al1 = analogRead(A1);
  al2 = analogRead(A2);
  al3 = analogRead(A3);
  al4 = analogRead(A4);
  al5 = analogRead(A5);

  }
  if(phase==1)///for문으로.
  {
  ang1 = map(al1,926,73,0,180);
  ang2 = map(al2,73,926,0,180);
  ang3 = map(al3,926,73,0,180);
  ang4 = map(al4,926,73,0,180); 
  ang5 = map(al5,926,73,0,180);////1~5번까지 map으로 각을 지정.    
  ang1 = constrain(ang1,0,180);
  ang2 = constrain(ang2,0,180);
  ang3 = constrain(ang3,0,180);
  ang4 = constrain(ang4,0,180);
  ang5 = constrain(ang5,0,180);///1~5번까지 각도 고정.  
  motor1.write(ang1);
  motor2.write(ang2);
  motor3.write(ang3);
  motor4.write(ang4);  
  motor5.write(ang5);
  }
 }
  else  phase=0;
  
  delay(100);
}*/
