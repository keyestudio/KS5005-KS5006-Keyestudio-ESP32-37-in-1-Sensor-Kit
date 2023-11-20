//*************************************************************************************
/*
 * Filename    : Laser sensor
 * Description : Laser light flashing
 * Auther      : http://www.keyestudio.com
*/
int laserPin = 0; //Define the laser pin as GPIO 0
void setup() {
  pinMode(laserPin, OUTPUT);//Define laser pin as output mode
}

void loop() {
  digitalWrite(laserPin, HIGH); //Open the laser
  delay(2000);  //Delay 2 seconds
  digitalWrite(laserPin, LOW); //Shut down the laser
  delay(2000);  //Delay 2 seconds
}
//*************************************************************************************
