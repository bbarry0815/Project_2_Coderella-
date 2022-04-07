/*
AET Apollo and Daphne 
Team Name: Coderella
Team Members: Brendan Barry, Carmen Turner, and Cassandra Jean-Baptiste
Description: button and servo program
 */
//Servo library code
#inlcude<Servo.h>;

//VARIABLES
Servo myServo;
const int buttonPin = 7;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
