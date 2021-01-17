/*#include <Servo.h>

Servo motor1,motor2,motor3,motor4;
int SW1=3;
int SW2=12;
int al1,al2,al3,al4;
int x1,x2,x3,x4;
int ang1=0,ang2=0,ang3=0,ang4=0;
int phase1 = 0;
int phase2 = 0;
int save1[300]={0};//save2[300],save3[300],save4[300];
int i,repeat;
int j;
void setup()
{
  Serial.begin(9600);
  motor1.attach(5); 
  motor2.attach(6);
  motor3.attach(9);
  motor4.attach(10);      
  pinMode(SW1, INPUT_PULLUP);
  motor1.write(90);
  motor2.write(90);
  motor3.write(90);
  motor4.write(90);
  pinMode(SW2, INPUT_PULLUP);
}
void loop()
{
  //////////////////////////////////   움직임/ 
 if(digitalRead(SW1)==LOW)
 { 
  { 
  phase1=1;
  x1 = analogRead(A1);
  x2 = analogRead(A2);
  x3 = analogRead(A3);
  x4 = analogRead(A4);
  al1 = -x1;            /////////////////반대로 움직여서 - 넣음
  al2 = -x2;
  al3 = -x3;
  al4 = -x4;
  }

////////////////////////////////////////////////

  
  if(phase1==1)
  {
  al1 = analogRead(A1); 
  al2 = analogRead(A2); 
  al3 = analogRead(A3); 
  al4 = analogRead(A4); 
  ang1 = map(al1,926,73,0,180);
  ang2 = map(al2,926,73,0,180);
  ang3 = map(al3,926,73,0,180);
  ang4 = map(al4,926,73,0,180);    
  ang1 = constrain(ang1,0,180);
  ang2 = constrain(ang2,0,180);
  ang3 = constrain(ang3,0,180);
  ang4 = constrain(ang4,0,180);  
  motor1.write(ang1);
  motor2.write(ang2);
  motor3.write(ang3);
  motor4.write(ang4);  
  }
 } 
  else  phase1==0;

  ///////////////////////////////////////스위치 2 안 눌렀을 때,
  if(digitalRead(SW2)==HIGH) 
  {
  phase2=0;
  x1 = analogRead(A1);
  x2 = analogRead(A2);
  x3 = analogRead(A3);
  x4 = analogRead(A4);
  al1 = -x1;                   /////////////////반대로 움직여서 - 넣음
  al2 = -x2;
  al3 = -x3;
  al4 = -x4;
  }
  if(phase2==0)           ///////스위치2 안 눌렀을 때, 값 저장
   {
    for(i=0;i<300;i++)
    {
    save1[i]==ang1;
//    save2[i]==ang2;
//    save3[i]==ang3;
//    save4[i]==ang4;
    delay(50);
    }
   }
   ////////////////////////////////////스위치2 눌렀을 때, 값 실행
  if(digitalRead(SW2)==LOW) 
  {
    for(j=0; j<i; j++)
    {
    motor1.write(save1[j]);
//    motor2.write(save2);
//    motor3.write(save3);
//    motor4.write(save4);
    }
  }


  
}*/
