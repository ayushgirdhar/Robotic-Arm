
#include <Servo.h>

Servo servo1;// create servo object to control a servo at shoulder
Servo servo2;// create servo object to control a servo at elbow
Servo servo3;// create servo object to control a servo at wrist

int pot1 = A1;  // analog pin used to connect the potentiometer at shoulder
int pot2 = A2;  // analog pin used to connect the potentiometer at elbow
int pot3 = A3;  // analog pin used to connect the potentiometer at wrist
int val1;    // variable to read the shoulder position
int val2;    // variable to read the elbow position
int val3;    // variable to read the wrist position
void setup() 
{
  servo1.attach(4);  // attaches the servo on pin 4 to the servo object
  servo2.attach(4);  // attaches the servo on pin 4 to the servo object
  servo3.attach(4);  // attaches the servo on pin 4 to the servo object
}

void loop()
{
  val1 = analogRead(pot1);       
  val2 = analogRead(pot1); 
  val3 = analogRead(pot1);      
  val1 = map(val1, 0, 1023, 0, 179);    
  val1 = map(val1, 0, 1023, 0, 179);   
  val1 = map(val1, 0, 1023, 0, 179);    
  servo1.write(val1);     
  delay(15); 
  servo1.write(val2);
  delay(15);
  servo1.write(val3);            
  delay(15);                           
}

