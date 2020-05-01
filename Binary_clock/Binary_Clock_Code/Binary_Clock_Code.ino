#include <DS3231.h>
DS3231 rtc(SDA,SCL);
int Hour, Min, Sec;
int activate = 0;
Time t;
int pos = 0;
void setup()
{
  Serial.begin(115200);
  rtc.begin(); 
  pinMode(22,OUTPUT);
  pinMode(2,OUTPUT);   
  pinMode(3,OUTPUT);   
  pinMode(4,OUTPUT);   
  pinMode(5,OUTPUT);   
  pinMode(6,OUTPUT);   
  pinMode(7,OUTPUT);   
  pinMode(8,OUTPUT);   
  pinMode(9,OUTPUT);   
  pinMode(10,OUTPUT);   
  pinMode(11,OUTPUT);   
  pinMode(12,OUTPUT);   
  pinMode(13,OUTPUT);   
  pinMode(23,OUTPUT);   
  pinMode(24,OUTPUT);   
  pinMode(25,OUTPUT);   
  pinMode(26,OUTPUT);   
  pinMode(27,OUTPUT);   
  pinMode(28,OUTPUT);   
  pinMode(29,OUTPUT);      
  //rtc.setTime(21 ,03 ,50); 
  //rtc.setDate(2, 8, 2018);  
}

void loop()
{ 
  if (activate == 0)
  { 
    
    t = rtc.getTime();
    Hour = t.hour;
    Min = t.min;
    Sec = t.sec;
    Serial.print(Hour);
    Serial.print(":");
    Serial.print(Min);
    Serial.print(":");
    Serial.println(Sec);
    if(Hour == 00){
      digitalWrite(8, LOW);
      digitalWrite(9,LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    if(Hour == 1){
      digitalWrite(8, HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    if(Hour == 2){
      digitalWrite(8, LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    if(Hour == 3){
      digitalWrite(8, HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    if(Hour == 4){
      digitalWrite(8, LOW);
      digitalWrite(9,LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    if(Hour == 5){
      digitalWrite(8, HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    if(Hour == 6){
      digitalWrite(8, LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    if(Hour == 7){
      digitalWrite(8, HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    if(Hour == 8){
      digitalWrite(8, LOW);
      digitalWrite(9,LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    if(Hour == 9){
      digitalWrite(8, HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    if(Hour == 10){
      digitalWrite(8, LOW);
      digitalWrite(9,LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    if(Hour == 11){
      digitalWrite(8, HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    if(Hour == 12){
      digitalWrite(8, LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    if(Hour == 13){
      digitalWrite(8, HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    if(Hour == 14){
      digitalWrite(8, LOW);
      digitalWrite(9,LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    if(Hour == 15){
      digitalWrite(8, HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    if(Hour == 16){
      digitalWrite(8, LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    if(Hour == 17){
      digitalWrite(8, HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    if(Hour == 18){
      digitalWrite(8, LOW);
      digitalWrite(9,LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    if(Hour == 19){
      digitalWrite(8, HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }
    if(Hour == 20){
      digitalWrite(8, LOW);
      digitalWrite(9,LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
    }
    if(Hour == 21){
      digitalWrite(8, HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
    }
    if(Hour == 22){
      digitalWrite(8, LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
    }
    if(Hour == 23){
      digitalWrite(8, HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
    }
    


/*
--------------------------------------------------------------------------------------------------------------------------------------------------*/



    
    if(Min == 0){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 1){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 2){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 3){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 4){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 5){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 6){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 7){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 8){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 9){
      digitalWrite(22, 1);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      
    }
    if(Min == 10){
      digitalWrite(22, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      
    }
    if(Min == 11){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 12){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 13){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 14){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 15){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 16){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 17){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 18){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 19){
      digitalWrite(22, 1);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      
    }
    if(Min == 20){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 21){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 22){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 23){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 24){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 25){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 26){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 27){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 28){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, LOW);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 29){
      digitalWrite(22, 1);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, LOW);
      digitalWrite(6,1);
      digitalWrite(7, LOW);
      
    }if(Min == 30){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 31){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 32){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 33){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 34){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 35){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 36){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 37){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, 1);
    }
    if(Min == 38){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      digitalWrite(22, LOW);
    }
    if(Min == 39){
      digitalWrite(22, 1);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, LOW);
      
    }
    if(Min == 40){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, LOW);
    }
    if(Min == 41){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, 1);
    }
    if(Min == 42){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, LOW);
    }
    if(Min == 43){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, 1);
    }
    if(Min == 44){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, LOW);
    }
    if(Min == 45){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, 1);
    }
    if(Min == 46){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, LOW);
    }
    if(Min == 47){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, 1);
    }
    if(Min == 48){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, LOW);
    }
    if(Min == 49){
      digitalWrite(22, 1);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      
    }
    if(Min == 50){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, LOW);
    }
    if(Min == 51){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, 1);
    }
    if(Min == 52){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, LOW);
    }
    if(Min == 53){
      digitalWrite(2, 1);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, 1);
    }
    if(Min == 54){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7,1);
      digitalWrite(22, LOW);
    }
    if(Min == 55){
      digitalWrite(2, LOW);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, 1);
    }
    if(Min == 56){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, LOW);
    }
    if(Min == 57){
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, LOW);
      digitalWrite(5,1);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, 1);
    }
    if(Min == 58){
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      digitalWrite(22, LOW);
    }
    if(Min == 59){
      digitalWrite(22, 1);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, LOW);
      digitalWrite(7, 1);
      
    }

/*-----------------------------------------------------------------------------------------------------------------------------*/
    
    if(Sec == 00){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 1){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 2){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 3){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 4){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 5){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 6){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 7){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 8){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 9){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 10){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 11){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 12){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 13){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 14){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 15){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 16){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 17){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 18){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 19){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25,1);
      digitalWrite(24, LOW);
      digitalWrite(23, LOW);
    }
    if(Sec == 20){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 21){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 22){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 23){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 24){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 25){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 26){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 27){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24,1);
      digitalWrite(23, LOW);
    }
    if(Sec == 28){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25, LOW);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 29){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25, LOW);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 30){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 31){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 32){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 33){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 34){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 35){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 36){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 37){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 38){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25, 1);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 39){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25, 1);
      digitalWrite(24, 1);
      digitalWrite(23, LOW);
    }
    if(Sec == 40){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 41){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 42){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 43){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 44){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 45){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 46){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 47){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 48){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 49){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25, LOW);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 50){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 51){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 52){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 53){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 54){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 55){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 56){
      
      digitalWrite(29, LOW);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 57){
      
      digitalWrite(29, 1);
      digitalWrite(28, 1);
      digitalWrite(27, 1);
      digitalWrite(26, LOW);
      digitalWrite(25,1);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 58){
      
      digitalWrite(29, LOW);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
    if(Sec == 59){
      
      digitalWrite(29, 1);
      digitalWrite(28, LOW);
      digitalWrite(27, LOW);
      digitalWrite(26, 1);
      digitalWrite(25, 1);
      digitalWrite(24, LOW);
      digitalWrite(23, 1);
    }
  }
}
      
  
    

