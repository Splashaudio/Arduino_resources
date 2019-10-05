// Include the Servo library
// https://www.instructables.com/id/Arduino-Servo-Motors/

#include <Servo.h> 
const int analogInPin = A0;

int servoPin = 3; // Declare the Servo pin 

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)


Servo Servo1; // Create a servo object


void setup() { 
    
   Servo1.attach(servoPin); // We need to attach the servo to the used pin number
     
  Serial.begin(9600); // initialize serial communications at 9600 bps:
}
void loop(){ 

    // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
    
   Servo1.write(outputValue); // Make servo go to 0 degrees
   Serial.println(sensorValue);
   delay(10); 
   
   
}