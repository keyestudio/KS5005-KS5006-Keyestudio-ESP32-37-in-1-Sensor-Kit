from machine import Pin
import time

sensor = Pin(15, Pin.IN, Pin.PULL_UP)

while True:
    if sensor.value() == 0:
        print("0   White")   #Press to print the corresponding information.
    else:
        print("1   Black")
    time.sleep(0.1) #delay 0.1s
