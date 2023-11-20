//**********************************************************************************
/*  
 * Filename    : Fire-fighting robot
 * Description : Flame sensor controls the 130 fan module
 * Auther      : http//www.keyestudio.com
*/
int item = 0;
void setup() {
  Serial.begin(9600);
  pinMode(15, OUTPUT);//INA corresponds to IN+, and sets GPIO15 to output mode
  pinMode(4, OUTPUT);//INB corresponds to IN-, and sets GPIO4 to output mode
}

void loop() {
  item = analogRead(34);//The flame sensor is connected to GPIO34, and read the simulated value to Item  
  Serial.println(item);//Serial port display analog value
  if (item < 3000) {//Less than 3000
    digitalWrite(15, LOW);//Turn on the fan
    digitalWrite(4, HIGH);
  } else {//Otherwise, turn off the fan.
    digitalWrite(15, LOW);
    digitalWrite(4, LOW);
  }
  delay(100);
}
//**********************************************************************************
