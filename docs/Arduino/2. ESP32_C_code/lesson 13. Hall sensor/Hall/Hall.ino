//*************************************************************************************
/*
 * Filename    : Hall magnetic
 * Description : Reading the value of hall magnetic sensor
 * Auther      : http://www.keyestudio.com
*/
int val = 0;
int hallPin = 15;  //Hall sensor pin is connected to GPIO15
void setup() {
  Serial.begin(9600);//Set baud rate to 9600
  pinMode(hallPin, INPUT);//Set pin to input mode
}

void loop() {
  val = digitalRead(hallPin);//Read the level value of hall sensor
  Serial.print(val);//Print val
  if (val == 0) {//There is a South Pole magnetic field
    Serial.println("      The magnetic field at the South Pole!");
  }
  else {//If not
    Serial.println("      Just be all normal!");
  }
}
//*************************************************************************************
