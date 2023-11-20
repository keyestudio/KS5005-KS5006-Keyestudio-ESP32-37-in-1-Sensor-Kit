//**********************************************************************************
/*  
 * Filename    : Flame Alarm
 * Description : Controlling the buzzer by flame sensor.
 * Auther      : http//www.keyestudio.com
*/
int item = 0;
void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);//Flame sensor digital pin is connected to GPIO4
  pinMode(15, OUTPUT);//Buzzer pin is connected to GPIO15
}

void loop() {
  item = digitalRead(4);//Read the digital level output by the flame sensor
  Serial.println(item);//Newline print level signal
  if (item == 0) {//Flame detected
    digitalWrite(15, HIGH);//Turn on the buzzer
  } else {//Otherwise, turn off the buzzer
    digitalWrite(15, LOW);
  }
  delay(100);//Delay 100ms
}
//**********************************************************************************
