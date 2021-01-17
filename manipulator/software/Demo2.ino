#include <Servo.h>

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;

short al1,al2,al3,al4,al5;
short num,repeat,i;
short SW1=11;
short SW2=12;
byte ang1,ang2,ang3,ang4,ang5;
byte phase = 0;
byte save1[200],save2[200],save3[200],save4[200],save5[200];
void setup()
{

  motor1.attach(3);
  motor2.attach(5);
  motor3.attach(6); 
  motor4.attach(9);
  motor5.attach(10);
  pinMode(SW1, INPUT_PULLUP);
  motor1.write(90);
  motor2.write(90);
  motor3.write(90);
  motor4.write(90);
  motor5.write(90);
  pinMode(SW2, INPUT_PULLUP);

}
void loop()
{
  if(digitalRead(SW1)==LOW)
  { 
  phase=1;
  al1 = analogRead(A1); 
  al2 = analogRead(A2); 
  al3 = analogRead(A3);
  al4 = analogRead(A4);
  al5 = analogRead(A5);
  }
  if(digitalRead(SW2)==LOW)///똑같이 if문 이용하여 12번 핀에 연결된 스위치가 눌리면 아래문장 실행.
  {
  if(num==0)///number==0이면 동작실행. 0이 되는 이유는 누르면 1 때면 0인데, 때고 난 후 저장된 행동을 실행해야 되기 때문에.
  {
  for(i=0;i<300;i++)//꼭 변수선언하고 변수 쓰기.
    {//for문은 반복해줄때, 300번 반복하는 이유는 경로를 클리어 해주는 역할.
    save1[i]==0;
    save2[i]==0;
    save3[i]==0;
    save4[i]==0;
    save5[i]==0;
    }
  }/////////////////////////여기 아래가 로봇팔의 경로를 저장하는 역할.
  save1[num] = ang1;
  save2[num] = ang2;
  save3[num] = ang3;/////배열은 0~299까지
  save4[num] = ang4;
  save5[num] = ang5;
  num++;
  }
  if(digitalRead(SW2)==HIGH)
  {
  if(num!=0)///number가 0이 아닐때,
  {
  delay(10);
  repeat=num;//repat이라는 함수에 number을 넣어준다.
  phase=2;///phase=2일때 실행 
  }
  num = 0;
  }
  if(phase==1)///SW1을 눌렀을때, 각도와 모션.
  {
  ang1 = map(al1,920,73,0,180);
  ang2 = map(al2,73,926,0,180);
  ang3 = map(al3,73,926,0,180);
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
  if(phase==2)
  {
    for(i=0;i<repeat;i++)
    {
    motor1.write(save1[i]);
    motor2.write(save2[i]);///반대로 작동할 경우 180-save2[i]를 해준다.
    motor3.write(save3[i]);
    motor4.write(save4[i]);
    motor5.write(save5[i]);
    delay(50);
    }
    num++;
  }
   if(phase==3)
   {
     phase=1;
   }
  delay(50); ///////잠깐 정지 0.05초
}
