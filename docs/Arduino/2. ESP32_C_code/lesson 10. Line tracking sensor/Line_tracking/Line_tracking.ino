//*************************************************************************************
/*
 * Filename    : line tracking
 * Description : Reading the tracking sensor value
 * Auther      : http://www.keyestudio.com
*/
int val = 0;
void setup() {
  Serial.begin(9600);//Set baud rate to 9600
  pinMode(15, INPUT);//Sets sensor pin to input mode
}

void loop() {
  val = digitalRead(15);//Read the digital level output by the patrol sensor
  Serial.print(val);//Serial port print value
  if (val == 0) {//White val is 0 detected
    Serial.print("        ");
    Serial.println("White");
    delay(100);
  }
  else {//Black val is 1 detected
    Serial.print("        ");
    Serial.println("Black");
    delay(100);
  }
}
//*************************************************************************************
