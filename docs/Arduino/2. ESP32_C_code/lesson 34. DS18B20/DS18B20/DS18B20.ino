//**********************************************************************************
/*  
 * Filename    : ds18b20
 * Description : Read the temperature of ds18B20
 * Auther      : http//www.keyestudio.com
*/
#include <DS18B20.h>

//ds18b20 pin to 15
DS18B20 ds18b20(15);

void setup() {
  Serial.begin(9600);
}

void loop() {
  double temp = ds18b20.GetTemp();//Read the temperature
  temp *= 0.0625;//The conversion accuracy is 0.0625/LSB
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("C");
  delay(1000);
}
//**********************************************************************************
