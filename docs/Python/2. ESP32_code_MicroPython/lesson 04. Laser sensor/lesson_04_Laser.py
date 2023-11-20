from machine import Pin
import time

laser = Pin(0, Pin.OUT)# Build a laser object, connect the laser to pin 0, and set pin 0 to output mode
while True:
    laser.value(1) # Turn on the laser
    time.sleep(2) # dalay2s
    laser.value(0) # Turn off the laser
    time.sleep(2) # delay2s