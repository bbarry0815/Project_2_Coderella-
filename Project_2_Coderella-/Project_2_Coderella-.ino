#include <Servo.h>

const int bridge1ServoPin = 2; //pin for the bridge servo
const int treeServoPin = 7; //pin for tree servo
const int aSwitch = 8; //pin for Apollo switch
const int dSwitch = 9; //pin for Daphane switch
const int bSwitch = 10; //pin for bridge switch
const int tSwitch = 11; //pin for tree switch
const int aLight = 12; //pin for Apollo light
const int dLight = 13; //pin for Daphane light



int aValue;
int dValue;
int bValue;
int tValue;
Servo bridge1Servo;
Servo treeServo;


void setup() {
  //Sets outputs and inputs to various pins as well as attaches servos:
  bridge1Servo.attach(bridge1ServoPin);
  treeServo.attach(treeServoPin);
  bridge1Servo.write(0);
  treeServo.write(0);
  pinMode(aSwitch, INPUT);
  pinMode(dSwitch, INPUT);
  pinMode(bSwitch, INPUT);
  pinMode(tSwitch, INPUT);
  pinMode(aLight, OUTPUT);
  pinMode(dLight, OUTPUT);
  
  
}

void loop() {
  
  aValue = digitalRead(aSwitch);
  dValue = digitalRead(dSwitch);
  bValue = digitalRead(bSwitch);
  tValue = digitalRead(tSwitch);

  //activates apollo's light if the value is high
  if(aValue == HIGH){
    digitalWrite(aLight,HIGH);
  }
  else {
    digitalWrite(aLight,LOW);
  }
  //activates daphenes light if value is high
  if(dValue == HIGH){
    digitalWrite(dLight,HIGH);
  }
  else {
    digitalWrite(dLight,LOW);
  }
  //rotates te bridge servo 180 degrees if value is high
  if (bValue == HIGH){
    bridge1Servo.write(180);
  }
  else {
    bridge1Servo.write(0);
  }
  //rotates tree servo 180 degrees if value is high
  if(tValue == HIGH){
    treeServo.write(180);
  }
  else{
    treeServo.write(0);
  }
}
