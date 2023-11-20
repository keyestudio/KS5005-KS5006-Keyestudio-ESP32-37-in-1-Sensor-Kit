//**********************************************************************************
/*  
 * Filename    : smart window
 * Description : Water drop sensor controls steering gear rotation.
 * Auther      : http//www.keyestudio.com
*/
#include <ESP32Servo.h>//Import the steering gear library file
int adcVal = 0;//A variable that holds the ADC value output by the droplet sensor
int servoPin = 15;  // Define the servo pin
Servo myservo;//Defines an instance of the steering gear class

#define PIN_ADC    34  //the pin of the Water drop sensor

void setup(){
  Serial.begin(9600);
  pinMode(PIN_ADC, INPUT);
  myservo.setPeriodHertz(50);           // standard 50 hz servo
  myservo.attach(servoPin, 500, 2500);  // attaches the servo on servoPin to the servo object
}

void loop(){
  adcVal = analogRead(PIN_ADC);//The droplet sensor is connected to the analog port GP34
  Serial.println(adcVal);
  if (adcVal > 2000) {//The simulated value is greater than 2000
    myservo.write(0);//close the window
    delay(500);//Give the steering gear time to turn
  } else {// no rain
    myservo.write(180);//open the window 
    delay(500);//Delay 500ms
  }
}
//**********************************************************************************
