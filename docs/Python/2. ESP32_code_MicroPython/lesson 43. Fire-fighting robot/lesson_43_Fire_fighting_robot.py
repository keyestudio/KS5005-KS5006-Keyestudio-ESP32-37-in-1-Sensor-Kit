# Import Pin and ADCmodules.
from machine import ADC,Pin
import time

# Turn on and configure the ADC with the range of 0-3.3V
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

#Two pins of the moto
INA = Pin(15, Pin.OUT) #INA corresponds to IN+
INB = Pin(4, Pin.OUT) #INB corresponds to IN-

while True:
    adcVal=adc.read()
    print(adcVal)
    if adcVal < 3000:
        #open
        INA.value(0)
        INB.value(1)
    else:
        #stop
        INA.value(0)
        INB.value(0)
    time.sleep(0.1)