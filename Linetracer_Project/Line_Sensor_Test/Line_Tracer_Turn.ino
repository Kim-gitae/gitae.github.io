void setup() 
{
  Serial.begin(9600);
  pinMode(12, OUTPUT); //모터 왼쪽
  pinMode(7, OUTPUT); //모터 왼쪽
  pinMode(9, OUTPUT); //모터 오른쪽
  pinMode(8, OUTPUT); //모터 오른쪽
  
  pinMode(10, INPUT); //센서 오른쪽 부터1
  pinMode(11, INPUT); //센서 2

}
void FF()
{
    digitalWrite(12, HIGH);  // 모터 왼쪽 설정
    digitalWrite(7, LOW);
    analogWrite(3, 60);  
    digitalWrite(9, HIGH);  // 모터 오른쪽 설정
    digitalWrite(8, LOW);
    analogWrite(9, 60); 
}
void FL()
{       
    digitalWrite(12, HIGH);  // 모터 왼쪽 설정
    digitalWrite(7, LOW);
    analogWrite(3, 70);  
    digitalWrite(9, HIGH);  // 모터 오른쪽 설정
    digitalWrite(8, LOW);
    analogWrite(9, 0);    
}
void FR()
{
    digitalWrite(12, HIGH);  // 모터 왼쪽 설정
    digitalWrite(7, LOW);
    analogWrite(10, 0);  
    digitalWrite(9, HIGH);  // 모터 오른쪽 설정
    digitalWrite(8, LOW);
    analogWrite(11, 70);   
        
}
void STOP()
{
    digitalWrite(12, HIGH);  // 모터 왼쪽 설정
    digitalWrite(7, LOW);
    analogWrite(10, 0);  
    digitalWrite(9, HIGH);  // 모터 오른쪽 설정
    digitalWrite(8, LOW);
    analogWrite(11, 0);    
}
void RR()
{
    digitalWrite(12, HIGH);  // 모터 왼쪽 설정
    digitalWrite(7, LOW);
    analogWrite(10, 0);  
    digitalWrite(9, HIGH);  // 모터 오른쪽 설정
    digitalWrite(8, LOW);
    analogWrite(11, 70);
}
void LL()
{
    digitalWrite(12, HIGH);  // 모터 왼쪽 설정
    digitalWrite(7, LOW);
    analogWrite(10, 70);  
    digitalWrite(9, HIGH);  // 모터 오른쪽 설정
    digitalWrite(8, LOW);
    analogWrite(11, 0);
}
  void loop()
  {
    int flag1;
    int L_sensor = digitalRead(2);
    int R_sensor = digitalRead(3 );
    flag1=0;
    
      switch(flag1)
      {
        case 0:
        if((L_sensor==1)&&(R_sensor==1))
        {
          FF();
        }
        else if((L_sensor==1)&&(R_sensor==0))
        {
          FR();
        }        
        else if((L_sensor==0)&&(R_sensor==1))
        {
          FL();
        }
        else if((L_sensor==0)&&(R_sensor==0))
        {
          STOP();
          break;
        }
      }

       Serial.print("  flag1:");
  Serial.print(flag1);   
 
  } 
