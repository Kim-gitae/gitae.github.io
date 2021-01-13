/*void setup() 
{
  Serial.begin(9600);
  pinMode(4, OUTPUT); //모터 왼쪽
  pinMode(5, OUTPUT); //모터 왼쪽
  pinMode(7, OUTPUT); //모터 오른쪽
  pinMode(8, OUTPUT); //모터 오른쪽
  
  pinMode(10, INPUT_PULLUP); //센서 오른쪽 부터1
  pinMode(11, INPUT_PULLUP); //센서 2
  pinMode(12, INPUT_PULLUP); //센서 3
  pinMode(6, INPUT_PULLUP); //센서 4
}
void FR(int i)
{
    digitalWrite(4, HIGH);  // 모터 왼쪽 설정
    digitalWrite(5, LOW);
    analogWrite(3, i); 
}
void BR(int i)
{
    digitalWrite(4, LOW);  // 모터 왼쪽 설정
    digitalWrite(5, HIGH);
    analogWrite(3, 70 - i);      
}
void FL(int i)
{
    digitalWrite(7, HIGH);  // 모터 오른쪽 설정
    digitalWrite(8, LOW);
    analogWrite(9, i);
}
void BL(int i)
{
    digitalWrite(7, LOW);  // 모터 오른쪽 설정
    digitalWrite(8, HIGH);
    analogWrite(9, 70 - i);   
}
  void loop()
  {
    int LL_sensor = digitalRead(10);
    int L_sensor = digitalRead(11);
    int R_sensor = digitalRead(12);
    int RR_sensor = digitalRead(6);

    if((L_sensor == 0) && (R_sensor == 1))
    {
      BL(70);
      FR(70);
    }
    
    else if((L_sensor == 1) && (R_sensor == 0))
    {
      FL(70);
      BR(70);
    }
   if((L_sensor == 0) && (R_sensor == 0))
    {
      FL(80);
      FR(80);
    }
    if((LL_sensor == 0) && (L_sensor == 0))
    {
      FL(80);
      BR(120);
    }
    if((L_sensor == 1) && (R_sensor == 1))
    {
      FL(0);
      FR(0); 
    }
  }
  */
