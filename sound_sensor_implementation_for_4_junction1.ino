int potVal_0=0;
int ledVal=0;
int potVal_1=0;
int ledVal1=0;
int potVal_2=0;
int ledVal2=0;
int potVal_3=0;
int ledVal3=0;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(A1,  INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(A0,  INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(A2,  INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A3,  INPUT);
  Serial.begin(9600);
}

void open(){
 
  
if(potVal_0>0 && potVal_1 ==0 && potVal_2==0 && potVal_3==0){
   ledVal = map(potVal_0, 0, 1019, 0, 256);
   Serial.println(ledVal);
   analogWrite(4, ledVal);
   delay(500);
   digitalWrite(4,LOW);
   digitalWrite(3,LOW);
   digitalWrite(2,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(11,HIGH);
}
if(potVal_1>0 && potVal_0 ==0 && potVal_2==0 && potVal_3==0){
   ledVal1 = map(potVal_1, 0, 1019, 0, 256);
   Serial.println(ledVal1);
   analogWrite(7, ledVal1);
   delay(500);
   digitalWrite(7,LOW);
   digitalWrite(6,LOW);
   digitalWrite(5,LOW);
   digitalWrite(2,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(11,HIGH);
   
}
if(potVal_2>0 && potVal_1 ==0 && potVal_0==0 && potVal_3==0){
   ledVal2 = map(potVal_2, 0, 1019, 0, 256);
   Serial.println(ledVal2);
   analogWrite(10, ledVal2);
   delay(500);
   digitalWrite(10,LOW);
   digitalWrite(9,LOW);
   digitalWrite(8,LOW);
   digitalWrite(2,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(11,HIGH);
}
if(potVal_3>0 && potVal_1 ==0 && potVal_2==0 && potVal_0==0){
   ledVal3 = map(potVal_3, 0, 1019, 0, 256);
   Serial.println(ledVal3);
   analogWrite(13, ledVal3);
   delay(500);
   digitalWrite(13,LOW);
   digitalWrite(12,LOW);
   digitalWrite(11,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(2,HIGH);
}
}
void loop()
{
   potVal_0 = analogRead(A1);
   Serial.print(potVal_0);
   Serial.print(", ");
  potVal_1 = analogRead(A0);
   Serial.print(potVal_1);
   Serial.print(", ");
  potVal_2 = analogRead(A2);
   Serial.print(potVal_2);
   Serial.print(", "); 
  potVal_3 = analogRead(A3);
   Serial.print(potVal_3);
   Serial.print(", ");
  if(potVal_0>0 || potVal_1 >0 || potVal_2>0 || potVal_3>0){
    open();
}
  else{
    digitalWrite(5,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(2,HIGH);
    delay(2500);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(2500);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    delay(2500);
    digitalWrite(4,LOW);

    digitalWrite(2,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(5,HIGH);
    delay(2500);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    delay(2500);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(2500);
    digitalWrite(7,LOW);
    
    digitalWrite(2,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(11,HIGH);
    delay(2500);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    delay(2500);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    delay(2500);
    digitalWrite(10,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(5,HIGH);

    delay(2500);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    delay(2500);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(2500);
    digitalWrite(13,LOW);

}
}