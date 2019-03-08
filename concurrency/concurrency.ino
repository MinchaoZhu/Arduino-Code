#include <SCoop.h>
int startPin = 2;
int endPin = 8 ;
int delayTime = 50;


 


defineTask(task1);
void task1::setup(){
  for(int i = startPin;i<=endPin;++i){
    pinMode(i,OUTPUT);
  }
}
void task1::loop(){
    int i = 0;
    for(i=startPin;i<=endPin;++i){
      digitalWrite(i,1);
      sleep(delayTime);
    }
    for(i=startPin;i<=endPin;++i){
      digitalWrite(i,0);
      sleep(delayTime);
    }
     for(i=endPin;i>=startPin;--i){
      digitalWrite(i,1);
      sleep(delayTime);
    }
    for(i=endPin;i>=startPin;--i){
      digitalWrite(i,0);
      sleep(delayTime);
    }
    sleep(100);
}
defineTask(task2);
void task2::setup(){
    pinMode(9,OUTPUT);
}
void task2::loop(){
    digitalWrite(9, HIGH);
    sleep(200);
    digitalWrite(9, LOW);
    sleep(200);
}
void setup() {
  // put your setup code here, to run once:
  mySCoop.start();
}
void loop() {
  // put your main code here, to run repeatedly:
  yield();
} 
