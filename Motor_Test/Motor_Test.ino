
int motorPin = 9;    // small motor connected to digital pin 9

void setup() {
  // nothing happens in setup
}

void loop() {
  
    analogWrite(motorPin, 100);
    // wait for 1 second 
    delay(1000);

    analogWrite(motorPin, 256);
    // wait for 1 second 
    delay(1000);
  


}
