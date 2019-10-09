String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete

void setup() {
  Serial.begin(9600);

   inputString.reserve(1);

}

void loop() {

  if (Serial.available()) {
      ItSaid = (Serial.read());
      Serial.print("You said ");
      Serial.write(inputString);
      Serial.println(".");
     // delay(100);
      }

}
