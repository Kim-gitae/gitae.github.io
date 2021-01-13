/*void setup() 
  {
    Serial.begin(9600);
    pinMode(4, OUTPUT); //LED1
    pinMode(5, OUTPUT); //LED2
    pinMode(7, OUTPUT); //LED3
    pinMode(8, OUTPUT); //LED4
    
    pinMode(10, INPUT_PULLUP); //센서 오른쪽 부터1
    pinMode(11, INPUT_PULLUP); //센서 2
    pinMode(12, INPUT_PULLUP); //센서 3
    pinMode(6, INPUT_PULLUP); //센서 4
  }
void loop()
  {
    int sensor1 = digitalRead(10);
    int sensor2 = digitalRead(11);
    int sensor3 = digitalRead(12);
    int sensor4 = digitalRead(6);

    if((sensor1 == 1) && (sensor2 == 0) && (sensor3 == 0) && (sensor4 == 0))
    {
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
    }
    else if((sensor1 == 0) && (sensor2 == 1) && (sensor3 == 0) && (sensor4 == 0))
    {
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
    }
    else if((sensor1 == 0) && (sensor2 == 0) && (sensor3 == 1) && (sensor4 == 0))
    {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
    }
    else if((sensor1 == 0) && (sensor2 == 0) && (sensor3 == 0) && (sensor4 == 1))
    {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
    }
    else 
    {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);    
    }
  }
  */
