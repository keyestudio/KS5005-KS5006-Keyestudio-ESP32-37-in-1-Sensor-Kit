//*************************************************************************************
/*
 * Filename    : Photo_Interrupt
 * Description : Light snap sensor counting
 * Auther      : http://www.keyestudio.com
*/
int PushCounter = 0; //The count variable is assigned an initial value of 0
int State = 0; //Store the current state of the sensor output
int lastState = 0; //Stores the state of the last sensor output
void setup() {
  Serial.begin(9600);//Set the baud rate to 9600
  pinMode(15, INPUT);//Set the light snap sensor pin to input mode
}

void loop() {
  State = digitalRead(15);//Read current state
  if (State != lastState) {//If the state is different from the last read
    if (State == 1) {//block the light 
      PushCounter = PushCounter + 1;//Count + 1
      Serial.println(PushCounter);//Print count
    }
  }
  lastState = State;//Update state
}
//*************************************************************************************
