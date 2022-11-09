  int led1=8;//red
  int led2=9;//yellow
  int led3=10;//green

  void setup() {
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    
    
  }

void loop(){
   digitalWrite(led2,HIGH);
   delay(500);
   digitalWrite(led2,LOW);
   delay(1000);
   digitalWrite(led1,HIGH);
   delay(3000);
   digitalWrite(led1,LOW);
   delay(1000);
   digitalWrite(led3,HIGH);
   delay(3000);
   digitalWrite(led3,LOW);
   delay(1000);
   
}
