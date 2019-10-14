// Include the Servo library
// https://www.instructables.com/id/Arduino-Servo-Motors/

#include <Servo.h> 

int servoPin = 3; // Declare the Servo pin 




Servo Servo1; // Create a servo object


void setup() { 
    
   Servo1.attach(servoPin); // We need to attach the servo to the used pin number
     
}
void loop(){ 

   
   Servo1.write(10); // Make servo go to 0 degrees
   delay(2000); 
   Servo1.write(90); // Make servo go to 0 degrees
   delay(2000); 
   Servo1.write(180); // Make servo go to 0 degrees
   delay(2000); 
   
}
