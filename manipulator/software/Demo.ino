/*#include <Servo.h>

Servo motor1,motor2,motor3,motor4;
int SW1=3;
int SW2=12;
int al1,al2,al3,al4;
int x1,x2,x3,x4;
int ang1,ang2,ang3,ang4;
byte phase1 = 0;
byte phase2 = 0;
byte save1[300],save2[300],save3[300],save4[300];
int i;
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
 if(digitalRead(SW1)==LOW)
 { 
  { 
  phase1=1;
  al1 = analogRead(A1);
  al2 = analogRead(A2);
  al3 = analogRead(A3);
  al4 = analogRead(A4);
  }
  if(phase1==1)
  {
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
  else  phase1=0;
  
 if(digitalRead(SW2)==LOW)
 {
  phase2=1;
 }
 if(phase==2)
 {
    for(i=0;i<100;i++)
    {
    hana = map(analogRead(A1),926,73,0,180);
    save1[i]= hana;
    motor1.write(hana);
   }
 }
  if(digitalRead(SW2)==HIGH)
  if(phase1&&phase2==1);
  if(phase=)
  {
     motor1.write(hana);
  

  //Serial.print("  save2=");
  //Serial.print(ang2);
  //Serial.print("  save3=");
  //Serial.print(ang3);
  //Serial.print("  save4=");
  //Serial.println(4);
      


       
  delay(100);
}*/
