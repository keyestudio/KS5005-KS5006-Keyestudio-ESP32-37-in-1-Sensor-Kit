//*************************************************************************************
/*
 * Filename    : Touch sensor
 * Description : Reading touch value
 * Auther      : http://www.keyestudio.com
*/
int val = 0;
int touch = 15; //The key of PIN  
void setup() {
  Serial.begin(9600);//Baud rate is 9600
  pinMode(touch, INPUT);//Setting input mode
}

void loop() {
  val = digitalRead(touch);//Read the value of the key
  Serial.print(val);//Print out key values
  if (val == 1) {//Press for high level
    Serial.print("        ");
    Serial.println("Press the button");
    delay(100);
  }
  else {//Release to low level
    Serial.print("        ");
    Serial.println("Loosen the button");
    delay(100);
  }
}
//*************************************************************************************
