# Python tutorial

## Preparation for Python(Windows)

### 1.Install Thonny

Thonny is a free and open source software platform with small size, simple interface, simple operation and rich functions. It is a Python IDE suitable for beginners. In this tutorial, we use this IDE to develop a ESP32. Thonny supports multiple operating systems including Windows, Mac OS, Linux.

### 2.Download Thonny



1.Enter the website：[<span class="underline">https://thonny.org</span>](https://thonny.org) to download the latest version of Thonny.

2.Thonny open-source code library：[<span class="underline">https://github.com/thonny/thonny</span>](https://github.com/thonny/thonny).

<table class="colwidths-auto docutils align-default">
<tbody>
<tr class="odd">
<td>System</td>
<td>Download link</td>
</tr>
<tr class="even">
<td>MAC OS：</td>
<td><a href="https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.pkg">https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.pkg</a></td>
</tr>
<tr class="odd">
<td>Windows：</td>
<td><a href=" https:/github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.exe">https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.exe</a></td>
</tr>
<tr class="even">
<td>Linux：</td>
<td><p>Latest version:</p>
<p><strong>Binary bundle for PC (Thonny+Python):</strong></p>
<p>bash &lt;(wget -O - https://thonny.org/installer-for-linux)</p>
<p><strong>With pip:</strong></p>
<p>pip3 install thonny</p>
<p><strong>Distro packages (may not be the latest version):</strong></p>
<p><strong>Debian, Rasbian, Ubuntu, Mint and others:</strong></p>
<p>sudo apt install thonny</p>
<p><strong>Fedora:</strong></p>
<p>sudo dnf install thonny</p></td>
</tr>
</tbody>
</table>

![](media/bd5823ede2c01d1fa4696438c62aec51.png)

3.Windows System

<!-- end list -->

(1) The downloaded Thonny icon is as follows:

![](media/d3caa98d406fa06a124d5c98195b90db.png)

(2) Double-click“thonny-3.3.13.exe”and select install mode. You can
choose ![](media/37be3f3bcc9aa0eb48c8b844eb46a71c.png)

![](media/4c044b255da8b14fe674eb9cce01627d.png)

(3) You can also keep selecting **Next** to finish install.

![](media/995b36640124b6a9b23f10473ff8a38a.png)

![](media/8bcc17840b9fc15d76f79fee8a0168ee.png)

(4) If you want to change the route of installing Thonny，just
click“**Browse...**”to select a new route and click **OK**.

![](media/df6f63b42ebb1676b22c26b25dc9c7aa.png)

![](media/f5cd6d619b4645601c5b098ffdbec12a.png)

(5) Click **Create desktop icon,** you will view Thonny on your desktop.

![](media/a30c89dde3de81ad00aced30510071be.png)

(6) Click“**Install**”

![](media/6ace65142291e5e8af5f81e4a6b2f180.png)

(7) Wait for a while but don’t click **Cancel**

![](media/a504b3a3ab16b4d91040cd5878acea0c.png)

(8) Click**Finish**

![](media/a1fb6027e54a975de1c0aa1e1a0d6a29.png)

![](media/80f35044d91d66f734e36059db35f273.png)

### 3.Basic Setting

Double-click Thonny, choose lanuage and initial settings and click
**Let’s go！**

![](media/ee240978a4f844184f1ea9f5a21d0395.png)

![](media/619a856895d95e00beed748b1438072d.png)

![](media/bcf6c31e4f69c904a7a0c0e9df7e8d7d.png)

1.Click“**View**”→“**File**”and“**Shell**”

![](media/5ff5c305585dbe7e832cc41183db5818.png)

![](media/d41b79772c9846fd8bf295c8451f8321.png)

![](media/3d04fe6893ca104e4e593a0786cb3799.png)

2.Install the CP2102 driver

Before using the Thonny, we need to install the CP2102 driver in the
computer.

#### Windows system

Check if the CP2102 driver has been installed

Interface the ESP32 with your PC with a USB cable

![](media/c76d1a3ec06e5f3d2cf4a2d9c5b5f4f9.png)

Click“This PC”and right-click Manage”

![](media/84bc1f7d3169cad24b23d2ac620bc111.png)

Click“Device Manager”, if the CP2102driver has been installed，Silicon Labs CP210x USB to UART Bridge(COMx) will be shown.

![](media/a320816d8aed54304018d8380b5b6b3d.png)

If the CP2102 has not been installed

![](media/776adb879fe6e299e3610cc92cfaf70b.png)

Click“CP2102USB to UART Bridge Controller”and Update driver”.

![](media/7b342fbd38b03cba4dfce2045f4fe17b.png)

Click“Browse my computer for drivers ”.

![](media/1cb9eaea189e4766d17a0a5977c23a74.png)

Click Browse... to choose Python Tutorials\\1. Get started with
Python\\CP2102 Driver File-Windows and click Next.

![](media/b1995fce2ccc024f32a9b9b83cbc28a6.png)

The CP2102 driver will be installed.

![](media/b99fbcb61c133392d1b94b65f51fc2c7.png)

![](media/da0dffd89b5f385612c3230422ee732f.png)

#### MAC System

You can refer to the file Get started with Arduino C，the route is：KS5005(KS5006)Keyestudio ESP32 37 in 1 Sensor Kit\\Windows\\Arduino\_C\\Get started with Arduino C before class

![](media/33ad4ae8017abb0a971773df800077b5.png)

**Burn Micropython firmware**

To run a Python program on the ESP32 board, we need to burn the firmware
to the ESP32 board first.

Download Micropython firmware.

microPython website：<http://micropython.org/>

ESP32 firmware：[<span class="underline">https://micropython.org/download/esp32/</span>](https://micropython.org/download/esp32/)

![](media/c706d3cd6862323dcfccfd11ec7d1da3.png)

The firmware we use：**esp32-20210902-v1.17.bin**

Download firmware：[https://micropython.org/resources/firmware/esp32-20210902-v1.17.bin](https://micropython.org/resources/firmware/esp32-20220117-v1.18.bin)

Firmware: KS5005(KS5006)Keyestudio ESP32 37 in1 Sensor Kit\\Windows\\MicroPython\\1. Preparation before class for Python(Windows)\\Python\_Firmware”.

![](media/56d63b0c7d97b06cb96269c2fb674efc.png)

![](media/9fdd752a64d2c8b5d3532fff86687784.png)

Burn the Micropython firmware.

Connect the ESP32 to your PC with a USB cable.

![](media/d59fe9d9aced2ab49f5b9c6e59d9afde.jpeg)

![](media/c76d1a3ec06e5f3d2cf4a2d9c5b5f4f9.png)

Make sure the driver has been installed successfully and the COM port
can be identified correctly. Open Device Manager and  expand “Ports”.

![](media/d154c68ab7e252cf013b374069a2c6c0.png)

1.Open Thonny，click“run”and“Select interpreter...”

![](media/bda2bfc9d4576aef0b63e1f6373bf5a7.png)

Select Micropython (ESP32) and Silicon Labs CP210x USB to UART Bridge(COM3) and click “Install or update firmware”.

![](media/adfa634e977c803db209b18418f1df76.png)

Select“Silicon Labs CP210x USB to UART Bridge(COM3)”，click “
Browse...”and choose the firmware **esp32-20210902-v1.17.bin.**
Check“Erase flash before installing”and“Flash mode”，then
click“Install”.

（(Note：if you fail to install the firmware，press the Boot button on the
ESP32 board and click“Install”.）

![](media/8b746aeb78c731ab638141c8c197437b.png)

![](media/d7f96e9e23e715bc64698227a88a1c1d.png)

![](media/055d392fe9a633564b3608128c7fd0a7.png)

Then click Close and OK

Note：During installation, you can press and hold the Boot button on the
ESP32 mainboard. When the upload progress percentage appears, release
the button for a while to complete the installation.

![](media/dc77bfcf5851c8f43aab6cbe7cec7920.png)

![](media/d6affc2fba3955d794ddbd19e0b57427.png)

![](media/5ff623e84c9a432edeb9534fe563f172.png)

![](media/7fc6ac0c25d55775ef60449f497c6f2f.png)

Turn off all windows and turn to the main page and click ![](media/a807dd85c760f2bda89025b9fd70156e.png)“STOP.

![](media/e9d1c2d43c22cf13ada2bdf4808aacb9.png)

**Test Code**

Test the Shell commander.

Input print('hello world') in the“Shell”and press **Enter**.

![](media/0dd4176ed13f85a7c96c14b4e20e6166.png)

**Run the test code(online)**

Connect the ESP32 to your PC. Users can program and debug programs with Thonny.

Open Thonny and click Open.

![](media/7fded176b193d1ac598571f7d16599f7.png)

When a new window pops up, click“This computer”.

![](media/101bf94e8e29ce5bc4a948f15b5dbe51.png)

Go to KS5005(KS5006)Keyestudio ESP32 37 in 1 Sensor Kit\\Windows\\MicroPython\\2. ESP32\_code\_MicroPython\\lesson 1. Hello
World and select“lesson\_01\_HelloWorld.py”.

![](media/26df9018f08a5fe68d82fd3b465a2759.png)

Click ![](media/31511be865975be04b53f27aa45c60a7.png),“Hello World”will be printed in the“Shell”monitor.

![](media/95686a34ef893fbad426628f8eedbdc6.png)

Note: When running online, if the reset button of the ESP32 is pressed, the user's code will not be executed again. If you want the code to run automatically after resetting the code, please refer to Running Offline below.

**Run the test code(offline)**

After rebooting the ESP32, run the boot.py file under the root directory first then run your code file.

So, we need to add a guide program to run the code of users.

Move the file KS5005(KS5006)Keyestudio ESP32 37 in 1 Sensor Kit\\Windows\\MicroPython\\2. ESP32\_code\_MicroPython to the
disk(D)，the route is“D:/2. ESP32\_code\_MicroPython”.

![](media/000a950d20ba8d5cb478cbeb33dd238c.png)

Click lesson 00. Boot and double-click boot.py, then the code under MicroPython device can run offline.

![](media/260a8d6948628e3adbd0cd0685d73232.png)

If you want to run the code offline, you nee to upload boot.py and program code to MicroPython device, then press the ESP32’s reset button. We will take the lesson 00 and lesson 01 as an example. Select boot.py and right-click Upload to /.

![](media/a9bd9f2570e44373b1740c10785ab37f.png)

![](media/eb58bc02688f3d1aeff9c633419a2729.png)

![](media/bd91aaba82d6016da9cbcbd76cc725ab.png)

Similarly, upload the lesson 01.HelloWorld.py file to the “MicroPython device”.

![](media/82067caa6388159a331d8f35adf3fea1.png)

Press the Reset button, you will view code running in the Shell monitor

![](media/3ae14a813748c2ec86dddfc15d2a1a53.png)

Upload the code to the ESP32

We take the boot.py as an example. If we add a boot.py in each code directory, reboot the ESP32, the boot.py will run first.

![](media/9001ef83e40f83f349c0657089c23541.png)

Select “boot.py”in the file lesson 02. LED, right-click to select“Upload to /”. Then the code will be uploaded to the root directory of the ESP32 and click OK.

![](media/812946ebac3a86bfe9a5f4e8260d8cac.png)

![](media/3059fc6c6b159dc511b34c722f9c58ae.png)

Download the code to your PC.

MicroPython device\<boot.py, then right-click Download to…

![](media/61b6662d6b934bc1816b9132b699ceb5.png)

Delete files of the ESP32.

For example, click“boot.py”in the MicroPython device and right-click Delete.

![](media/143bd5952710f9a1c3567e4c8e202a0c.png)

Select boot.py in the lesson 02. LED folder, right-click Move to Recycle Bin to delete it.

![](media/cfc038e50113a6e1a4c570bc825f33ee.png)

Create and save code.

Click“File”→“New”to create and edit code.

![](media/1d71df4720f9455dcaf17a72ec38bb1b.png)

Enter the code in the new file. We take the lesson 02. LED.py as an example.

![](media/633604e1e66add9e335c3f0632231e07.png)

Click ![](media/40348c4ef49beb5e90593df6050c1d62.png) to save the code to your PC or the ESP32.

![](media/f6e3726933740f4a667a25463d696ba9.png)

Select MicroPython device and enter main.py in the new page and click OK.

![](media/895a782664e10406ce2ab9ba18507d19.png)

Then the code will be uploaded to the ESP32.

![](media/fbb3819dca237caca2c8a2ecd3d5587f.png)

Disconnect the USB cable and connect it, you can see the effect of the LED flashing continuously in the circuit on a cycle.  

![](media/9eac7d05566dd0a8553f3b10fc7bb7c4.png)

## Projects

There are 37 sensors and modules in this kit. Next, we will analyze and introduce how they work step by step. Interface sensors with the ESP32  board and its expansion board, run test codes and observe experimental phenomenon.

**Note: please wire up components according to the given connection diagrams.**

What’s more, wire up the power and signals correctly, otherwise, sensors or modules will get damaged or no test results will be shown.

### Project 1: Hello World

#### **Overview**

In this project, we will make an experiment to light up the white LED module. The high and low levels can be controlled by programming, then the state of the LED can be controlled.

#### **Required Components**

![image-20230509135839149](media/image-20230509135839149.png)

#### **Wiring**

Connect the ESP32 to your computer.

![image-20230509135905250](media/image-20230509135905250.png)

#### **Running code online**

To run the ESP32 online, you need to connect the ESP32 to the computer, which allows you to compile or debug programs using Thonny software.  

Advantages: 

1\. You can use the Thonny software to compile or debug programs.

2\.Through the "Shell" window, you can view error messages and output results generated during the running of the program as well as query related function information online to help improve the program.  

Disadvantages:

1\. To run the ESP32 online, you must connect the ESP32 to a computer and run it with the Thonny software.  

2\. If the ESP32 is disconnected from the computer , when they reconnect, the program won't run again.  

Open Thonny，and click![](media/6388aa0daa514f9325fb07fd5ab6749b.png)“Open...”

![](media/319b34bcc43d038d633af9acba0c198c.png)

Click“This computer”in the new pop-up window.

![](media/5bdbc66ef89b41a53e46696c07b2c282.png)

Select “Project_01_HelloWorld.py”, click “Open”. The code used in this tutorial is saved in the file KS5005(KS5006) Keyestudio ESP32 37 in 1 Sensor Kit\Windows\MicroPython\2.ESP32_code_MicroPython. 

You can move the code to anywhere, for example,we can save the **2.ESP32_code_MicroPython in the** Disk(D), the route is **D:\2.ESP32_code_MicroPython.**（The code in this tutorial is saved in the Disk(D) on your computer.）

![](media/f26168c6fbf3638ab82e8ab5fcb8abba.png)

![](media/42e7ab8155f0df7a56ac57ab5ed97d00.png)

Click![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”to execute the program“Hello World\!”, "Welcome Keyestudio" , which will be printed in the“Shell”window.

![](media/c87d49e498df065dd42dbf32c2eec7ad.png)

**Exit running online**

When running online, click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) “Stop /Restart Backend”or press “Ctrl+C”on the Thonny to exit the program.  

![](media/db5de333b3cd58609dcca10a9382155c.png)

#### **Test Code**

```python
print("Hello World!")
print("Welcome Keyestudio")
```

### Project 2: Lighting up LED

![](media/ce8d61c97eb89c94c05cc1f6299316b5.jpeg)

#### **Overview**

In this project, we will make an experiment to light up the white LED module. The high and low levels can be controlled by programming, then the state of the LED can be controlled.

#### **Working Principle**

The two circuit diagrams are given. The left one is wrong wiring-up diagram. Why? Theoretically, when the S terminal outputs high levels, LED will receive the voltage and light up.

Due to limitation of IO ports of Pico board, weak current can’t make LED brighten.

The right one is correct wiring-up diagram. GND and VCC are powered up. When the S terminal is a high level, the triode Q1 will be connected and LED will light up(note: current passes through LED and R3 to reach GND by VCC not IO ports). Conversely, when the S terminal is a low level, the triode Q1 will be disconnected and LED will go off.

The triode Q1 is equal to a switch and R1 and R3 stand for limited resistors which can curb the size of current to prevent from burning out components.

![](media/d205e9ad7c33cc55909cb1d652d42ad7.png)

#### **Required Components**

| ![img](media/wps224.jpg) | ![img](media/wps225.png) | ![img](media/wps226.jpg)       | ![img](media/wps227.png) | ![img](media/wps228.jpg) |
| ------------------------ | ------------------------ | ------------------------------ | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio Purple LED Module*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/fed849dd5952f3b94a591d5bc5e64267.png)

#### **Test Code**

```python
from machine import Pin
import time

led = Pin(0, Pin.OUT)# Build an LED object, connect the external LED light to pin 0, and set pin 0 to output mode
while True:
    led.value(1)# turn on led
    time.sleep(1)# delay 1s
    led.value(0)# turn off led
    time.sleep(1)# delay 1s
```

#### **Code Explanation**

**Machine** module is indispensable, we will use **import machine** or **from machine import...** to program pico with microPython.

**time.sleep()** function is used to set delayed time, as **time.sleep(0.01),** which means, the delayed time is 10ms.

**led = Pin(0, Pin.OUT)**, created a pin example and we name **led.** **0** is indicative of connected pin GP0，**Pin.OUT** represents output mode, can use **.value()** to output high levels(3.3V) **led.value(1)** or low levels(0V) **led.value(0)**.

**import machine** is used to import modules. When creating pins examples, it will change into **led = machine.Pin(0, machine.Pin.OUT)**

#### **Test Result**

Wire up and click ![](media/da852227207616ccd9aff28f19e02690.png). Then LED will falsh. Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) to exit the program.

### Project 3: Traffic Lights Module

![](media/e191c790f251715b418bcfd39a32917f.jpeg)

#### **Overview**

In this lesson, we will learn how to control multiple LED lights and simulate the operation of traffic lights.

Traffic lights are signal devices positioned at road intersections, pedestrian crossings, and other locations to control flows of traffic.

In this kit, we will use the traffic light module to simulate the traffic light.

#### **Working Principle**

In previous lesson, we already know how to control an LED. In this part, we only need to control three separated LEDs. Output high levels to the signal R(3.3V), then the red LED will be on.

![](media/1479f32d51a02c2230cb535197093d4c.png)

#### **Required Components**

| ![img](media/wps229.jpg) | ![img](media/wps230.png) | ![img](media/wps231.jpg)           | ![img](media/wps232.jpg) | ![img](media/wps233.jpg) |
| ------------------------ | ------------------------ | ---------------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio Traffic Lights Module*1 | 5P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/cecade99c652fe14ea7547b80849f5b7.png)

#### **Test Code**


```python
import machine
import time

led_red = machine.Pin(15, machine.Pin.OUT)
led_yellow = machine.Pin(2, machine.Pin.OUT)
led_green = machine.Pin(0, machine.Pin.OUT)

while True:
    led_green.value(1) # green light turn on
    time.sleep(5) # delay 5s
    led_green.value(0) # green light turn off
    for i in range(3): # yellow light blinks 3 times
        led_yellow.value(1)
        time.sleep(0.5)
        led_yellow.value(0)
        time.sleep(0.5)
    led_red.value(1) # red light turn on
    time.sleep(5) # delay 5s
    led_red.value(0) #red light turn off
```

#### **Code Explanation**

Create pins, set pins mode and delayed functions.

We use the **for** loop.

The simplest form is **for i in range()**.

In the code, we used range(3), which means the variable i starts from 0, increase 1 for each time, to 2.

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png). We will see that the green LED will be on for 5s then off, the yellow LED will flash for 3s then go off and the red one will be on for 5s then off. Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)to exit the program.

### Project 4: Laser Sensor

![](media/d5d84e9d26d2cc89772a05eed6340bc0.jpeg)

#### **Description**

Lasers are widely used to cut, weld, surface treat, and more on specific materials. The energy of the laser is very high. The toy laser pointer may cause glare to the human eye, and it may cause retinal damage for a long time. my country also prohibits the use of laser to illuminate the aircraft.

#### **Working Principle**

The laser head sensor module is mainly composed of a laser head with a light-emitting die, a condenser lens, and a copper adjustable sleeve.

We can see the circuit schematic diagram of this module which is very similar to the LED we have learned. They are all driven by triodes. A high-level digital signal is directly input at the signal end, then the sensor will start to work; if inputting low levels, the sensor won’t work.

Note: don’t point an laser emitter at eyes of people.

![](media/25be2840ca059e6e6953a3c3646649dc.png)

#### **Required Components**

| ![img](media/wps234.jpg) | ![img](media/wps235.png) | ![img](media/wps236.jpg)  | ![img](media/wps237.png) | ![img](media/wps238.jpg) |
| ------------------------ | ------------------------ | ------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio Laser Module*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/73060fc0934dd3d40c8fd7062b6173c9.png)

#### **Test Code**


```python
from machine import Pin
import time

laser = Pin(0, Pin.OUT)# Build a laser object, connect the laser to pin 0, and set pin 0 to output mode
while True:
    laser.value(1) # Turn on the laser
    time.sleep(2) # dalay 2s
    laser.value(0) # Turn off the laser
    time.sleep(2) # delay 2s
```

#### **Code Explanation**

Please refer to project 2 above for the code setting instructions.

#### **Test Result**

Wire up, power on and click ![img](media/wps239.jpg), the code starts executing, we will see that the laser tube on the module emits a red laser signal for 2 seconds, and stops emitting a red laser signal for 2 seconds. Press “Ctrl+C”or click ![img](media/wps240.jpg)“Stop/Restart backend”to exit the program.

### Project 5: Breathing LED

![](media/25107e92a36e701f271b2371359f2679.jpeg)

#### **Overview**

A“breathing LED”is a phenomenon where an LED's brightness smoothly changes from dark to bright and back to dark, continuing to do so and giving the illusion of an LED“breathing. This phenomenon is similar to a lung breathing in and out. So how to control LED’s brightness? We need to take advantage of PWM.

#### **Required Components**

| ![img](media/wps241.jpg) | ![img](media/wps242.png) | ![img](media/wps243.jpg)        | ![img](media/wps244.png) | ![img](media/wps245.jpg) |
| ------------------------ | ------------------------ | ------------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio  Purple LED Module*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/fed849dd5952f3b94a591d5bc5e64267.png)

#### **Test Code**


```python
import time
from machine import Pin,PWM

#The way that the ESP32 PWM pins output is different from traditionally controllers.
#It can change frequency and duty cycle by configuring PWM’s parameters at the initialization stage.
#Define GPIO 0’s output frequency as 10000Hz and its duty cycle as 0, and assign them to PWM.
pwm =PWM(Pin(0,Pin.OUT),10000,0)

try:
    while True:
#The range of duty cycle is 0-1023, so we use the first for loop to control PWM to change the duty
#cycle value,making PWM output 0% -100%; Use the second for loop to make PWM output 100%-0%.  
        for i in range(0,1023):
            pwm.duty(i)
            time.sleep_ms(1)
            
        for i in range(0,1023):
            pwm.duty(1023-i)
            time.sleep_ms(1)  
except:
#Each time PWM is used, the hardware Timer will be turned ON to cooperate it. Therefore, after each use of PWM,
#deinit() needs to be called to turned OFF the timer. Otherwise, the PWM may fail to work next time.
    pwm.deinit()
```

#### **Test Result**

Wire up and power on and click ![](media/wps246.jpg)“Run current script”, the code starts executing, we will see that the LED on the module gradually gets dimmer then brighter, cyclically, like human breathe. Press“Ctrl+C”or click![img](media/wps247.jpg)“Stop/Restart backend”to exit the program.

### Project 6: RGB Module

![](media/b3515a7e0340f391bef256c9ed6ccd4b.jpeg)

#### **Overview**

Among these modules is a RGB module. It adopts a F10-full color RGB foggy common cathode LED. We connect the RGB module to the PWM port of MCU and the other pin to GND(for common anode RGB, the rest pin will be connected to VCC). So what is PWM?

PWM is a means of controlling the analog output via digital means. Digital control is used to generate square waves with different duty cycles (a signal that constantly switches between high and low levels) to control the analog output.In general, the input voltages of ports are 0V and 5V. What if the 3V is required? Or a switch among 1V, 3V and 3.5V? We cannot change resistors constantly. For this reason, we resort to PWM. 

![](media/bbcfcb9ae56abb7e80ee587246fc4be9.GIF)

For Arduino digital port voltage outputs, there are only LOW and HIGH levels, which correspond to the voltage outputs of 0V and 5V respectively. You can define LOW as“0”and HIGH as“1’, and let the Arduino output five hundred‘0’or“1”within 1 second. If output five hundred‘1’, that is 5V; if all of which is‘0’,that is 0V; if output 250 01 pattern, that is 2.5V. 

This process can be likened to showing a movie. The movie we watch are not completely continuous. Actually, it generates 25 pictures per second, which cannot be told by human eyes. Therefore, we mistake it as a continuous process. PWM works in the same way. To output different voltages, we need to control the ratio of 0 and 1. The more‘0’or‘1’ output per unit time, the more accurate the control.

#### **Working Principle**

For our experiment, we will control the RGB module to display different colors through three PWM values.

![](media/71e990d503b6f1822379091a37f58a6b.jpeg)

#### **Required Components**

| ![img](media/wps248.jpg) | ![img](media/wps249.png) | ![img](media/wps250.jpg)             | ![img](media/wps251.png) | ![img](media/wps252.jpg) |
| ------------------------ | ------------------------ | ------------------------------------ | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio DIY Common Cathode RGB *1 | 4P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/e684c10368af661546702f94e0a495f3.png)

#### **Test Code**


```python
# import Pin, PWM and Random function modules.
from machine import Pin, PWM
from random import randint
import time

#Configure ouput mode of GPIO0, GPIO2 and GPIO15 as PWM output and PWM frequency as 10000Hz.
pins = [0, 2, 15]

pwm0 = PWM(Pin(pins[0]),10000)  
pwm1 = PWM(Pin(pins[1]),10000)
pwm2 = PWM(Pin(pins[2]),10000)

#define a function to set the color of RGBLED.
def setColor(r, g, b):
    pwm0.duty(1023-r)
    pwm1.duty(1023-g)
    pwm2.duty(1023-b)
    
try:
    while True:
        red   = randint(0, 1023) 
        green = randint(0, 1023)
        blue  = randint(0, 1023)
        setColor(red, green, blue)
        time.sleep_ms(200)
except:
    pwm0.deinit()
    pwm1.deinit()
    pwm2.deinit()
```

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing, we will see that the RGB LED on the module starts to display random colors. Press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 7: Button Sensor

![](media/4d5f6ea741d1e346e03f6efe7cfc9d2d.jpeg)

#### **Overview**

In this kit, there is a Keyestudio single-channel button module, which mainly uses a tact switch and comes with a yellow button cap.

In previous lessons, we learned how to make the pins of our single-chip microcomputer output a high level or low level. In this experiment, we will read the high level (3.3V) and low level (0V).

We can determine whether the button on the sensor is pressed by reading the high and low level of the S terminal on the sensor.

#### **Working Principle**

The button module has four pins. The pin 1 is connected to the pin 3 and the pin 2 is linked with the pin 4. When the button is not pressed, they are disconnected. Yet, when the button is pressed, they are connected. If the button is released, the signal end is high level.

![](media/a51debfc8a38d0d5729d1da394f95ca5.png)

#### **Required Components**

| ![img](media/wps253.jpg) | ![img](media/wps254.png) | ![img](media/wps255.jpg)        | ![img](media/wps256.png) | ![img](media/wps257.jpg) |
| ------------------------ | ------------------------ | ------------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio  DIY Button Module*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/395caba95f49d582d7fd36cacbf44a7c.png)

#### **Test Code**


```python
from machine import Pin
import time

button = Pin(15, Pin.IN, Pin.PULL_UP)

while True:
    if button.value() == 0:
        print("You pressed the button!")   #Press to print the corresponding information.
    else:
        print("You loosen the button!")
    time.sleep(0.1) #delay 0.1s
```

#### **Code Explanation**

**button = Pin(15, Pin.IN, Pin.PULL\_UP),** we define the pin of the button as GP15 and set to PULL-UP mode.

We can use **button = Pin(15, Pin.IN) to set INPUT mode,** at this time, the pins are in high resistance state.

**button.value(),** read levels of buttons. Function returns High or Low.

**if..else.. sentence,** when the logic judge is TRUE, the code under the if will be activated; otherwise, the code udder the else will be activated.

When ESP32 detects the button pressed, the signal end is low level (GP 15 is low level). **button.value() is 0.** If the ESP32 detects the button not pressed, **button.value()** is 1 and else sentence will be activated.

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing, the string will be displayed on the ”Shell“ window. When the button is pressed, the ”Shell“ window will show “You pressed the button\!”；when the button is released, the ”Shell“ window will show “You Loosen the button”; as shown below. Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend” to exit the program.

![](media/ba199239c85c395f36e42612246288eb.png)

### Project 8: Capacitive Sensor

![](media/794f73317cd5349345e92cebb5ccb410.jpeg)

#### **Description**

In this kit, there is a capacitive touch module which mainly uses a TTP223-BA6 chip. It is a touch detection chip, which provides a touch button, and its function is to replace the traditional button with a variable area button. When we power on, the sensor needs about 0.5 seconds to stabilize. Do not touch the keys during this time period. At this time, all functions are disabled, and self-calibration is always performed. The calibration period is about 4 seconds. We display the test results in the shell.

![](media/7fe7f9d2bdf7b9b25e708c52d7dda66d.png)

#### **Working Principle**

When our fingers touch the module, the signal S outputs high levels, the red LED on the module flashes. We can determine if the button is pressed or not by reading high and low levels on the sensor.

![](media/7fe7f9d2bdf7b9b25e708c52d7dda66d.png)

#### **Required Components**

| ![img](media/wps258.jpg) | ![img](media/wps259.png) | ![img](media/wps260.jpg)      | ![img](media/wps261.png) | ![img](media/wps262.jpg) |
| ------------------------ | ------------------------ | ----------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio  Capacitive Module | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/56ba673521d6b8e398b321382b402732.png)

#### **Test Code**

```python
from machine import Pin
import time

touch = Pin(15, Pin.IN, Pin.PULL_UP)

while True:
    if touch.value() == 1:
        print("You pressed the button!")   #Press to print the corresponding information.
    else:
        print("You loosen the button!")
    time.sleep(0.1) #delay0.1s
```

#### **Code Explanation**

When we touch the sensor, the Shell monitor will show“You pressed the button\!”, if not,“You loosen the button\!”will be shown on the monitor.

#### **Test Result**

Connect the wires according to the experimental wiring diagram and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing, the string will be displayed in the ”Shell“ window. when the button is pressed, the red LED lights up and val is 1.Then the shell shows “You pressed the button\!”; if the button is released, the red LED is off and val is 0; “You loosen the button\!” will be displayed, as shown below. Press “Ctrl+C” or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png) “Stop/Restart backend” to exit the program.

![](media/986ac5c456aa58948d7985bfd54b44b5.png)

### Project 9: Obstacle Avoidance Sensor

![](media/e6dda88bb6faf8fc06d81361b7f48a3d.jpeg)

#### **Overview**

In this kit, there is a Keyestudio obstacle avoidance sensor, which mainly uses an infrared emitting and a receiving tube. In the experiment, we will determine whether there is an obstacle by reading the high and low level of the S terminal on the sensor.

#### **Working Principle**

NE555 circuit provides IR signals with frequency to the emitter TX, then the IR signals will fade with the increase of transmission distance. If encountering the obstacle, it will be reflected back.

When the receiver RX meets the weak signals reflected back, the receiving pin will output high levels, which indicates the obstacle is far away. On the contrary, it the reflected signals are stronger, low levels will be output, which represents the obstacle is close. There are two potentiometers on the module, and one is for adjusting emission power, another one is for receiving frequency.

![](media/f32ebd19bd8e893ab6c865f83b274900.png)

#### **Required Components**

| ![img](media/wps263.jpg) | ![img](media/wps264.png) | ![img](media/wps265.jpg)    | ![img](media/wps266.png) | ![img](media/wps267.jpg) |
| ------------------------ | ------------------------ | --------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Obstacle Avoidance Sensor*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/1c80fc2e1d7c038f0e105164090b97da.png)

#### **Test Code**

```python
from machine import Pin
import time

sensor = Pin(15, Pin.IN)
while True:
    if sensor.value() == 0:
        print("There are obstacles")
    else:
        print("All going well")
    time.sleep(0.1)
```

#### **Code Explanation**

The setting method is similar to project 7.

**Note:**

Connect the wires according to the connection diagram. After powering on, we start to adjust the two potentiometers to sense distance.

1.  Adjust the potentiometer transmitting power. Make the P LED at the critical point of ON and OFF states.

2. Adjust the potentiometer receiving frequency. Rotate it clockwise, the frequency will increase. Make the S LED at the critical point of ON and OFF states, then the 38KHz square wave can be produced.

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing, the string will be displayed in the ”Shell“ window. When the sensor detects the obstacle, sensor.value() is 0，the shell will show“There are obstacles”, if the obstacle is not detected, sensor.value () is 1,“All going well”will be shown, as shown below. Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/86fc39da5df74b72325d5daddff5af70.png)

### Project 10: Line Tracking Sensor

![](media/56a1aed8ccadf21894486e3e464740d1.jpeg)

#### **Description**

In this kit, there is a DIY electronic building block single-channel line tracking sensor which mainly uses a TCRT5000 reflective black and white line recognition sensor element.

In the experiment, we judge the color (black and white) of the object detected by the sensor by reading the high and low levels of the S terminal on the module; and display the test results on the shell. 

#### **Working Principle**

![](media/b4bec738ca3565a2ce3a274bfec4a57a.png)

When a black or no object is detected, the signal terminal will output high levels; when white object is detected, the signal terminal is low level; its detection height is 0-3cm. We can adjust the sensitivity by rotating the potentiometer on the sensor. When the potentiometer is rotated, the sensitivity is best when the red LED on the sensor is at the critical point between off and on. 

#### **Required Components**

| ![img](media/wps269.jpg) | ![img](media/wps270.png) | ![img](media/wps271.jpg)           | ![img](media/wps272.png) | ![img](media/wps273.jpg) |
| ------------------------ | ------------------------ | ---------------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio  Line Tracking Sensor*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/8bf3cd4119768830839818cb8b9cee54.png)

#### **Test Code**


```python
from machine import Pin
import time

sensor = Pin(15, Pin.IN, Pin.PULL_UP)

while True:
    if sensor.value() == 0:
        print("0   White")   #Press to print the corresponding information.
    else:
        print("1   Black")
    time.sleep(0.1) #delay 0.1s
```

#### **Code Explanation**

The setting method is similar to project 7.

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing, the string and data will be displayed in the ”Shell“ window. when the sensor doesn’t detect an object or detects a black object, the val is 1, and the shell will display "Black" ; when a white object (can reflect light) is detected, the val is 0, and the shell displays "White" , as shown below. Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/ffb86d4f5e9ba5be05aae39e633f169b.png)

### Project 11: Photo Interrupter

![](media/20519af325d65d055bd8b70c1475438e.jpeg)

#### **Description**

This kit contains a photo interrupter which mainly uses 1 ITR-9608 photoelectric switch. It is a photoelectric switch optical switch sensor.

#### **Working Principle**

When the paper is put in the slot, C is connected with VCC and the signal end S of the sensor are high levels; then the red LED will be off. Otherwise, the red LED will be on.

![](media/2c2608b83d7105702560cdfe4a394dde.png)

#### **Required Components**

| ![img](media/wps274.jpg) | ![img](media/wps275.png) | ![img](media/wps276.jpg) | ![img](media/wps277.png) | ![img](media/wps278.jpg) |
| ------------------------ | ------------------------ | ------------------------ | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Photo Interrupter*1      | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/8444b72b5a68234acc69a6a3e16b8449.png)

#### **Test Code**


```python
from machine import Pin
import time

sensor = Pin(15, Pin.IN, Pin.PULL_UP)
lastState = 0
PushCounter = 0

while True:
    State = sensor.value()
    if  State != lastState:
        if State == 1:
            PushCounter += 1
            print(PushCounter)   #Press to print the corresponding information.
    lastState = State
```

#### **Code Explanation**

**Logic setting :**

| Initial Setting                              | Set PushCounter to 0<br />Set State to 0 (value of the sensor)<br />Set lastState to 0 |                                                              |
| -------------------------------------------- | ------------------------------------------------------------ | ------------------------------------------------------------ |
| when an object enters the slot               | lastState is 0，State turns into 1; lastState turns into 1   | Set PushCounter to PushCounter+1, print the value of PushCounter |
| when the object leaves the slot              | lastState is 1，State becomes 0，two data are not equal，lastState turns into 0. | PushCounterdoesn’t change; Don’t print the value of PushCounter |
| When the object goes through this slot again | lastState is 0, State becomes 1，two data are not equal，lastState turns into 1. | Set PushCounter to PushCounter+1, And print the value of PushCounter |
| When the object leaves this slot again       | lastState is 1，State turns into 0，two data are not equal lastState turns into 0 | PushCounter doesn’t change; Don’t print the PushCounter value |

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing, data will be displayed in the ”Shell“ window. Every time when the object passes through the slot of the sensor, the PushCounter data will increase by 1 continuously, as shown below. Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/ca50b68405bcd20971b720df4cae8f69.png)

### Project 12: Tilt Module

![](media/9d4fcf498d8943539935d0f9638f22eb.jpeg)

#### **Overview**

In this kit, there is a Keyestudio tilt sensor. The tilt switch can output signals of different levels according to whether the module is tilted. There is a ball inside. When the switch is higher than the horizontal level, the switch is turned on, and when it is lower than the horizontal level, the switch is turned off. This tilt module can be used for tilt detection, alarm or other detection. 

#### **Working Principle**

The working principle is pretty simple. When pin 1 and 2 of the ball switch P1 are connected, the signal S is low level and the red LED will light up; when they are disconnected, the pin will be pulled up by the 4.7K R1 and make S a high level, then LED will be off.

![](media/7b5da31ecdd90419d5b3326eebdb14e7.png)

#### **Required Components**

| ![img](media/wps279.jpg) | ![img](media/wps280.png) | ![img](media/wps281.jpg) | ![img](media/wps282.png) | ![img](media/wps283.jpg) |
| ------------------------ | ------------------------ | ------------------------ | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Tilt Sensor*1            | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/0303daa7c70c79e2e1784f9e23693425.png)

#### **Test Code**

```python
from machine import Pin
import time

TiltSensor = Pin(15, Pin.IN)

while True:
    value = TiltSensor.value()
    print(value, end = " ")
    if  value== 0:
        print("The switch is turned on")
    else:
        print("The switch is turned off")
    time.sleep(0.1)
```

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing, the string and the data will be displayed in the ”Shell“ window. When the tilt module is inclined to one side, the red LED on the module will be off and the "Shell“ window will display “1 The switch is turned off”. By contrast, if you make it incline the other side, the red LED will light up and the monitor will display “0 The switch is turned on”, as shown below. Press “Ctrl+C” or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend” to exit the program.

![](media/a08940e31dfd94613a6c5c45d94879fc.png)

### Project 13: Hall Sensor

![](media/3fa2bf365868256a8c9fe4f32c883c91.jpeg)

#### **Description**

In this kit, there is a Hall sensor which mainly adopts a A3144 linear Hall element. The element P1 is composed of a voltage regulator, a Hall voltage generator, a differential amplifier, a Schmitt trigger, a temperature compensation circuit and an open-collector output stage. In the experiment, we use the Hall sensor to detect the magnetic field and display the test results on the shell.

#### **Working Principle**

When the sensor detects no magnetic field or a north pole magnetic field, the signal terminal will be high level; when it senses a south pole magnetic field, the signal terminal will be low levels.

The stronger the magnetic field strength is, induction distance is longer.

![](media/e9dcd0f7f384f9233a0f227c7a8d3744.png)

#### **Required Components**

| ![img](media/wps284.jpg) | ![img](media/wps285.png) | ![img](media/wps286.jpg)  | ![img](media/wps287.png) | ![img](media/wps288.jpg) |
| ------------------------ | ------------------------ | ------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio  Hall Sensor*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/335c913c8869defe1f0c8e8d3a801913.png)

#### **Test Code**

```python
from machine import Pin
import time

hall = Pin(15, Pin.IN)
while True:
    value = hall.value()
    print(value, end = " ")
    if value == 0:
        print("A magnetic field")
    else:
        print("There is no magnetic field")
    time.sleep(0.1)
```

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing, the string and the data will be displayed on the Shell. when the sensor detects no magnetic fields or the north pole magnetic field, Shell will show“1 There is no magnetic field”and the LED on the sensor will be off; When it detects the south pole magnetic field, the Shell will show“0 A magnetic field”and the LED on the sensor will be on, as shown below. Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/56a3d161f47532ee9f26c5daddeddd7e.png)

### Project 14: Reed Switch Module

![](media/2a699e913fa52d9acff4b0e4a8188540.png)

#### **Overview**

In this kit, there is a Keyestudio reed switch module, which mainly uses a MKA10110 green reed component. 

The reed switch is the abbreviation of the dry reed switch. It is a passive electronic switch element with contacts.  

It has the advantages of simple structure, small size and easy control. Its shell is a sealed glass tube with two iron elastic reed electric plates.

In the experiment, we will determine whether there is a magnetic field near the module by reading the high and low level of the S terminal on the module; and, we display the test result in the shell.

#### **Working Principle**

![](media/a4a9a00f86be808be0a9c784a6960cd6.jpeg)

In normal conditions, the glass tube in the two reeds made of special materials are separated. When a magnetic substance close to the glass tube, in the role of the magnetic field lines, the pipe within the two reeds are magnetized to attract each other in contact, the reed will suck together, so that the junction point of the connected circuit communication. 

After the disappearance of the outer magnetic reed because of their flexibility and separate, the line is disconnected. The sensor uses this characteristic to build a circuit to convert magnetic field signal into high and low level signal. 

#### **Required Components**

<table class="colwidths-auto docutils align-default">
<tbody>
<tr class="odd">
<td>

![](media/c9020c6015e55923afec197ab9d03fae.png)</td>
<td>

![](media/6d96c844b0260ad712130945d692a7a2.jpeg)</td>
<td>

![](media/92c44afcc82bb13a14e8438646670cc6.png)</td>
<td>

![](media/0d81e07a0f67700c5a396fc7e1e614e1.jpeg)</td>
<td>

![](media/edbfec59fe015bd9987e4b4d542b466d.png)</td>
</tr>
<tr class="even">
<td>ESP32 Board*1</td>
<td>ESP32 Expansion Board*1</td>
<td>Keyestudio Reed Switch Module*1</td>
<td>3P Dupont Wire*1</td>
<td>Micro USB Cable*1</td>
</tr>
</tbody>
</table>
#### **Wiring Diagram**

![](media/45cb30739b7c6518fe1591142aabbf2f.png)

#### **Test Code**

```python
from machine import Pin
import time

ReedSensor = Pin(15, Pin.IN)
while True:
    value = ReedSensor.value()
    print(value, end = " ")
    if value == 0:
        print("A magnetic field")
    else:
        print("There is no magnetic field")
    time.sleep(0.1)
```

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script and power on. When the sensor detects a magnetic field, val is 0 and the red LED of the module lights up, "0 A magnetic field" will be displayed; when no magnetic field is detected, val is 1, and the LED on the module goes out, "1 There is no magnetic field" will be shown, as shown below. Press “Ctrl+C” or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend” to exit the program.

![](media/f44214d63a5974544ca996f93764b550.png)

### Project 15: PIR Motion Sensor

![](media/d58ba7b9b4a0115b07cbb1c871ef8ec9.jpeg)

#### **Overview**

In this kit, there is a Keyestudio PIR motion sensor, which mainly uses an RE200B-P sensor elements. It is a human body pyroelectric motion sensor based on pyroelectric effect, which can detect infrared rays emitted by humans or animals, and the Fresnel lens can make the sensor's detection range farther and wider.

In the experiment, we determine if there is someone moving nearby by reading the high and low levels of the S terminal on the module. The detected results will be displayed on the Shell.

#### **Working Principle**

The upper left part is voltage conversion(VCC to 3.3V). The working voltage of sensors we use is 3.3V, therefore we can’t use 5V directly. The voltage conversion circuit is needed.

When no person is detected or no infrared signal is received, and pin 1 of the sensor outputs low level. At this time, the LED on the module will light up and the MOS tube Q1 will be connected and the signal terminal S will detect Low levels. 

When one is detected or an infrared signal is received, and pin 1 of the sensor outputs a high level. Then LED on the module will go off, the MOS tube Q1 is disconnected and the signal terminal S will detect high levels.

![](media/e62f4d614ab7e67ac373576d7ff96fee.png)

#### **Required Components**

| ![img](media/wps289.jpg) | ![img](media/wps290.png) | ![img](media/wps291.jpg)        | ![img](media/wps292.png) | ![img](media/wps293.jpg) |
| ------------------------ | ------------------------ | ------------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio  PIR Motion Sensor*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/6e57df420ca5d0dcc6f87467bb0295db.png)

#### **Test Code**


```python
from machine import Pin
import time

PIR = Pin(15, Pin.IN)
while True:
    value = PIR.value()
    print(value, end = " ")
    if value == 1:
        print("Some body is in this area!")
    else:
        print("No one!")
    time.sleep(0.1)
```

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing, the string and the data will be displayed in the ”Shell“ window. When the sensor detects someone nearby, value is 1, the LED will go off and the ”Shell“ window will show“1 Somebody is in this area\!”. On the contrary, the value is 0, the LED will go up and“0 No one\!”will be shown, as shown below. Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend” to exit the program.

![](media/35150d4268fa4716df8624845567f888.png)

### Project 16: Active Buzzer

![](media/f4cc23dc8ed28d408e5a119855e19aa2.jpeg)

#### **Overview**

In this kit, it contains an active buzzer module and a power amplifier module (the principle is equivalent to a passive buzzer). In this experiment, we control the active buzzer to emit sounds. Since it has its own oscillating circuit, the buzzer will automatically sound if given large voltage.

#### **Working Principle**

From the schematic diagram, the pin of buzzer is connected to a resistor R2 and another port is linked with a NPN triode Q1. So, if this triode Q1 is powered, the buzzer will sound.

If the base electrode of the triode connected to the R1 resistor is a high level, the triode Q1 will be connected.If the base electrode is pulled down by the resistor R3, the triode is disconnected. 

When we output a high level from the IO port to the triode, the buzzer will emit sounds; if outputting low levels, the buzzer won’t emit sounds.

#### **Required Components**

| ![img](media/wps294.jpg) | ![img](media/wps295.png) | ![img](media/wps296.jpg)   | ![img](media/wps297.png) | ![img](media/wps298.jpg) |
| ------------------------ | ------------------------ | -------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio Active Buzzer*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/44508746060c5df3544ab2d84b2482bf.png)

#### **Test Code**


```python
from machine import Pin
import time

buzzer = Pin(15, Pin.OUT)
while True:
    buzzer.value(1)
    time.sleep(1)
    buzzer.value(0)
    time.sleep(1)
```

#### **Code Explanation**

In the experiment, we set the pin to GPIO15. When setting to high, the active buzzer will beep; when setting to low, the active buzzer will stop emitting sounds.

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The active buzzer will emit sound for 1 second, and stop for 1 second. Press “Ctrl+C” or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend” to exit the program.

### Project 17: 8002b Audio Power Amplifier

![](media/6e8569df97b72e866488a6f414f9e392.jpeg)

#### **Overview**

In this kit, there is a Keyestudio 8002b audio power amplifier. The main components of this module are an adjustable potentiometer, a speaker, and an audio amplifier chip.

The main function of this module is: it can amplify the output audio signal, with a magnification of 8.5 times, and play sound or music through the built-in low-power speaker, as an external amplifying device for some music playing equipment.

In the experiment, we used the 8002b power amplifier speaker module to emit sounds of various frequencies. 

#### **Working Principle**

In fact, it is similar to a passive buzzer. The active buzzer has its own oscillation source. Yet, the passive buzzer does not have internal oscillation. When controlling the circuit, we need to input square waves of different frequencies to the positive pole of the component and ground the negative pole to control the buzzer to chime sounds of different frequencies.

![](media/f5f372e0713df6439a7cc52f5caf1cad.png)

#### **Required Components**

| ![img](media/wps299.jpg) | ![img](media/wps300.png) | ![img](media/wps301.jpg)      | ![img](media/wps302.png) | ![img](media/wps303.jpg) |
| ------------------------ | ------------------------ | ----------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | 8002b Audio Power Amplifier*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/c6e67388d17aae690f538a4c61f9fd9f.png)

#### **Test Code**


```python
from machine import Pin, PWM
from time import sleep
buzzer = PWM(Pin(15))

buzzer.duty(1000)

buzzer.freq(523)#DO
sleep(0.5)
buzzer.freq(586)#RE
sleep(0.5)
buzzer.freq(658)#MI
sleep(0.5)
buzzer.freq(697)#FA
sleep(0.5)
buzzer.freq(783)#SO
sleep(0.5)
buzzer.freq(879)#LA
sleep(0.5)
buzzer.freq(987)#SI
sleep(0.5)
buzzer.duty(0)
```

#### **Code Explanation**

In this experiment, we use the PWM class of the machine module, buzzer = PWM(Pin(15)) to create an instance of the PWM class, and the buzzer pin is connected to GPIO15.

The buzzer.duty(1000): set the duty cycle, and the duty cycle is 1000/4095. The larger the value, the louder the buzzer. When set to 0, the buzzer does not emit sound. **buzzer.freq()** is the frequency setting method.

In the experiment, we use the PWM on the machine module. **buzzer = PWM(Pin(15))**

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The power amplifier module will emit the sound of the corresponding frequency corresponding to the beat :DO for 0.5s, Re for 0.5s, Mi for 0.5s, Fa for 0.5s, So for 0.5s, La 0.5s and Si for 0.5s. Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 18: 130 Motor

![](media/6c4e0d18c7c1867e27c0bac8e1c6412b.jpeg)

#### **Description**

The 130 motor driver module is compatible with servo motors, which has high efficiency and good quality fans. 

It adopts a HR1124S motor control chip. HR1124S is a single-channel H-bridge driver chip for DC motor solutions. In addition, this chip has low standby current and low quiescent current.

The module is compatible with various single-chip control boards. In the experiment, we can control the rotation direction of the motor by outputting the voltage directions of the two signal terminals IN+ and IN- to make the motor rotate. 

#### **Working Principle**

The chip is used to help drive the motor. We can’t drive it with a triode or an IO port due to its a large current of need. It is very simple to make the motor rotate. Just apply voltage to both ends of the motor. The direction of the motor is different in different voltage directions. Within the rated voltage, the higher the voltage, the faster the motor rotates; on the contrary, the lower the voltage, the slower the motor rotates, or even unable to rotate. 

So we can use the PWM port to control the speed of the motor. We haven't learned PWM here, so we use the high and low levels to control the motor first.

![](media/5ea2e4d2b18f87ffa9a31e834764ec4b.png)

#### **Required Components**

| ![img](media/wps304.jpg) | ![img](media/wps305.png) | ![img](media/wps306.jpg) | ![img](media/wps307.png) |
| ------------------------ | ------------------------ | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio  130 Motor*1  | 4P Dupont Wire*1         |
| ![img](media/wps308.jpg) | ![img](media/wps309.png) | ![img](media/wps310.jpg) |                          |
| Micro USB Cable*1        | 6 AA Battery Holder*1    | Battery (not included)*6 |                          |


Note: the motor is separated with its fan, you need to assemble it first.

#### **Connection Diagram**

| 130 Motor | ESP32 Expansion Board |
| :-------: | :-------------------: |
|     G     |           G           |
|     V     |          5V           |
|    IN+    |         IO15          |
|    IN-    |          IO4          |


![](media/bbe7e2090eaae8cea355349c9484289b.png)

#### **Test Code**


```python
from machine import Pin
import time

#Two pins of the motor
INA = Pin(15, Pin.OUT) #INA corresponds to IN+
INB = Pin(4, Pin.OUT)#INB corresponds to IN- 

while True:
    #Counterclockwise 2s
    INA.value(1)
    INB.value(0)
    time.sleep(2)
    #stop 1s
    INA.value(0)
    INB.value(0)
    time.sleep(1)
    #Turn clockwise for 2s
    INA.value(0)
    INB.value(1)
    time.sleep(2)
    #stop 1s
    INA.value(0)
    INB.value(0)
    time.sleep(1)
```

#### **Code Explanation**

Set pins to GPIO4, GPIO15, when the pin GPIO4 outputs low levels and the pin GPIO15 outputs high levels, the motor will rotate counterclockwise; when both pins are set to low, the motor stops rotating. 

#### **Test Result**

Wire up, power on and click ![img](media/wps311.jpg). Turn the DIP switch to ON , after powering on, click ![img](media/wps312.jpg)“Run current script”, the code starts executing. the fan will rotate counterclockwise for 2 seconds, stop for 1 second; and rotate clockwise for 2 seconds and stop for 1 second; cycle alternately. Press “Ctrl+C”or click![img](media/wps313.jpg)“Stop/Restart backend”to exit the program.

### Project 19: Potentiometer

![](media/fe92a4f36758bc236d94290478fe5eac.jpeg)

#### **Overview**

The following we will introduce is the Keyestudio rotary potentiometer which is an analog sensor.

The digital IO ports can read the voltage value between 0 and 3.3V and the module only outputs high levels. However, the analog sensor can read the voltage value through 16 ADC analog ports on the ESP32 board. In the experiment, we will display the test results on the Shell.

#### **Working Principle**

![](media/a6ca9064a864e572984fdc41207eaaca.jpeg)

It uses a 10K adjustable resistor. We can change the resistance by rotating the potentiometer. The signal S can detect the voltage changes(0-3.3V) which are analog quantity.

**ADC:** The more bits an ADC has, the denser the partitioning of the simulation, the higher the accuracy of the final conversion.

![](media/f6c45550f4adf8373d7f1d01daec2c64.png)

The conversion formula is as follows:

![img](media/wps314.png)

**DAC:** The higher the precision of DAC, the higher the precision of the output voltage value.  

The conversion formula is as follows:  

![img](media/wps315.png)

**ADC on ESP32：**

The ESP32 has 16 pins that can be used to measure analog signals. GPIO pin serial numbers and analog pin definitions are shown below:

| ADC number in ESP32 | ESP32 GPIO number |
| :-----------------: | :---------------: |
|        ADC0         |      GPIO 36      |
|        ADC3         |      GPIO 39      |
|        ADC4         |      GPIO 32      |
|        ADC5         |      GPIO33       |
|        ADC6         |      GPIO34       |
|        ADC7         |      GPIO 35      |
|        ADC10        |      GPIO 4       |
|        ADC11        |       GPIO0       |
|        ADC12        |       GPIO2       |
|        ADC13        |      GPIO15       |
|        ADC14        |      GPIO13       |
|        ADC15        |      GPIO 12      |
|        ADC16        |      GPIO 14      |
|        ADC17        |      GPIO27       |
|        ADC18        |      GPIO25       |
|        ADC19        |      GPIO26       |

**DAC on ESP32：**

The ESP32 has two 8-bit digital-to-analog converters connected to GPIO25 and GPIO26 pins, which are immutable, as shown below :

| Simulate pin number | GPIO number |
| :-----------------: | :---------: |
|        DAC1         |   GPIO25    |
|        DAC2         |   GPIO26    |

#### **Required Components**

| ![img](media/wps316.jpg) | ![img](media/wps317.png) | ![img](media/wps318.jpg) | ![img](media/wps319.png) | ![img](media/wps320.jpg) |
| ------------------------ | ------------------------ | ------------------------ | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Rotary Potentiometer*1   | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/ce7b953cd508fd8f2f9aafb805fae1f6.png)

#### **Test Code**


```python
# Import Pin, ADC and DAC modules.
from machine import ADC,Pin,DAC
import time

# Turn on and configure the ADC with the range of 0-3.3V 
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

# Read ADC value once every 0.1seconds, convert ADC value to DAC value and output it,
# and print these data to “Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```

#### **Code Explanation**

1\. In the experiment, add "**From Machine import ADC**" to the top of your Python file every time you use the ACD module, the same goes for DAC modules. 

2\. **machine.ADC(pin)**:Create an ADC object associated with the given pin. The available pins are Pin(36)、Pin(39)、Pin(34）、Pin(35)、Pin(32)、Pin(33). DAC(pin): Create an DAC object associated with the given pin. Pin：The available pins are pin (25) 、pin (26).

3.**ADC. Read()**: Read ADC value and return ADC value.  

4\.**ADC.atten(db)**: Set attenuation ration (that is, the full range voltage, such as the voltage of 11db full range is 3.3V).

**db**：attenuation ratio

**ADC.ATTIN\_0DB** —full range of 1.2V

**ADC.ATTN\_2\_5\_DB** —full range of 1.5V

**ADC.ATTN\_6DB** —full range of 2.0 V

**ADC.ATTN\_11DB** —full range of 3.3V

**ADC.width(bit)**: Set data width.

**bit**：data bit

**ADC.WIDTH\_9BIT** —9 data width

**ADC.WIDTH\_10BIT** — 10 data width

**ADC.WIDTH\_11BIT** — 11 data width

**ADC.WIDTH\_12BIT** — 12 data width

5\. The **read()method** reads the ADCvalue，rang is 0\~4095，the **adc.read()** reads the ADC value input by the ADC(Pin(36)) Pin and assigns it to a variable named adcVal.  

6\. **DAC.write(value)**: Output the voltage value, the data rang : 0-255，the corresponding output voltage is 0-3.3V.

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The "Shell" window prints and displays the potentiometer ADC value, DAC value and voltage value.

Rotating the potentiometer handle, the ADC value, DAC value and voltage value will change. Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/65e6848785b8e09c731df4dd1f68a3a0.png)

### Project 20: Steam Sensor

![](media/0062e47b90828244595c1fb93c45f1d5.jpeg)

#### **Description**

This is a DIY electronic building block water drop sensor. It is an analog (digital) input module, also called rain, rain sensor. It can be used to monitor various weather conditions, detect whether it is raining and the amount of rain, convert it into digital signal (DO) and analog signal (AO) output, and is widely used in Arduino robot kits, raindrops, rain sensors, and can be used for various It can monitor various weather conditions, and convert it into digital signal and AO output, and can also be used for automobile automatic wiper system, intelligent lighting system and intelligent sunroof system. 

In the experiment, we input the sensor signal terminal (S terminal) to the analog port of the ESP32 development board, sense the change of the analog value, and display the corresponding analog value on the shell.

#### **Working Principle**

Its principle is to detect the amount of water through the exposed printed parallel lines on the circuit board. The more water there is, the more wires will be connected, and the conductive contact area increases. The voltage output by pin 2 will gradually increase. The larger the analog value detected by the signal terminal S is.

It can also detect steam in the air. Two position holes are used to install on the other devices.

![](media/790270169035ee740b28c49c4b1dde47.png)

#### **Required Components**

| ![img](media/wps321.jpg) | ![img](media/wps322.png) | ![img](media/wps323.jpg)       | ![img](media/wps324.png) | ![img](media/wps325.jpg) |
| ------------------------ | ------------------------ | ------------------------------ | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio DIY Steam Sensor *1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/c4eb7a1f583dc8b99775578cd7cd4674.png)

#### **Test Code**

```python
# Import Pin, ADC and DAC modules.
from machine import ADC,Pin,DAC
import time

# Turn on and configure the ADC with the range of 0-3.3V 
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

# Read ADC value once every 0.1seconds, convert ADC value to DAC value and output it,
# and print these data to “Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The Shell will display ADC value, DAC value and voltage value of the sensor. When a few drops of water are placed in the sensor sensing area, the ADC value, DAC value and voltage value will change. The more water volume, the greater the output voltage value , ADC value and the DAC value. Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/65e6848785b8e09c731df4dd1f68a3a0.png)

### Project 21: Sound Sensor

![](media/c4d4961f71c7e91bae04507f72cb56eb.jpeg)

#### **Overview**

In this kit, there is a Keyestudio DIY electronic block and a sound sensor. In the experiment, we test the analog value corresponding to the sound level in the current environment with it. The louder the sound, the larger the ADC, DAC and the voltage value, and the “shell”window will display the test results.

#### **Working Principle**

It uses a high-sensitive microphone component and an LM386 chip. We build the circuit with the LM386 chip and amplify the sound through the high-sensitive microphone. In addition, we can adjust the sound volume by the potentiometer. Rotate it clockwise, the sound will get louder.

#### **Required Components**

| ![img](media/wps326.jpg) | ![img](media/wps327.png) | ![img](media/wps328.jpg)  | ![img](media/wps329.png) | ![img](media/wps330.jpg) |
| ------------------------ | ------------------------ | ------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio Sound Sensor*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/7a5b741aba98560eddadc3b7788325d9.png)

#### **Test Code**

```python
# Import Pin, ADC and DAC modules.
from machine import ADC,Pin,DAC
import time

# Turn on and configure the ADC with the range of 0-3.3V 
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

# Read ADC value once every 0.1seconds, convert ADC value to DAC value and output it,
# and print these data to “Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The "Shell" window will display the sound sensor ADC value, DAC value and voltage value. Rotate the potentiometer clockwise and speak at the MIC. Then you can see the analog value get larger, as shown below. Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/16c179e59bfbbb62544d74ce501f0aa2.png)

### Project 22: Photoresistor

![](media/37bb57bcf72ba62056bbc61164185f0a.png)

#### **Description**

In this kit, there is a photoresistor which consists of photosensitive resistance elements. Its resistance changes with the light intensity. Also, it converts the resistance change into a voltage change through the characteristic of the photosensitive resistive element. When wiring it up, we interface its signal terminal (S terminal) with the analog port of ESP32 , so as to sense the change of the analog value, and display the corresponding analog value in the shell.

#### **Working Principle**

If there is no light, the resistance is 0.2MΩ and the detected voltage at the terminal 2 is close to 0. When the light intensity increases, the resistance of photoresistor and detected voltage will diminish.

![](media/651e70e24ecca152ec701deb7a6ea102.png)

#### **Required Components**

| ![img](media/wps331.jpg) | ![img](media/wps332.png) | ![img](media/wps333.jpg)       | ![img](media/wps334.png) | ![img](media/wps335.jpg) |
| ------------------------ | ------------------------ | ------------------------------ | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio DIY Photoresistor*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/0b880c099cb70864881c501c9a3a8dbb.png)

#### **Test Code**

```python
# Import Pin, ADC and DAC modules.
from machine import ADC,Pin,DAC
import time

# Turn on and configure the ADC with the range of 0-3.3V 
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

# Read ADC value once every 0.1seconds, convert ADC value to DAC value and output it,
# and print these data to “Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The "Shell" window will display the photoresistor ADC value, DAC value and voltage value. The brighter the light, the greater the analog value, as shown below. Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/3b141ec51733d34caff4f0b2afc653a4.png)

### Project 23: NTC-MF52AT Thermistor

![](media/868d93395d983645baab872091991403.jpeg)

#### **Overview**

In the experiment, there is a NTC-MF52AT analog thermistor. We connect its signal terminal to the analog port of the ESP32 mainboard and read the corresponding ADC value, voltage value and thermistor value.

We can use analog values to calculate the temperature of the current environment through specific formulas. Since the temperature calculation formula is more complicated, we only read the corresponding analog value.

#### **Working Principle**

![](media/84a67bb2b90b4740c09d914dc6402f48.png)

NTC-MF52AT thermistor elements. The NTC-MF52AT thermistor element can sense the changes of the surrounding environment temperature. Resistance changes with the temperature, causing the voltage of the signal terminal S to change.

This sensor uses the characteristics of NTC-MF52AT thermistor element to convert resistance changes into voltage changes.

#### **Required Components**

| ![img](media/wps336.jpg) | ![img](media/wps337.png) | ![img](media/wps338.jpg)           | ![img](media/wps339.png) | ![img](media/wps340.jpg) |
| ------------------------ | ------------------------ | ---------------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio NTC-MF52AT Thermistor*1 | 3P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/7fba5e360e5bcc3e60ef27a77b3362d1.png)

#### **Test Code**


```python
from machine import Pin, ADC
import time
import math

#Set ADC
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

try:
    while True:
        adcValue = adc.read()
        voltage = adcValue / 4095 * 3.3
        Rt = 10 * voltage / (3.3-voltage)
        tempK = (1 / (1 / (273.15+25) + (math.log(Rt/4.7)) / 3950))
        tempC = (tempK - 273.15)
        print("ADC value:",adcValue,"  Voltage:",voltage,"V","  Temperature: ",tempC,"C");
        time.sleep(1)
except:
    pass
```

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The "Shell" window will display the thermistor ADC value, voltage value and temperature value, as shown below. Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/77f18a9e099306cd7111d6b2df2b5eb6.png)

### Project 24: Thin-film Pressure Sensor

![](media/a9ae2963fc87b3502703f7dd5eb208ec.jpeg)

#### **Overview**

In this kit, there is a Keyestudio thin-film pressure sensor. The thin-film pressure sensor composed of a new type of Nano pressure-sensitive material and a comfortable ultra-thin film substrate, has waterproof and pressure-sensitive functions.

In the experiment, we determine the pressure by collecting the analog signal on the S end of the module. The smaller the ADC value, DAC value and voltage value, the greater the pressure; and the displayed results will shown on the Shell.

![](media/520fa537602873d2a337731318668348.png)

#### **Required Components**

| ![img](media/wps341.jpg) | ![img](media/wps342.png) |        ![img](media/wps343.jpg)        | ![img](media/wps344.png) | ![img](media/wps345.jpg) |
| :----------------------: | :----------------------: | :------------------------------------: | :----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | Keyestudio Thin-film Pressure Sensor*1 |     3P Dupont Wire*1     |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/a461b6b0227b4430b64da6e80be8d898.png)

#### **Test Code**


```python
# Import Pin, ADC and DAC modules.
from machine import ADC,Pin,DAC
import time

# Turn on and configure the ADC with the range of 0-3.3V 
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

# Read ADC value once every 0.1seconds, convert ADC value to DAC value and output it,
# and print these data to “Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The "Shell" window will display the Thin-film Pressure Sensor ADC value, voltage value and DAC value. When the thin-film is pressed by fingers, the analog value will decrease, as shown below. Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend” to exit the program.

![](media/e43fa7aaed34eea4fee5a535699ddf3f.png)

### Project 25: Flame Sensor

![](media/c6c3bf0c9bf0af22a2aa06c5b7399cfd.jpeg)

#### **Description**

In daily life, it is often seen that a fire broke out without any precaution. It will cause great economic and human loss. So how can we avoid this situation? Right, install a flame sensor and a speaker in those places that easily break out a fire. When the flame sensor detects a fire, the speaker will alarm people quickly to put out the fire.

So in this project, you will learn how to use a flame sensor and an active buzzer module to simulate the fire alarm system. 

#### **Working Principle**

This flame sensor can be used to detect fire or other light sources with wavelength stands at 700nm ~ 1000nm. Its detection angle is about 60°. You can rotate the potentiometer on the sensor to control its sensitivity. Adjust the potentiometer to make the LED at the critical point between on and off state. The sensitivity is the best.  

From the below figure, power up. When detecting fire, the digital pin outputs low levels, the red LED2 will light up first, the digital signal terminal D0 outputs a low level, and the red LED1 will light up. The stronger the external infrared light, the smaller the value; the weaker the infrared light, the larger the value.

![](media/01f69822915149445858a471784ebddf.png)

#### **Required Components**

| ![img](media/wps346.jpg) | ![img](media/wps347.png) | ![img](media/wps348.jpg)   | ![img](media/wps349.png) | ![img](media/wps350.jpg) |
| ------------------------ | ------------------------ | -------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | keyestudio  Flame Sensor*1 | 4P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/1f2a3bd0f40c2c14162e1c148044ab22.png)

#### **Test Code**

```python
# Import Pin, ADC and DAC modules.
from machine import ADC,Pin,DAC
import time

flame_D = Pin(13, Pin.IN)
# Turn on and configure the ADC with the range of 0-3.3V
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

# Read digital value and ADC value once every 0.1seconds, convert ADC value to DAC value and Voltage value and output it,
# and print these data to “Shell”. 
try:
    while True:
        digitalVal = flame_D.value() 
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("digitalVal:",digitalVal,"ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```

#### **Code Explanation**

Two pins we use are defined as GPIO13 and GPIO34 according to the wiring-up diagram, and print digital signals and analog signals respectively.

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. After powering on, rotating the potentiometer on the sensor, we can adjust the red LED bright and not bright critical point. The red LED2 on the sensor module is lit, while the red LED1 is not. The Shell will print and display the digital value, ADC value, DAC value and voltage value of the flame sensor. When fire is detected, the LED1 will be on. the digital value will change from 1 to 0, and the analog value will become smaller, as shown below. Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend” to exit the program.

![](media/fd9e95873daf5dc47c1368970f1bc6dd.png)

### Project 26: MQ-2 Gas Sensor

![](media/f712788d3997805df25abe4a99d42461.GIF)

#### **Description**

This analog gas sensor - MQ2 is used in gas leakage detecting equipment in consumer electronics and industrial markets.

This sensor is suitable for detecting LPG, I-butane, propane, methane, alcohol, Hydrogen and smoke. It has high sensitivity and quick response.

In addition, the sensitivity can be adjusted by rotating the potentiometer.

In the experiment, we read the analog value at the A0 port and the D0 port to determine the content of gas.

#### **Working Principle**

The greater the concentration of smoke, the greater the conductivity, the lower the output resistance, the greater the output analog signal.

When in use, the A0 terminal reads the analog value of the corresponding gas; the D0 terminal is connected to an LM393 chip (voltage comparator), we can adjust the alarm threshold of the measured gas through the potentiometer, and output the digital value at D0. When the measured gas content exceeds the critical point, the D0 terminal outputs a low level; when the measured gas content does not exceed the critical point, the D0 terminal outputs a high level.

![](media/c55edbe71237172f6b80877504a9debb.png)

#### **Required Components**

| ![img](media/wps356.jpg) | ![img](media/wps357.png) | ![img](media/wps358.jpg) | ![img](media/wps359.png) | ![img](media/wps360.jpg) |
| :----------------------: | :----------------------: | :----------------------: | :----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  |   Analog Gas Sensor*1    |     4P Dupont Wire*1     |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/9421fdc1d7de9566b377f1bcd9e060a8.png)

#### **Test Code**

```python
# Import Pin, ADC and DAC modules.
from machine import ADC,Pin,DAC
import time

# Turn on and configure the ADC with the range of 0-3.3V
mq2_D = Pin(13, Pin.IN)
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

# Read digital value and ADC value once every 0.1seconds, convert ADC value to DAC value and Voltage value and output it,
# and print these data to “Shell”.  

while True:
    digitalVal = mq2_D.value()
    adcVal=adc.read()
    dacVal=adcVal//16
    voltage = adcVal / 4095.0 * 3.3
    print("digitalVal:",digitalVal,"ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V", end = "  ")
    if digitalVal == 0:
        print("Exceeding")
    else:
        print("Normal")
    time.sleep(0.1)
```

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The shell will display the corresponding data and string. After powering on, by rotating the potentiometer on the sensor, we can adjust the red LED bright and not bright critical point. When the sensor detects the smoke or combustible gas, the red LED lights up and the digital value in the Shell changes from 1 to 0, the ADC value, DAC value and voltage value increase, as shown below. Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend” to exit the program.

![](media/31762387bb2e31de727ea9ece9c86cec.png)

### Project 27: Joystick Module

![](media/a28a09d0d9103cc8b93f2ae71f98482a.jpeg)

#### **Overview**

Game handle controllers are ubiquitous. 

It mainly uses PS2 joysticks. When controlling it, we need to connect the X and Y ports of the module to the analog port of the single-chip microcomputer, port B to the digital port of the single-chip microcomputer, VCC to the power output port(3.3-5V), and GND to the GND of the MCU. We can read the high and low levels of two analog values and one digital port) to determine the working status of the joystick on the module.

In the experiment, two analog values(x axis and y axis) will be shown on Shell.

#### **Working Principle**

![](media/efcb8ed421ab3572af890d73788a8c01.jpeg)

In fact, its working principle is very simple. Its inside structure is equivalent to two adjustable potentiometers and a button. When this button is not pressed and the module is pulled down by R1, low levels will be output ; on the contrary, when the button is pressed, VCC will be connected (high levels), When we move the joystick, the internal potentiometer will adjust to output different voltages, and we can read the analog value.

#### **Required Components**

| ![img](media/wps361.jpg) | ![img](media/wps362.png) |   ![img](media/wps363.jpg)   | ![img](media/wps364.jpg) | ![img](media/wps365.jpg) |
| :----------------------: | :----------------------: | :--------------------------: | :----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | Keyestudio Joystick Module*1 |     5P Dupont Wire*1     |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/c1838e7013bc930e997d7684229bcea3.png)

#### **Test Code**

```python
from machine import Pin, ADC
import time
# Initialize the joystick module (ADC function)
rocker_x=ADC(Pin(34)) 
rocker_y=ADC(Pin(35))
button_z=Pin(13,Pin.IN,Pin.PULL_UP)

# Set the acquisition range of voltage of the two ADC channels to 0-3.3V,
# and the acquisition width of data to 0-4095.
rocker_x.atten(ADC.ATTN_11DB)
rocker_y.atten(ADC.ATTN_11DB)
rocker_x.width(ADC.WIDTH_12BIT)
rocker_y.width(ADC.WIDTH_12BIT)

# In the code, configure Z_Pin to pull-up input mode.
# In loop(), use Read () to read the value of axes X and Y 
# and use value() to read the value of axis Z, and then display them.
while True:
    print("X,Y,Z:",rocker_x.read(),",",rocker_y.read(),",",button_z.value())
    time.sleep(0.5)
```

#### **Code Explanation**

In the experiment, according to the wiring diagram, the x pin is set to GPIO34, the y pin is set to GPIO35 and the pin of the joystick is set to GPIO13.

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The "Shell" window will print the analog and digital values of the current joystick. Moving the joystick will change the analog and digital values in "Shell". Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/06a9de681779df5cfc7e6bc24a928a3a.jpeg)

![](media/6e7dd18099836222c5237c9e0e659539.png)

### Project 28: Relay Module

#### **Overview**

In our daily life, we usually use communication to drive electrical equipment, and sometimes we use switches to control electrical equipment. If the switch is connected directly to the ac circuit, leakage occurs and people are in danger. Therefore, from the perspective of safety, we specially designed this relay module with NO(normally open) end and NC(normally closed) end.  

#### **Working Principle**

Relay is compatible with a variety of microcontroller control board, such as Arduino series microcontroller, which is a small current to control the operation of large current "automatic switch".  

Input Voltage: 3.3V-5V

![image-20230509153141738](media/image-20230509153141738.png)

It can let the MCU control board drive 3A load, such as an LED lamp belt, a DC motor, a micro water pump and a solenoid valve plugable interface design, which is easy to use.  

#### **Required Components**

| ![img](media/wps366.jpg) | ![img](media/wps367.png) |  ![img](media/wps368.jpg)  | ![img](media/wps369.png) | ![img](media/wps370.jpg) |
| :----------------------: | :----------------------: | :------------------------: | :----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | Keyestudio  Relay Module*1 |     3P Dupont Wire*2     |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/b70c5d14c6a3d8820881af0bf8988848.png)

#### **Test Code**

```python
from machine import Pin
import time

# create relay from Pin 15, Set Pin 15 to output 
relay = Pin(15, Pin.OUT)
 
# The relay is opened, COM and NO are connected on the relay, and COM and NC are disconnected.
def relay_on():
    relay(1)
 
# The relay is closed, the COM and NO on the relay are disconnected, and the COM and NC are connected.
def relay_off():
    relay(0)
 
# Loop, the relay is on for one second and off for one second
while True:
    relay_on()
    time.sleep(1)
    relay_off()
    time.sleep(1)
```

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The relay will cycle on and off, on for 1 second, off for 1 second. At the same time, you can hear the sound of the relay on and off as well as see the change of the indicator light on the relay. Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 29: SK6812 RGB Module

![](media/effda831f7c06cea2c443d8352f1a693.jpeg)

#### **Overview**

In previous lessons, we learned about the plug-in RGB module and used PWM signals to color the three pins of the module. 

There is a Keyestudio 6812 RGB module whose the driving principle is different from the plug-in RGB module. It can only control with one pin. This is a set. It is an intelligent externally controlled LED light source with the control circuit and the light-emitting circuit. Each LED element is the same as a 5050 LED lamp bead, and each component is a pixel. There are four lamp beads on the module, which indicates four pixels.

In the experiment, we make different lights show different colors. 

#### **Working Principle**

From the schematic diagram, we can see that these four pixel lighting beads are all connected in series. In fact, no matter how many they are, we can use a pin to control a light and let it display any color. The pixel point contains a data latch signal shaping amplifier drive circuit, a high-precision internal oscillator and a 12V high-voltage programmable constant current control part, which effectively ensures the color of the pixel point light is highly consistent.

The data protocol adopts a single-wire zero-code communication method. After the pixel is powered up and reset, the S terminal receives the data transmitted from the controller. The first 24bit data sent is extracted by the first pixel and sent to the data latch of the pixel.

![](media/f0d824a10a88aa0fbabfb685634672fc.png)

#### **Required Components**

| ![img](media/wps371.jpg) | ![img](media/wps372.png) |   ![img](media/wps373.jpg)    | ![img](media/wps374.png) | ![img](media/wps375.jpg) |
| :----------------------: | :----------------------: | :---------------------------: | :----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | Keyestudio  6812 RGB Module*1 |     3P Dupont Wire*1     |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/c24ec4320937c7115802a2937180f703.png)

#### **Test Code**

```python
#Import Pin, neopiexl and time modules.
from machine import Pin
import neopixel
import time

#Define the number of pin and LEDs connected to neopixel.
pin = Pin(15, Pin.OUT)
np = neopixel.NeoPixel(pin, 4) 

#brightness :0-255
brightness=100                                
colors=[[brightness,0,0],                    #red
        [0,brightness,0],                    #green
        [0,0,brightness],                    #blue
        [brightness,brightness,brightness],  #white
        [0,0,0]]                             #close

#Nest two for loops to make the module repeatedly display five states of red, green, blue, white and OFF.    
while True:
    for i in range(0,5):
        for j in range(0,4):
            np[j]=colors[i]
            np.write()
            time.sleep_ms(50)
        time.sleep_ms(500)
    time.sleep_ms(500)
```

#### **Code Explanation**

**np = neopixel.NeoPixel(pin, 4)** , there are four LED beads, so we set to 4.

**pin = Pin(15, Pin.OUT)** , this is the pin number, we connect to GP15.

**brightness = 100**, brightness setting 255 implies brightest.

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. Then we can see the four RGB LEDs show red, green, blue and white color; as shown below;

Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 30: Rotary Encoder

![](media/ec37b336b8f5620b62b04224b132840a.jpeg)

#### **Overview**

In this kit, there is a Keyestudio rotary encoder, dubbed as switch encoder. It is applied to automotive electronics, multimedia audio, instrumentation, household appliances, smart home, medical equipment and so on.

In the experiment, it it used for counting. When we rotate the rotary encoder clockwise, the set data falls by 1; if you rotate it anticlockwise, the set data is up 1; and when the middle button is pressed, the value will be show on Shell.

#### **Working Principle**

The incremental encoder converts the displacement into a periodic electric signal, and then converts this signal into a counting pulse, and the number of pulses indicates the size of the displacement.This module mainly uses 20-pulse rotary encoder components. 

It can calculate the number of pulses output during clockwise and reverse rotation. There is no limit to count rotation. It resets to the initial state, that is, starts counting from 0.

![](media/2fb56ec6fa69e66fcca4243617d4b18c.jpeg)

#### **Required Components**

| ![img](media/wps376.jpg) | ![img](media/wps377.png) |   ![img](media/wps378.jpg)   | ![img](media/wps379.jpg) | ![img](media/wps380.jpg) |
| ------------------------ | :----------------------: | :--------------------------: | :----------------------: | :----------------------: |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio  Rotary Encoder*1 |     5P Dupont Wire*1     |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/add429af09e0e3d449fba9b17b3d0af4.png)

#### **Add Library**

Open“Thonny”, click“This computer”→“D:”→“2. ESP32\_code\_MicroPython”→“lesson 30. Rotary encoder counting”. Choose“rotary.py”and“rotary\_irq\_rp2.py”，right-click“Upload to /”.

![](media/85ed8ab5ae74f3c651b168971cf7c2ba.png)

![](media/fdc65c590bf0b0e81d42f6b8032219c5.png)

#### **Test Code**


```python
import time
from rotary_irq_rp2 import RotaryIRQ
from machine import Pin

SW=Pin(27,Pin.IN,Pin.PULL_UP)  
r = RotaryIRQ(pin_num_clk=12,
              pin_num_dt=14,
              min_val=0,
              reverse=False,
              range_mode=RotaryIRQ.RANGE_UNBOUNDED)
val_old = r.value()
while True:
    try:
        val_new = r.value()
        if SW.value()==0 and n==0:
            print("Button Pressed")
            print("Selected Number is : ",val_new)
            n=1
            while SW.value()==0:
                continue
        n=0
        if val_old != val_new:
            val_old = val_new
            print('result =', val_new)
        time.sleep_ms(50)
    except KeyboardInterrupt:
        break
```

#### **Code Explanation**

We will see the file rotary.py and rotary\_irq\_rp2.py. This means that we save them in the ESP32 successfully. Then we can use **from rotary\_irq\_rp2 import RotaryIRQ.**

**SW=Pin(20,Pin.IN,Pin.PULL\_UP)** indicates that the SW pin is connected to GPIO27, **pin\_num\_clk=12** indicates that the pin CLK is connected to GPIO12, and **pin\_num\_dt=14** means that the DT pin is connected to GPIO14. We can change these pin numbers.

**try/except** is the python language exception capture processing statement, **try** executes the code, **except** executes the code when an exception occurs, and when we press Ctrl+C, the program exits.

**r.value()** returns the value of the encoder

#### Test Result

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. Rotate the encoder clockwise, the displayed data decrease; rotate the encoder counterclockwise, the displayed data increase; press the middle button of the encoder, the displayed data is the value of the encoder, as shown in the figure below. Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/ea0e88b6a555f4dff831966f20c89782.png)

### Project 31: Servo Control

![](media/165f16e47a832fc4dcaea6e4a1c11194.jpeg)

#### **Overview**

Servo motor is a position control rotary actuator. It mainly consists of a housing, a circuit board, a core-less motor, a gear and a position sensor. Its working principle is that the servo receives the signal sent by MCU or receiver and produces a reference signal with a period of 20ms and width of 1.5ms, then compares the acquired DC bias voltage to the voltage of the potentiometer and obtain the voltage difference output.

In general, servo has three lines in brown, red and orange. The brown wire is grounded, the red one is a positive pole line and the orange one is a signal line.

![image-20230509153914831](media/image-20230509153914831.png)

![](media/3366fe332bcf286659f9bf21a8cf880f.png)

#### **Working Principle**

When the motor speed is constant, the potentiometer is driven to rotate through the cascade reduction gear, which leads that the voltage difference is 0, and the motor stops rotating. Generally, the angle range of servo rotation is 0° --180 °.

The rotation angle of servo motor is controlled by regulating the duty cycle of PWM (Pulse-Width Modulation) signal. The standard cycle of PWM signal is 20ms (50Hz). Theoretically, the width is distributed between 1ms-2ms, but in fact, it's between 0.5ms-2.5ms. The width corresponds the rotation angle from 0° to 180°. But note that for different brand motors, the same signal may have different rotation angles. 

![](media/b4993212773e13b1a4424b3d7ef41ab6.png)

#### **Required Components**

| ![img](media/wps381.jpg) | ![img](media/wps382.png) | ![img](media/wps383.jpg) | ![img](media/wps384.jpg) |
| ------------------------ | ------------------------ | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Servo*1                  | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/53dbdf43b364542bedb39e45132a2af9.png)

#### **Test Code 1**

```python
from machine import Pin, PWM
import time
pwm = PWM(Pin(4))  
pwm.freq(50)

'''
Duty cycle corresponding to the Angle
0°----2.5%----25
45°----5%----51.2
90°----7.5%----77
135°----10%----102.4
180°----12.5%----128
'''
angle_0 = 25
angle_90 = 77
angle_180 = 128

while True:
    pwm.duty(angle_0)
    time.sleep(1)
    pwm.duty(angle_90)
    time.sleep(1)
    pwm.duty(angle_180)
    time.sleep(1)
```

#### **Code Explanation 1**

According to the angle of the signal pulse width, it is converted into a duty cycle. The formula is: 2.5+angle/180*10. The PWM pin resolution of ESP32 is 2^10 = 1024. When converted to 0 degree, its duty cycle is 1024 * 2.5% = 25.6 , when the angle is 180 degrees, its duty cycle value is 1024* 12.5% = 128, these two values will be related to the program, considering the error and rotation angle, I set the duty cycle at between 10 and 150, the servo can rotate smoothly 0~180 degrees.

#### **Test Result 1**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. the servo will rotate 0°，90° and 180° cyclically. Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend” to exit the program.

#### **Test Code 2**


```python
from utime import sleep
from machine import Pin
from machine import PWM

pwm = PWM(Pin(4))#Steering gear pin is connected to GP4.
pwm.freq(50)#20ms period, so the frequency is 50Hz
'''
Duty cycle corresponding to the Angle
0°----2.5%----25
45°----5%----51.2
90°----7.5%----77
135°----10%----102.4
180°----12.5%----128
'''
# Set the servo motor rotation Angle
def setServoCycle (position):
    pwm.duty(position)
    sleep(0.01)

# Convert the rotation Angle to duty cycle
def convert(x, i_m, i_M, o_m, o_M):
    return max(min(o_M, (x - i_m) * (o_M - o_m) // (i_M - i_m) + o_m), o_m)

while True:
    for degree in range(0, 180, 1):#servo goes from 0 to 180
        pos = convert(degree, 0, 180, 20, 150)
        setServoCycle(pos)

    for degree in range(180, 0, -1):#servo goes from 180 to 0
        pos = convert(degree, 0, 180, 20, 150)
        setServoCycle(pos)
```

#### **Code Explanation 2**

**convert(x, i\_m, i\_M, o\_m, o\_M)**: x is the value we want to map; **i\_m, i\_M** are the lower and upper limits of the current value; o\_m, o\_M are the lower and upper limits of the target range we want to map to.

#### **Test Result 2**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The servo rotates from 0° to 180° by moving 1° for each 15ms. Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 32: Ultrasonic Sensor

![](media/8f99fc89502d1ae2543839b4950da5b6.jpeg)

Bats and some marine animals are able to use high frequencies of sound for echolocation or communication. They can emit ultrasonic waves from the larynx through the mouth or nose and use the sound waves that bounce back to orient and determine the position, size and whether nearby objects are moving. Ultrasonic is a frequency higher than 20000 Hz sound wave, which has a good direction, a strong penetration ability, and is easy to obtain more concentrated sound energy as well as spread far in the water. It can be used for ranging, speed measurement, cleaning, welding, gravel, sterilization and disinfection. What‘s more, it has many applications in medicine, military, industry and agriculture. 

#### **Overview**

In this kit, there is a keyes HC-SR04 ultrasonic sensor, which can detect obstacles in front and the detailed distance between the sensor and the obstacle. Its principle is the same as that of bat flying. It can emit the ultrasonic signals that cannot be heard by humans. When these signals hit an obstacle and come back immediately. The distance between the sensor and the obstacle can be calculated by the time gap of emitting signals and receiving signals.

In the experiment, we use the sensor to detect the distance between the sensor and the obstacle, and print the test result.

#### **Working Principle**

The most common ultrasonic ranging method is the echo detection. As shown below; when the ultrasonic emitter emits the ultrasonic waves towards certain direction, the counter will count. The ultrasonic waves travel and reflect back once encountering the obstacle. Then the counter will stop counting when the receiver receives the ultrasonic waves coming back.

The ultrasonic wave is also sound wave, and its speed of sound V is related to temperature. Generally, it travels 340m/s in the air. According to time t, we can calculate the distance s from the emitting spot to the obstacle. 
$$
s=340t/2
$$
The HC-SR04 ultrasonic ranging module can provide a non-contact distance sensing function of 2cm-400cm, and the ranging accuracy can reach as high as 3mm; the module includes an ultrasonic transmitter, receiver and control circuit. Basic working principle:

1. First pull down the TRIG, and then trigger it with at least 10us high level signal.

2. After triggering, the module will automatically transmit eight 40KHZ square waves, and automatically detect whether there is a signal to return.

3. If there is a signal returned back, through the ECHO to output a high level, the duration time of high level is actually the time from emission to reception of ultrasonic.

![](media/686176f637ba288e3b20d63bb1054477.png)

#### **Required Components**

| ![img](media/wps385.jpg) | ![img](media/wps386.png) | ![img](media/wps387.jpg)            | ![img](media/wps388.png) | ![img](media/wps389.jpg) |
| ------------------------ | ------------------------ | ----------------------------------- | ------------------------ | ------------------------ |
| ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio SR01 Ultrasonic Sensor*1 | 4P Dupont Wire*1         | Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/07eb56920ed1cb9b55deab51b7c61d8d.png)

#### **Test Code**


```python
from machine import Pin
import time

# Define the control pins of the ultrasonic ranging module. 
Trig = Pin(13, Pin.OUT, 0) 
Echo = Pin(14, Pin.IN, 0)

distance = 0 # Define the initial distance to be 0.
soundVelocity = 340 #Set the speed of sound.

# The getDistance() function is used to drive the ultrasonic module to measure distance,
# the Trig pin keeps at high level for 10us to start the ultrasonic module.
# Echo.value() is used to read the status of ultrasonic module’s Echo pin,
# and then use timestamp function of the time module to calculate the duration of Echo
# pin’s high level,calculate the measured distance based on time and return the value.
def getDistance():
    Trig.value(1)
    time.sleep_us(10)
    Trig.value(0)
    while not Echo.value():
        pass
    pingStart = time.ticks_us()
    while Echo.value():
        pass
    pingStop = time.ticks_us()
    pingTime = time.ticks_diff(pingStop, pingStart) // 2
    distance = int(soundVelocity * pingTime // 10000)
    return distance

# Delay for 2 seconds and wait for the ultrasonic module to stabilize,
# Print data obtained from ultrasonic module every 500 milliseconds. 
time.sleep(2)
while True:
    time.sleep_ms(500)
    distance = getDistance()
    print("Distance: ", distance, "cm")
```

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The "Shell" window will print the distance between the ultrasonic sensor and the object. Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/ce873cf513307a15f9aa58078c8dd7d6.png)

### Project 33: IR Receiver Module

![](media/80e8f8d8ddc35df9425032ec4ef783ee.png)

#### **Overview**

There is no doubt that infrared remote control is ubiquitous in daily life. It is used to control various household appliances, such as TVs, stereos, video recorders and satellite signal receivers. Infrared remote control is composed of infrared transmitting and infrared receiving systems, that is, an infrared remote control and infrared receiving module and a single-chip microcomputer capable of decoding.

In this experiment, we need to know how to use the infrared receiving sensor, which mainly uses the VS1838B infrared receiving sensor element. It integrates receiving, amplifying, and demodulating. The internal IC has already completed the demodulation, and the output is a digital signal. It can receive 38KHz modulated remote control signal. In the experiment, we use the IR receiver to receive the infrared signal emitted by the external infrared transmitting device, and display the received signal in the shell.

#### **Working Principle**

The main part of the IR remote control system is modulation, transmission and reception. The modulated carrier frequency is generally between 30khz and 60khz, and most of them use a square wave of 38kHz and a duty ratio of 1/3. A 4.7K pull-up resistor R3 is added to the signal end of the infrared receiver.

![](media/845973091e7fe407e7fa0e96fc1cf4f1.png)

#### **Required Components**

| ![img](media/wps393.jpg) | ![img](media/wps394.png) | ![img](media/wps395.jpg)  |
| :----------------------: | :----------------------: | :-----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | Keyestudio  IR Receiver*1 |
| ![img](media/wps396.png) | ![img](media/wps397.jpg) | ![img](media/wps398.jpg)  |
|     3P Dupont Wire*1     |       MicroUSB线*1       |     Remote Control*1      |

#### **Wiring Diagram**

![](media/f54763e2701fefc503f275dcb9410ad0.png)

#### **Test Code**


```python
import utime
from machine import Pin 

ird = Pin(15,Pin.IN)

act = {"1": "LLLLLLLLHHHHHHHHLHHLHLLLHLLHLHHH","2": "LLLLLLLLHHHHHHHHHLLHHLLLLHHLLHHH","3": "LLLLLLLLHHHHHHHHHLHHLLLLLHLLHHHH",
       "4": "LLLLLLLLHHHHHHHHLLHHLLLLHHLLHHHH","5": "LLLLLLLLHHHHHHHHLLLHHLLLHHHLLHHH","6": "LLLLLLLLHHHHHHHHLHHHHLHLHLLLLHLH",
       "7": "LLLLLLLLHHHHHHHHLLLHLLLLHHHLHHHH","8": "LLLLLLLLHHHHHHHHLLHHHLLLHHLLLHHH","9": "LLLLLLLLHHHHHHHHLHLHHLHLHLHLLHLH",
       "0": "LLLLLLLLHHHHHHHHLHLLHLHLHLHHLHLH","Up": "LLLLLLLLHHHHHHHHLHHLLLHLHLLHHHLH","Down": "LLLLLLLLHHHHHHHHHLHLHLLLLHLHLHHH",
       "Left": "LLLLLLLLHHHHHHHHLLHLLLHLHHLHHHLH","Right": "LLLLLLLLHHHHHHHHHHLLLLHLLLHHHHLH","Ok": "LLLLLLLLHHHHHHHHLLLLLLHLHHHHHHLH",
       "*": "LLLLLLLLHHHHHHHHLHLLLLHLHLHHHHLH","#": "LLLLLLLLHHHHHHHHLHLHLLHLHLHLHHLH"}

def read_ircode(ird):
    wait = 1
    complete = 0
    seq0 = []
    seq1 = []

    while wait == 1:
        if ird.value() == 0:
            wait = 0
    while wait == 0 and complete == 0:
        start = utime.ticks_us()
        while ird.value() == 0:
            ms1 = utime.ticks_us()
        diff = utime.ticks_diff(ms1,start)
        seq0.append(diff)
        while ird.value() == 1 and complete == 0:
            ms2 = utime.ticks_us()
            diff = utime.ticks_diff(ms2,ms1)
            if diff > 10000:
                complete = 1
        seq1.append(diff)

    code = ""
    for val in seq1:
        if val < 2000:
            if val < 700:
                code += "L"
            else:
                code += "H"
    # print(code)
    command = ""
    for k,v in act.items():
        if code == v:
            command = k
    if command == "":
        command = code
    return command

while True:
    command = read_ircode(ird)
    print(command)
    utime.sleep(0.5)
```



#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. Find the infrared remote control, pull out the insulating sheet, and press the button at the receiving head of the infrared receiving sensor. After receiving signals, the LED on the infrared receiving sensor also starts to flash, as shown in the figure below. Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/ff10b0aac375db3c7ad55db88a876026.png)

### Project 34: DS18B20 Temperature Sensor

![](media/29c66f83d6ea8bbc378b0508e78d5f3b.png)

#### **Description**

In this kit, there is a DS18B20 temperature sensor, which is from maxim. The MCU can communicate with the DS18B20 through 1-Wire protocol, and finally read the temperature.  In this experiment, we will use this temperature sensor to measure the temperature in the current environment. The test result is **℃**, ranging from -55**℃** to +125**℃**. We will display the test result on shell.

#### **Working Principle**

The hardware interface of the 1-Wire bus is very simple, just connect the data pin of the DS18B20 to an IO port of the microcontroller. The timing of the 1-Wire bus is relatively complex. Many students can’t understand the timing diagram independently here. We have encapsulated the complex timing operations in the library, and you can use the library functions directly.

**Schematic Diagram of DS18B20**

This can save up to 12-bit temperature vale. In the register, save in code complement. As shown below:

![](media/bffba8c519ff6e0310882d0712be9177.png)

A total of 2 bytes, LSB is the low byte, MSB is the high byte, where MSb is the high byte of the byte, LSb is the low byte of the byte. As you can see, the binary number, the meaning of the temperature represented by each bit, is expressed. Among them, S represents the sign bit, and the lower 11 bits are all powers of 2, which are used to represent the final temperature. The temperature measurement range of DS18B20 is from -55 degrees to +125 degrees, and the expression form of temperature data, S represents positive and negative temperature, and the resolution is 2﹣⒋, which is 0.0625.

#### **Required Components**

| ![img](media/wps399.jpg) | ![img](media/wps400.png) |  ![img](media/wps401.jpg)  | ![img](media/wps402.png) | ![img](media/wps403.jpg) |
| :----------------------: | :----------------------: | :------------------------: | -----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | 18B20 Temperature Sensor*1 |         3P Dupont Wire*1 |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/f605610384d05ff2877e58474a0d6f81.png)

#### **Add Library**

Open Thonny, click “This computer”→“D:”→“2. ESP32\_code\_MicroPython”→“lesson 34. DS18B20”. Select“ds18x20.py”and“onewire.py”，right-click and select“Upload to /”.

![](media/46965c2491db8e549930d841791815e3.png)

![](media/7e6a0b05a3d8bf17b6a39db85530ddfb.png)

#### **Test Code**


```python
import machine, onewire, ds18x20, time

ds_pin = machine.Pin(15)

ds_sensor = ds18x20.DS18X20(onewire.OneWire(ds_pin))

roms = ds_sensor.scan()

print('Found DS devices: ', roms)

while True:

  ds_sensor.convert_temp()

  time.sleep_ms(750)

  for rom in roms:

    #print(rom)

    print(ds_sensor.read_temp(rom))

  time.sleep(1)
```

#### **Code Explanation**

1.We set the pin to GPIO15 and obtain the temperature in the unit of ℃.  

2\. The Shell window displays the temperature value. Ds\_sensor. Read\_temp (ROM) indicates the temperature value. 

#### **Test Result**

Wire up, power up and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. the shell displays the temperature of the current environment, as shown below. Press “Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/d1e1bcf43e4a7562c4e4f69230c84b47.png)

### Project 35: XHT11 Temperature and Humidity Sensor

![](media/1153b275e0f6c086c9e4225084acf246.png)

#### **Description**

This DHT11 temperature and humidity sensor is a composite sensor which contains a calibrated digital signal output of the temperature and humidity.

DHT11 temperature and humidity sensor uses the acquisition technology  of the digital module and temperature and humidity sensing technology, ensuring high reliability and excellent long-term stability.

It includes a resistive element and a NTC temperature measuring device.

![](media/ac0d6049bc0a5ae8cc515d23b85ecad0.png)

#### **Working Principle**

The communication and synchronization between the single-chip microcomputer and XHT11 adopts the single bus data format. The communication time is about 4ms. The data is divided into fractional part and integer part. 

Operation process: A complete data transmission is 40bit, high bit first out. Data format: 8bit humidity integer data + 8bit humidity decimal data + 8bit temperature integer data + 8bit temperature decimal data + 8bit checksum.

8-bit checksum: 8-bit humidity integer data + 8-bit humidity decimal data + 8-bit temperature integer data + 8-bit temperature decimal data "Add the last 8 bits of the result.

#### **Required Components**

| ![img](media/wps404.jpg) | ![img](media/wps405.png) |              ![img](media/wps406.jpg)               | ![img](media/wps407.png) | ![img](media/wps408.jpg) |
| :----------------------: | :----------------------: | :-------------------------------------------------: | :----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | Keyestudio  XHT11 Temperature and Humidity Sensor*1 |     3P Dupont Wire*1     |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/7e2c1d38e5a419a5df8489869a94d21c.png)

#### **Test Code**

```python
# Import machine, time and dht modules. 
import machine
import time
import dht

#Associate DHT11 with Pin(15).
DHT = dht.DHT11(machine.Pin(15))

# Obtain temperature and humidity data once per second and print them out. 
while True:
    DHT.measure() # Start DHT11 to measure data once.
   # Call the built-in function of DHT to obtain temperature
   # and humidity data and print them in “Shell”.
    print('temperature:',DHT.temperature(),'℃','humidity:',DHT.humidity(),'%')
    time.sleep_ms(1000)
```

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The shell displays the temperature and humidity data of the current environment, as shown below. Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/10e74fe20d6fd681f645449217a508e8.png)

### Project 36: DS1307 Clock Module

![](media/949abbbea3c8d8b36463768a39a07b51.png)

#### **Overview**

This module mainly uses the real-time clock chip DS1307, which is the I2C bus interface chip that has second, minute, hour, day, month, year and other functions as well as leap year automatic adjustment function introduced by DALLAS. It can work independently of CPU, and won‘t’ affected by the CPU main crystal oscillator and capacitance as well as keep accurate time. What‘s more, monthly cumulative error is generally less than 10 seconds.The chip also has a clock protection circuit in case of main power failure and runs on a back-up battery that denies the CPU read and write access. At the same time, it contains automatic switching control circuit of standby power supply, so it can guarantee the accuracy of system clock in case of power failure of main power supply and other bad environment.

Going forward, the DS1307 chip internal integration has a certain capacity, with power failure protection characteristics of static RAM, which can be used to save some key data. 

In the experiment, we use the DS1307 clock module to obtain the system time and print the test results.  

![](media/92b8dc82b0c2887539bd506639cfbfc0.png)

#### **Working Principle**

Serial real-time clock records year, month, day, hour, minute, second and week; AM and PM indicate morning and afternoon respectively; 56 bytes of NVRAM store data; 2-wire serial port; programmable square wave output; power failure detection and automatic switching circuit; battery current is less than 500nA.

Pins description：X1, 32.768kHz crystal terminal 

VBAT:X2：+3V input

SDA：serial data

SCL：serial clock

SQW/OUT：square waves/output drivers

![](media/abdebbfc01cae240e3e81fb188344cbe.png)

#### **Required Components**

| ![img](media/wps410.jpg) | ![img](media/wps411.png) | ![img](media/wps412.jpg) | ![img](media/wps413.png) | ![img](media/wps414.jpg) |
| :----------------------: | :----------------------: | :----------------------: | :----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  |  DS1307 Clock Module*1   |     4P Dupont Wire*1     |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/de4d2418a1b8ed0ae1c466747103a440.png)

#### **Add Library**

Open “Thonny”, click“This computer”→“D:”→“2. ESP32_code_MicroPython”→“lesson 36. DS1307 Real Time Clock”. Select“urtc.py”，right-click and select“Upload to /”，wait for the“urtc.py”to be uploaded to the ESP32.

![](media/54019debbb299ba27d3cf54ce3b00316.png)

#### **Test Code**

```python
from machine import I2C, Pin
from urtc import DS1307 
import utime

i2c = I2C(1,scl = Pin(22),sda = Pin(21),freq = 400000)
rtc = DS1307(i2c)

year = int(input("Year : "))
month = int(input("month (Jan --> 1 , Dec --> 12): "))
date = int(input("date : "))
day = int(input("day (1 --> monday , 2 --> Tuesday ... 0 --> Sunday): "))
hour = int(input("hour (24 Hour format): "))
minute = int(input("minute : "))
second = int(input("second : "))

now = (year,month,date,day,hour,minute,second,0)
rtc.datetime(now)

#(year,month,date,day,hour,minute,second,p1) = rtc.datetime()
while True:
    DateTimeTuple = rtc.datetime()
    print(DateTimeTuple[0], end = '-')
    print(DateTimeTuple[1], end = '-')
    print(DateTimeTuple[2], end = '  ')
    print(DateTimeTuple[4], end = ':')
    print(DateTimeTuple[5], end = ':')
    print(DateTimeTuple[6], end = '  week:')
    print(DateTimeTuple[3])
    utime.sleep(1)
```

#### **Code Explanation**

**rtc.datetime()：**Return a tuple of time. When the program is running, we set the "please input" program, run the code, it will prompt us to input the time and date, after the input is completed, the data will be printed every second.

**DateTimeTuple\[0\]:** save years

**DateTimeTuple\[1\]:** save months

**DateTimeTuple\[2\]**: save days

**DateTimeTuple\[3\]**: save weeks

**Rtc.GetDateTime().Month():** return months

**DateTimeTuple\[4\]:** save hours

**DateTimeTuple\[5\]**: save minutes

**DateTimeTuple\[6\]:** save seconds

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. the shell will display“Year:”. Then we enter year, month,day, hour, minute and second,once complete, printed the data every second, as shown below. Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/db5ed7d9d70655d0d4347aed286c76dd.png)

### Project 37: TM1650 4-Digit Tube Display

![](media/f698ea56391906278b7c8064fca42bb3.jpeg)

#### **Overview**

This module is mainly composed of a 0.36 inch red common anode 4-digit digital tube, and its driver chip is TM1650. When using it, we only need two signal lines to make the single-chip microcomputer control a 4-bitdigit tube, which greatly saves the IO port resources of the control board.

TM1650 is a special circuit for LED (light emitting diode display) drive control. It integrates MCU input and output control digital interface, data latch, LED drivers, keyboard scanning, brightness adjustment and other circuits.

TM1650 has stable performance, reliable quality and strong anti-interference ability. 

It can be applied to the application of long-term continuous working for 24 hours. 

TM1650 uses 2-wire serial transmission protocol for communication (note that this data transmission protocol is not a standard I2C protocol). The chip can drive the digital tube and save MCU pin resources through two pins and MCU communication.

#### **Working Principle**

TM1650 adopts IIC treaty, which uses DIO and CLK buses.

![](media/c7b895791863dfc2663800ce90f61c89.png)

**Data command setting**: 0x48 means that we light up the digital tube, instead of enable the function of key scanning.

![](media/09585b52bed3d4112d59a611c3c3f262.png)

**Command display setting:**

bit\[6:4\]：set the brightness of tube display, and 000 is brightest

bit\[3\]：set to show decimal points

bit\[0\]：start the display of the tube display

#### **Required Components**

| ![img](media/wps415.jpg) | ![img](media/wps416.png) |    ![img](media/wps417.jpg)     | ![img](media/wps418.png) | ![img](media/wps419.jpg) |
| :----------------------: | :----------------------: | :-----------------------------: | :----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | TM16504-Digit Segment Display*1 |     4P Dupont Wire*1     |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/08a0d34d55b5e4215c77fbf8f656c9a9.png)

#### **Test Code**


```python
from machine import Pin
import time

# definitions for TM1650
ADDR_DIS = 0x48  #mode command
ADDR_KEY = 0x49  #read key value command

# definitions for brightness
BRIGHT_DARKEST = 0
BRIGHT_TYPICAL = 2
BRIGHTEST      = 7

on  = 1
off = 0

# number:0~9
NUM = [0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f] 
# DIG = [0x68,0x6a,0x6c,0x6e]
DIG = [0x6e,0x6c,0x6a,0x68]
DOT = [0,0,0,0]

clkPin = 22
dioPin = 21
clk = Pin(clkPin, Pin.OUT)
dio = Pin(dioPin, Pin.OUT)

DisplayCommand = 0

def writeByte(wr_data):
    global clk,dio
    for i in range(8):
        if(wr_data & 0x80 == 0x80):
            dio.value(1)
        else:
            dio.value(0)
        clk.value(0)
        time.sleep(0.0001)
        clk.value(1)
        time.sleep(0.0001)
        clk.value(0)
        wr_data <<= 1
    return

def start():
    global clk,dio
    dio.value(1)
    clk.value(1)
    time.sleep(0.0001)
    dio.value(0)
    return
    
def ack():
    global clk,dio
    dy = 0
    clk.value(0)
    time.sleep(0.0001)
    dio = Pin(dioPin, Pin.IN)
    while(dio.value() == 1):
        time.sleep(0.0001)
        dy += 1
        if(dy>5000):
            break
    clk.value(1)
    time.sleep(0.0001)
    clk.value(0)
    dio = Pin(dioPin, Pin.OUT)
    return 
    
def stop():
    global clk,dio
    dio.value(0)
    clk.value(1)
    time.sleep(0.0001)
    dio.value(1)
    return
    
def displayBit(bit, num):
    global ADDR_DIS
    if(num > 9 and bit > 4):
        return
    start()
    writeByte(ADDR_DIS)
    ack()
    writeByte(DisplayCommand)
    ack()
    stop()
    start()
    writeByte(DIG[bit-1])
    ack()
    if(DOT[bit-1] == 1):
        writeByte(NUM[num] | 0x80)
    else:
        writeByte(NUM[num])
    ack()
    stop()
    return
    
def clearBit(bit):
    if(bit > 4):
        return
    start()
    writeByte(ADDR_DIS)
    ack()
    writeByte(DisplayCommand)
    ack()
    stop()
    start()
    writeByte(DIG[bit-1])
    ack()
    writeByte(0x00)
    ack()
    stop()
    return
def setBrightness(b = BRIGHT_TYPICAL):
    global DisplayCommand,brightness
    DisplayCommand = (DisplayCommand & 0x0f)+(b<<4)
    return

def setMode(segment = 0):
    global DisplayCommand
    DisplayCommand = (DisplayCommand & 0xf7)+(segment<<3)
    return
    
def displayOnOFF(OnOff = 1):
    global DisplayCommand
    DisplayCommand = (DisplayCommand & 0xfe)+OnOff
    return

def displayDot(bit, OnOff):
    if(bit > 4):
        return
    if(OnOff == 1): 
        DOT[bit-1] = 1;
    else:
        DOT[bit-1] = 0;
    return
        
def InitDigitalTube():
    setBrightness(2)
    setMode(0)
    displayOnOFF(1)
    for _ in range(4):
        clearBit(_)
    return

def ShowNum(num): #0~9999
    displayBit(1,num%10)
    if(num < 10):
        clearBit(2)
        clearBit(3)
        clearBit(4)
    if(num > 9 and num < 100):
        displayBit(2,num//10%10)
        clearBit(3)
        clearBit(4)
    if(num > 99 and num < 1000):
        displayBit(2,num//10%10)
        displayBit(3,num//100%10)
        clearBit(4)
    if(num > 999 and num < 10000):
        displayBit(2,num//10%10)
        displayBit(3,num//100%10)
        displayBit(4,num//1000)

InitDigitalTube()

while True:
    #displayDot(1,on)     # on or off, DigitalTube.Display(bit,number); bit=1---4  number=0---9
    for i in range(0,9999):
        ShowNum(i)
        time.sleep(0.01)
```

#### **Code Explanation**

**clkPin = 22、dioPin = 21is pin number**，CLK is connected to GPIO22，DIO is connected to GPIO21. We can set any two pins at random.

**displayBit(bit, num):** show numbers at bit(1\~4) bit num(0\~9)

**clearBit(bit):** clear up bit(1\~4)

**setBrightness():** brightness setting

**displayOnOFF()** 0 means OFF, 1 means ON

**displayDot(bit, OnOff)**shows dots，0 means OFF, 1 means ON

**ShowNum(num):** show integer num，in the range of 0\~9999

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The 4-digit tube display will show numbers from 0 to 99999, an increase of 1 for each 10ms, then start from 0 again. Press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 38: HT16K33\_8X8 Dot Matrix Module

![](media/431b6c4abd63b99219658a03d24de991.jpeg)

#### **Overview**

What is the dot matrix display?

The 8X8 dot matrix is composed of 64 light-emitting diodes, and each light-emitting diode is placed at the intersection of the row line and the column line. When the corresponding row is set to 1 level, and a certain column is set to 0 level, the corresponding diode will light up.

#### **Working Principle**

As the schematic diagram shown, to light up the LED at the first row and column, we only need to set C1 to high level and R1 to low level. To turn on LEDs at the first row, we set R1 to low level and C1-C8 to high level.

16 IO ports are needed, which will highly waste the MCU resources.

Therefore, we designed this module, using the HT16K33 chip to drive an 8\*8 dot matrix, which greatly saves the resources of the single-chip microcomputer.

There are three DIP switches on the module, all of which are set to I2C communication address. The setting method is shown below. A0，A1 and A2 are grounded, that is, the address is 0x70.

![image-20230509161030703](media/image-20230509161030703.png)

#### **Required Components**

| ![img](media/wps420.jpg) | ![img](media/wps421.png) |      ![img](media/wps422.jpg)       | ![img](media/wps423.png) | ![img](media/wps424.jpg) |
| :----------------------: | :----------------------: | :---------------------------------: | :----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | Keyestudio HT16K33_8X8 Dot Matrix*1 |     4P Dupont Wire*1     |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/d3f2f2968ff861d04e909cf330986652.png)

#### **Add Library**

Open“This computer”→“D:”→“2. ESP32_code_MicroPython”→“lesson 38. HT16K33 dot matrix”. Select “ht16k33.py” and “ht16k33matrix.py”，right-click and select “Upload to /”，waiting for the “ht16k33.py” and “ht16k33matrix.py” to be uploaded to the ESP32.

![](media/72d1aef422351dbe8219787119fa7387.png)

![](media/80be0d6353d8cf40a21f05c25bb69c45.png)

#### **Test Code**


```python
# IMPORTS
import utime as time
from machine import I2C, Pin, RTC
from ht16k33matrix import HT16K33Matrix

# CONSTANTS
DELAY = 0.01
PAUSE = 3

# START
if __name__ == '__main__':
    i2c = I2C(scl=Pin(22), sda=Pin(21))
    display = HT16K33Matrix(i2c)
    display.set_brightness(2)

    # Draw a custom icon on the LED
    icon = b"\x00\x66\x00\x00\x18\x42\x3c\x00"
    display.set_icon(icon).draw()
    # Rotate the icon
    display.set_angle(0).draw()
    time.sleep(PAUSE)
```

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The dot matrix displays a“ smile ”pattern. Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 39: RFID Module

![](media/75003b61112e3495f213629e49f26185.jpeg)

#### **Description**

RFIDRFID-RC522 radio frequency module adopts a Philips MFRC522 original chip to design card reading circuit, easy to use and low cost, suitable for equipment development and card reader development and so on.

RFID or Radio Frequency Identification system consists of two main components, a transponder/tag attached to an object to be identified, and a transceiver also known as interrogator/Reader.

In the experiment, the data read by the card swipe module is 4 hexadecimal numbers, and we print these four hexadecimal numbers as strings. For example, we read the data of the IC card below: 237, 247,148,90 and the data read from the keychain is: 76, 9, 107, 110. Different IC cards and different key chains have diverse data. 

#### **Working Principle**

Radio frequency identification, the card reader is composed of a radio frequency module and a high-level magnetic field. The Tag transponder is a sensing device, and this device does not contain a battery. It only contains tiny integrated circuit chips and media for storing data and antennas for receiving and transmitting signals. To read the data in the tag, first put it into the reading range of the card reader. The reader will generate a magnetic field, and because the magnetic energy generates electricity according to Lenz's law, the RFID tag will supply power, thereby activating the device.

![](media/8f1b325813b0fe4f6b0fd1e6f02a9405.png)

#### **Required Components**

| ![img](media/wps425.jpg) | ![img](media/wps426.png) | ![img](media/wps427.jpg) | ![img](media/wps428.png) |
| :----------------------: | :----------------------: | :----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | Keyestudio RFID Module*1 |     4P Dupont Wire*1     |
| ![img](media/wps429.jpg) | ![img](media/wps430.jpg) | ![img](media/wps431.jpg) |                          |
|    Micro USB Cable*1     |          Key*1           |        IC Card*1         |                          |

#### **Wiring Diagram**

![](media/33c691a71bc8a173a6b775b86c2c2f02.png)

#### **Add Library**

Open“Thonny”, click“This computer”→“D:”→“2. ESP32_code_MicroPython”→“lesson 39. RFID RC522”. Select “mfrc522_config.py”, “mfrc522_i2c.py” and “soft_iic.py”, right-click and select “Upload to /”, waiting for the “mfrc522_config.py”, “mfrc522_i2c.py” and “soft_iic.py” to be uploaded to the ESP32.

![](media/cb53fea1ae89f414ff34fa3367fdb69d.png)

![](media/0eea97788faf1e67b3968c55d0ba0974.png)

![](media/d83d90e285a39ada783bf785cec465d1.png)

#### **Test Code**


```python
import machine
import time
from mfrc522_i2c import mfrc522

#i2c config
addr = 0x28
scl = 22
sda = 21
    
rc522 = mfrc522(scl, sda, addr)
rc522.PCD_Init()
rc522.ShowReaderDetails()            # Show details of PCD - MFRC522 Card Reader details

while True:
    if rc522.PICC_IsNewCardPresent():
        #print("Is new card present!")
        if rc522.PICC_ReadCardSerial() == True:
            print("Card UID:")
            print(rc522.uid.uidByte[0 : rc522.uid.size])
    #time.sleep(1)
```

#### **Code Explanation**

**mfrc522\_config.py;** This is a configuration file that defines some parameters and commands

**mfrc522\_i2c.py;** Initialization and read and write functions

**Soft\_iic.py;** It is the bottom-level read and write function of software I2C. We use the IO port to simulate I2C here.

#### **Test Result**

Wire up and power on. Click![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. When we make the IC card and key chain close to the RFID module, the information will be printed out, as shown in the figure below. Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/e962f53434970e05a2136bd3ad67dd45.png)

Note: Different **RFID-RC522** door cards and key chains have diverse values.

## Comprehensive Experiments

The previous projects are related to single sensors or modules. In the following part, we will combine various sensors and modules to create some comprehensive experiments to perform special functions.

### Project 40: Button-controlled LED

![](media/50740b22d16151d490b8494b0bff4f6e.jpeg)

#### **Overview**

In this lesson, we will make an extension experiment with a button and an LED. When the button is pressed and low levels are output, the LED will light up; when the button is released, the LED will go off. Then we can control a module with another module.

#### **Required Components**

|  ![img](media/wps435.jpg)   | ![img](media/wps436.png) |    ![img](media/wps437.jpg)    |
| :-------------------------: | :----------------------: | :----------------------------: |
|        ESP32 Board*1        | ESP32 Expansion Board*1  | Keyestudio Purple LED Module*1 |
|  ![img](media/wps438.jpg)   | ![img](media/wps439.png) |    ![img](media/wps440.jpg)    |
| Keyestudio  Button Module*1 |     3P Dupont Wire*2     |       Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/378de9cb95275a6a1dec9adbf2f15eaa.png)

#### **Test Code**


```python
from machine import Pin
import time

led = Pin(4, Pin.OUT) # create LED object from Pin 4,Set Pin 4 to output                   
button = Pin(15, Pin.IN, Pin.PULL_UP) #Create button object from Pin15,Set GP15 to input

#Customize a function and name it reverseGPIO(),which reverses the output level of the LED
def reverseGPIO():
    if led.value():
        led.value(0)     #Set led turn off
    else:
        led.value(1)     #Set led turn on

try:
    while True:
        if not button.value():
            time.sleep_ms(20)
            if not button.value():
                reverseGPIO()
                while not button.value():
                    time.sleep_ms(20)
except:
    pass
```

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. When the button is pressed, the LED will light up; when pressed again, the LED will go off., cycle this operation. Press“Ctrl+C”or “Stop/Restart backend”to exit the program.

### Project 41: Alarm Experiment

![](media/6db3cb7d3a91e700a3b651c1f0edb7a5.jpeg)

#### **Overview**

In the previous experiment, we control an output module though an input module. In this lesson, we will make an experiment that the active buzzer will emit sounds once an obstacle appears.

#### **Required Components**

|  ![img](media/wps444.jpg)  | ![img](media/wps445.png) |        ![img](media/wps446.jpg)        |
| :------------------------: | :----------------------: | :------------------------------------: |
|       ESP32 Board*1        | ESP32 Expansion Board*1  | Keyestudio Obstacle Avoidance Sensor*1 |
|  ![img](media/wps447.jpg)  | ![img](media/wps448.png) |        ![img](media/wps449.jpg)        |
| Keyestudio Active Buzzer*1 |     3P Dupont Wire*2     |           Micro USB Cable*1            |

#### **Wiring Diagram**

![](media/e37efdec9676d47eaf8dabd2da41759a.png)

#### **Test Code**

```python
from machine import Pin
import time

buzzer = Pin(4, Pin.OUT)
sensor = Pin(15, Pin.IN)
while True:
    buzzer.value(not(sensor.value()))
    time.sleep(0.01)
```

#### **Code Explanation**

When an obstacle is detected, **sensor.value()** will return a low level signal. So when an obstacle is detected, the GPIO4 connected to the buzzer pin will output a high level signal, the buzzer will emit sounds.

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The active buzzer will emit sound if detecting obstacles; otherwise, it won’t emit sound. Press “Ctrl+C” or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend” to exit the program.

### Project 42: Intrusion Detection

![](media/b7828b9e5ee615a151567e20d35db90f.png)

#### **Description**

In this experiment, we use a PIR motion sensor to control an active buzzer to emit sounds and the onboard LED to flash rapidly.

#### **Required Components**

|    ![img](media/wps450.jpg)    | ![img](media/wps451.png) |    ![img](media/wps452.jpg)    |  ![img](media/wps453.jpg)  |
| :----------------------------: | :----------------------: | :----------------------------: | :------------------------: |
|         ESP32 Board*1          | ESP32 Expansion Board*1  | Keyestudio PIR Motion Sensor*1 | Keyestudio Active Buzzer*1 |
|    ![img](media/wps454.jpg)    | ![img](media/wps455.png) |    ![img](media/wps456.jpg)    |                            |
| Keyestudio Purple LED Module*1 |     3P Dupont Wire*3     |       Micro USB Cable*1        |                            |

#### **Wiring Diagram**

![](media/07ded8ae2b9b12d7d399422cae6b8c5a.png)

#### **Test Code**

```python
# Import Pin and time modules.
from machine import Pin 
import time 

# Define the pins of the Human infrared sensor,led and Active buzzer. 
sensor_pir = Pin(15, Pin.IN)
led = Pin(22, Pin.OUT)
buzzer = Pin(4, Pin.OUT)

while True: 
      if sensor_pir.value():
          print("Warning! Intrusion detected！")
          buzzer.value(1)
          led.value(1)
          time.sleep(0.2)
          buzzer.value(0)
          led.value(0)
          time.sleep(0.2)         
      else:
          buzzer.value(0)
          led.value(0)
```

#### **Test Result**

Wire up and power on. Click![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. If the PIR sensor detects someone moving nearby, the buzzer will emit an alarm , and the LED will flash continuously. At the same time, the“shell” will diaplay “Warning\!Intrusion detected\!”Press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/8d9889d04e7080f918446cc8a23d05e8.png)

### Project 43: Extinguishing Robot

![](media/a3ccd8168b26f2a183fa9feda1b015f3.jpeg)

#### **Description**

Today we will use Arduino simulation to build an extinguishing robot that will automatically sense the fire and start the fan. In this project we will learn how to build a very simple robot using ESP32, (detecting flames with a flame sensor, blowing out candles with a fan) can teach us basic concepts about robotics. Once you understand the basics below, you can build more complex robots.

#### **Required Components**

|  ![img](media/wps459.jpg)  | ![img](media/wps460.png)  | ![img](media/wps461.jpg) |
| :------------------------: | :-----------------------: | :----------------------: |
|       ESP32 Board*1        |  ESP32 Expansion Board*1  |  Keyestudio 130 Motor*1  |
|  ![img](media/wps462.png)  | ![img](media/wps463.png)  | ![img](media/wps464.jpg) |
|      3P Dupont Wire*1      |     4P Dupont Wire*1      |    Micro USB Cable*1     |
|  ![img](media/wps465.jpg)  | ![img](media/wps466.jpg)  | ![img](media/wps467.png) |
| AA Battery(not included)*6 | Keyestudio Flame Sensor*1 |  6 AA Battery Holder*1   |

#### **Wiring Diagram**

![](media/68f8fee9c39dad76e1eb3e783ddc1c37.png)

#### **Test Code**


```python
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
```

#### **Code Explanation**

In the code, we set the threshold value to 3000. When the ADC value detected by the flame sensor is lower than the threshold value, the fan will be automatically turned on; otherwise, it will be turned off. For the driving method of the fan, please refer to the 130 Motor.

#### **Test Result**

Wire up, power on and turn the DIP switch to the ON end, click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The shell prints the flame value. When this value is less than 3000, the fan will work to blow out the fire. Basically, the flame value can be set by yourself. Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/8f2627aa51c2f1620c4f2b9b6f3abf4c.png)

### Project 44: Rotary Encoder control RGB

![](media/c6b4f1cedef06ed68d1c2e5ccf5c17d2.jpeg)

#### **Introduction**

In this lesson, we will control the LED on the RGB module to show different colors through a rotary encoder.

When designing the code, we need to divide the obtained values by 3 to get the remainders. The remainder is 0 and the LED will become red. The remainder is 1, the LED will become green. The remainder is 2, the LED will turn blue.

#### **Required Components**

| ![img](media/wps468.jpg) | ![img](media/wps469.png) |       ![img](media/wps470.jpg)        |     ![img](media/wps471.jpg)      |
| :----------------------: | :----------------------: | :-----------------------------------: | :-------------------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | KeyestudioCommon Cathode RGB Module*1 | KeyestudioRotary Encoder Module*1 |
| ![img](media/wps472.jpg) | ![img](media/wps473.png) |       ![img](media/wps474.jpg)        |                                   |
|     5P Dupont Wire*1     |     4P Dupont Wire*1     |           Micro USB Cable*1           |                                   |

#### **Wiring Diagram**

![](media/c88ef3fa9019777e0697e242d0b41c4c.png)

#### **Add Library**

Open“Thonny”, click “This computer”→“D:”→“2. ESP32\_code\_MicroPython”→”lesson 44. Encoder control RGB”. Select “rotary.py” and “rotary\_irq\_rp2.py”, right-click and select “Upload to /”, waiting for the “rotary.py” and “rotary\_irq\_rp2.py” to be uploaded to the ESP32.

![](media/d318fb0e39f0aa969fd9cfc398223900.png)

![](media/19520bc6a235fb1da3355b8acbd6f11c.png)

#### **Test Code**

```python
import time
from rotary_irq_rp2 import RotaryIRQ
from machine import Pin, PWM

pwm_r = PWM(Pin(0)) 
pwm_g = PWM(Pin(2))
pwm_b = PWM(Pin(15))

pwm_r.freq(1000)
pwm_g.freq(1000)
pwm_b.freq(1000)

def light(red, green, blue):
    pwm_r.duty(red)
    pwm_g.duty(green)
    pwm_b.duty(blue)

SW=Pin(27,Pin.IN,Pin.PULL_UP)
r = RotaryIRQ(pin_num_clk=12,
              pin_num_dt=14,
              min_val=0,
              reverse=False,
              range_mode=RotaryIRQ.RANGE_UNBOUNDED)

while True:
    val = r.value()
    print(val%3)
    if val%3 == 0:
        light(4950, 0, 0)
    elif val%3 == 1:
        light(0, 4950, 0)
    elif val%3 == 2:
        light(0, 0, 4950)
    time.sleep(0.1)
```

#### **Code Explanation**

In the experiment, we set the val to the remainder of Encoder\_Count divided by 3. Encoder\_Count is the value of the encoder. Then we can set pin GPIO0 (red), GPIO2 (green) and GPIO15 (blue) according to remainders.

Colors of the LEDs can be controlled by remainders.

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. Rotate the knob of the rotary encoder to display the reminders, which can control colors of LED(red green blue). Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend” to exit the program.

![](media/6894e2afd1eb7e150457048e0174adf8.png)

### Project 45: Rotary Potentiometer

![](media/f71165ab140ae6b2aac093dc75785c96.jpeg)

#### **Introduction**

In the previous courses, we did experiments of breathing light and controlling LED with button. In this course, we do these two experiments by controlling the brightness of LED through an adjustable potentiometer. The brightness of LED is controlled by PWM values, and the range of analog values is 0 to 4095 and the PWM value range is 0-255.

After the code is set successfully, we can control the brightness of the LED on the module by rotating the potentiometer.

#### **Required Components**

|      ![img](media/wps478.jpg)      | ![img](media/wps479.png) |    ![img](media/wps480.jpg)    |
| :--------------------------------: | :----------------------: | :----------------------------: |
|           ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio Purple LED Module*1 |
|      ![img](media/wps481.jpg)      | ![img](media/wps482.png) |    ![img](media/wps483.jpg)    |
| Keyestudio  Rotary Potentiometer*1 |     3P Dupont Wire*2     |       Micro USB Cable*1        |

#### **Wiring Diagram**

![](media/7f24723673e622d23fbe0a3cdbd21d69.png)

#### **Test Code**


```python
from machine import Pin,PWM,ADC
import time

pwm =PWM(Pin(15,Pin.OUT),1000)
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_10BIT)

try:
    while True:
        adcValue=adc.read()
        pwm.duty(adcValue)
        print(adc.read())
        time.sleep_ms(100)
except:
    pwm.deinit()
```

#### **Code Explanation**

It is easy to control the brightness of the LED light by a potentiometer. Here we can find that MicroPython unifies the value range of the ADC between 0 and 1023, and assigns values directly, which is simple and convenient. 

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. Rotating the potentiometer on the module can adjust the brightness of the LED on the LED module. Press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 46: Smart Windows

![](media/fd7384d737b0393e91d42523f4d65b07.jpeg)

#### **Description**

In life, we can see all kinds of smart products, such as smart home. Smart homes include smart curtains, smart windows, smart TVs, smart lights, and more. In this experiment, we use a steam sensor to detect rainwater, and then achieve the effect of closing and opening the window by a servo.

#### **Required Components**

| ![img](media/wps487.jpg) | ![img](media/wps488.png) |  ![img](media/wps489.jpg)  |
| :----------------------: | :----------------------: | :------------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | Keyestudio  Steam Sensor*1 |
| ![img](media/wps490.jpg) | ![img](media/wps491.png) |  ![img](media/wps492.jpg)  |
|         Servo*1          |     3P Dupont Wire*1     |     Micro USB Cable*1      |

#### **Wiring Diagram**

![](media/8683e9990285f9eef82368857cb5b6a6.png)

#### **Test Code**


```python
# Import Pin and ADC modules.
from machine import ADC,Pin,PWM
import time

# Turn on and configure the ADC with the range of 0-3.3V 
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

pwm = PWM(Pin(15))#Steering pin connected to GP15
pwm.freq(50)#20ms period, so the frequency is 50Hz
'''
Duty cycle corresponding to the Angle
0°----2.5%----25
45°----5%----51.2
90°----7.5%----77
135°----10%----102.4
180°----12.5%----128
In consideration of the error, the duty cycle is set at 1000~9000, which can smoothly rotate 0~180 degrees
'''
angle_0 = 25
angle_90 = 77
angle_180 = 128
    
while True:
    adcVal=adc.read()
    print(adcVal)
    if adcVal > 2000:
        pwm.duty(angle_0)
        time.sleep(0.5)
    else:
        pwm.duty(angle_180)
        time.sleep(0.5)
```

#### **Code Explanation**

We can control a servo to rotate by a threshold.

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. When the sensor detects a certain amount of water, the servo rotates to achieve the effect of closing or opening windows. Press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 47: Sound Activated Light

![](media/f3ddb58e83a92a888d3e1d66f7456170.png)

#### **Introduction**

In this lesson, we will make a smart sound activated light using a sound sensor and an LED module. When we make a sound, the light will automatically turn on; when there is no sound, the lights will automatically turn off. How it works? Because the sound-controlled light is equipped with a sound sensor, and this sensor converts the intensity of external sound into a corresponding value. Then set a threshold, when the threshold is exceeded, the light will turn on, and when it is not exceeded, the light will go out.

#### **Required Components**

|    ![img](media/wps496.jpg)     | ![img](media/wps497.png) |  ![img](media/wps498.jpg)  |
| :-----------------------------: | :----------------------: | :------------------------: |
|          ESP32 Board*1          | ESP32 Expansion Board*1  | Keyestudio  Sound Sensor*1 |
|    ![img](media/wps499.jpg)     | ![img](media/wps500.png) |  ![img](media/wps501.jpg)  |
| Keyestudio  Purple LED Module*1 |     3P Dupont Wire*2     |     Micro USB Cable*1      |

#### **Wiring Diagram**

![](media/e54db9c861847ce0145accb574467c95.png)

#### **Test Code**


```python
from machine import ADC, Pin
import time
 
# Turn on and configure the ADC with the range of 0-3.3V 
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

led = Pin(15,Pin.OUT)

while True:
    adcVal=adc.read()
    print(adcVal)
    if adcVal > 600:
        led.value(1)
        time.sleep(3)
    else:
        led.value(0)
    time.sleep(0.1)
```

#### **Code Explanation**

We set the ADC threshold value to 600. If more than 600, LED will be on 3s; on the contrary, it will be off.

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. The shell monitor displays the corresponding volume ADC value. When the analog value of sound is greater than 600, the LED on the LED module will light up, otherwise it will go off. Press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/ea65cb86fc3c75e71eabfb1f2e16fb1e.png)

### Project 48: Fire Alarm

![](media/e6971103aaa858036b51f3165e0ccb32.jpeg)

#### **Description**

In this experiment, we will make a fire alarm system. Just use a flame sensor to control an active buzzer to emit sounds.

#### **Required Components**

| ![img](media/wps502.jpg) | ![img](media/wps503.png) |  ![img](media/wps504.jpg)  | ![img](media/wps505.jpg)  |
| :----------------------: | :----------------------: | :------------------------: | :-----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | Keyestudio Active Buzzer*1 | keyestudio Flame Sensor*1 |
| ![img](media/wps506.jpg) | ![img](media/wps507.png) |  ![img](media/wps508.png)  |                           |
|    Micro USB Cable*1     |     3P Dupont Wire*1     |      4P Dupont Wire*1      |                           |

#### **Wiring Diagram**

![](media/2c25672935b822ed775e665e05f72980.png)

#### **Test Code**


```python
from machine import Pin
import time

buzzer = Pin(15, Pin.OUT)
sensor = Pin(4, Pin.IN)

while True:
    Val = sensor.value()
    print(Val)
    if Val == 0:
        buzzer.value(1)
    else:
        buzzer.value(0)
    time.sleep(0.5)
```

#### **Code Explanation**

This flame sensor uses an analog pin and a digital pin. When a flame is detected, the digital pin outputs a low level. In this experiment we will use the digital port.

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. When the sensor detects the flame, the external active buzzer will emit sounds, otherwise the active buzzer will not emit sounds. Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 49: Smoke Alarm

![](media/a1f72c7aa7fd3609401a1f1176b426ec.jpeg)

#### **Description**

In this experiment, we will make a smoke alarm by a TM16504-Digit segment module, a gas sensor and an active buzzer.

#### **Required Components**

|   ![img](media/wps509.jpg)    | ![img](media/wps510.png) |  ![img](media/wps511.jpg)  |         ![img](media/wps512.jpg)          |
| :---------------------------: | :----------------------: | :------------------------: | :---------------------------------------: |
|         ESP32 Board*1         | ESP32 Expansion Board*1  | Keyestudio Active Buzzer*1 | Keyestudio TM16504-Digit Segment Module*1 |
|   ![img](media/wps513.jpg)    | ![img](media/wps514.png) |  ![img](media/wps515.png)  |         ![img](media/wps516.jpg)          |
| keyestudio Analog Gas Senso*1 |     4P Dupont Wire*2     |      4P Dupont Wire*2      |             Micro USB Cable*1             |

#### **Wiring Diagram**

![](media/ae8b397c9acaba3e10da3e2028797197.png)

#### **Test Code**

```python
# Import Pin and ADC modules.
from machine import ADC,Pin
import time

# Turn on and configure the ADC with the range of 0-3.3V
adc=ADC(Pin(34))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

buzzer = Pin(15, Pin.OUT)
# definitions for TM1650
ADDR_DIS = 0x48  #mode command
ADDR_KEY = 0x49  #read key value command

# definitions for brightness
BRIGHT_DARKEST = 0
BRIGHT_TYPICAL = 2
BRIGHTEST      = 7

on  = 1
off = 0

# number:0~9
NUM = [0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f] 
# DIG = [0x68,0x6a,0x6c,0x6e]
DIG = [0x6e,0x6c,0x6a,0x68]
DOT = [0,0,0,0]

clkPin = 22
dioPin = 21
clk = Pin(clkPin, Pin.OUT)
dio = Pin(dioPin, Pin.OUT)

DisplayCommand = 0

def writeByte(wr_data):
    global clk,dio
    for i in range(8):
        if(wr_data & 0x80 == 0x80):
            dio.value(1)
        else:
            dio.value(0)
        clk.value(0)
        time.sleep(0.0001)
        clk.value(1)
        time.sleep(0.0001)
        clk.value(0)
        wr_data <<= 1
    return

def start():
    global clk,dio
    dio.value(1)
    clk.value(1)
    time.sleep(0.0001)
    dio.value(0)
    return
    
def ack():
    global clk,dio
    dy = 0
    clk.value(0)
    time.sleep(0.0001)
    dio = Pin(dioPin, Pin.IN)
    while(dio.value() == 1):
        time.sleep(0.0001)
        dy += 1
        if(dy>5000):
            break
    clk.value(1)
    time.sleep(0.0001)
    clk.value(0)
    dio = Pin(dioPin, Pin.OUT)
    return
    
def stop():
    global clk,dio
    dio.value(0)
    clk.value(1)
    time.sleep(0.0001)
    dio.value(1)
    return
    
def displayBit(bit, num):
    global ADDR_DIS
    if(num > 9 and bit > 4):
        return
    start()
    writeByte(ADDR_DIS)
    ack()
    writeByte(DisplayCommand)
    ack()
    stop()
    start()
    writeByte(DIG[bit-1])
    ack()
    if(DOT[bit-1] == 1):
        writeByte(NUM[num] | 0x80)
    else:
        writeByte(NUM[num])
    ack()
    stop()
    return
    
def clearBit(bit):
    if(bit > 4):
        return
    start()
    writeByte(ADDR_DIS)
    ack()
    writeByte(DisplayCommand)
    ack()
    stop()
    start()
    writeByte(DIG[bit-1])
    ack()
    writeByte(0x00)
    ack()
    stop()
    return
def setBrightness(b = BRIGHT_TYPICAL):
    global DisplayCommand,brightness
    DisplayCommand = (DisplayCommand & 0x0f)+(b<<4)
    return

def setMode(segment = 0):
    global DisplayCommand
    DisplayCommand = (DisplayCommand & 0xf7)+(segment<<3)
    return
    
def displayOnOFF(OnOff = 1):
    global DisplayCommand
    DisplayCommand = (DisplayCommand & 0xfe)+OnOff
    return

def displayDot(bit, OnOff):
    if(bit > 4):
        return
    if(OnOff == 1): 
        DOT[bit-1] = 1;
    else:
        DOT[bit-1] = 0;
    return
        
def InitDigitalTube():
    setBrightness(2)
    setMode(0)
    displayOnOFF(1)
    for _ in range(4):
        clearBit(_)
    return

def ShowNum(num): #0~9999
    displayBit(1,num%10)
    if(num < 10):
        clearBit(2)
        clearBit(3)
        clearBit(4)
    if(num > 9 and num < 100):
        displayBit(2,num//10%10)
        clearBit(3)
        clearBit(4)
    if(num > 99 and num < 1000):
        displayBit(2,num//10%10)
        displayBit(3,num//100%10)
        clearBit(4)
    if(num > 999 and num < 10000):
        displayBit(2,num//10%10)
        displayBit(3,num//100%10)
        displayBit(4,num//1000)

InitDigitalTube()

while True:
    adcVal=adc.read()
    print(adcVal)
    ShowNum(adcVal)
    if adcVal > 1000:
        buzzer.value(1)
    else:
        buzzer.value(0)
    time.sleep(0.1)
```

#### **Code Explanation**

Define an integer variable adcVal to store the ADC value of the smoke sensor, and then we display the analog value in the four-digit digital tube, and then set a threshold, and when the analog value is equal to the threshold value, the buzzer will beep. 

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. When the concentration of combustible gas exceeds the threshold value, the active buzzer module will give an alarm, and the four-digit digital tube will display the concentration value. Press“Ctrl+C”or click![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 50: Ultrasonic Radar

![](media/19a7c30e24f0ec39da94912c5535b791.png)

#### **Description**

![](media/38037219a4908755dbedc422be1ab61b.jpeg)

We know that bats use echoes to determine the direction and the location of their preys. In real life, sonar is used to detect sounds in the water. Since the attenuation rate of electromagnetic waves in water is very high, it cannot be used to detect signals, however, the attenuation rate of sound waves in the water is much smaller, so sound waves are most commonly used underwater for observation and measurement.

In this experiment, we will use a speaker module, an RGB module and a 4-digit tube display to make a device for detection through ultrasonic.

#### **Required Components**

|      ![img](media/wps527.jpg)       | ![img](media/wps528.png) |        ![img](media/wps529.jpg)        |      ![img](media/wps530.jpg)      |        ![img](media/wps531.jpg)        |
| :---------------------------------: | :----------------------: | :------------------------------------: | :--------------------------------: | :------------------------------------: |
|            ESP32 Board*1            | ESP32 Expansion Board*1  | Keyestudio HC-SR04 Ultrasonic Sensor*1 | Keyestudio 8002b Power Amplifier*1 | KeyestudioCommon Cathode RGB Module *1 |
|      ![img](media/wps532.jpg)       | ![img](media/wps533.png) |        ![img](media/wps534.png)        |      ![img](media/wps535.jpg)      |                                        |
| Keyestudio TM1650 4-Digit Display*1 |     4P Dupont Wire*3     |            3P Dupont Wire*1            |         Micro USB Cable*1          |                                        |

#### **Wiring Diagram**

![](media/3d6e86b75df96354e05447244d2fee68.png)

#### **Test Code**

```python
from machine import Pin, PWM
import utime
 
# definitions for TM1650
ADDR_DIS = 0x48  #mode command
ADDR_KEY = 0x49  #read key value command

# definitions for brightness
BRIGHT_DARKEST = 0
BRIGHT_TYPICAL = 2
BRIGHTEST      = 7

on  = 1
off = 0

# number:0~9
NUM = [0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f] 
# DIG = [0x68,0x6a,0x6c,0x6e]
DIG = [0x6e,0x6c,0x6a,0x68]
DOT = [0,0,0,0]

clkPin = 22
dioPin = 21
clk = Pin(clkPin, Pin.OUT)
dio = Pin(dioPin, Pin.OUT)

DisplayCommand = 0

def writeByte(wr_data):
    global clk,dio
    for i in range(8):
        if(wr_data & 0x80 == 0x80):
            dio.value(1)
        else:
            dio.value(0)
        clk.value(0)
        utime.sleep(0.0001)
        clk.value(1)
        utime.sleep(0.0001)
        clk.value(0)
        wr_data <<= 1
    return

def start():
    global clk,dio
    dio.value(1)
    clk.value(1)
    utime.sleep(0.0001)
    dio.value(0)
    return
    
def ack():
    global clk,dio
    dy = 0
    clk.value(0)
    utime.sleep(0.0001)
    dio = Pin(dioPin, Pin.IN)
    while(dio.value() == 1):
        utime.sleep(0.0001)
        dy += 1
        if(dy>5000):
            break
    clk.value(1)
    utime.sleep(0.0001)
    clk.value(0)
    dio = Pin(dioPin, Pin.OUT)
    return
    
def stop():
    global clk,dio
    dio.value(0)
    clk.value(1)
    utime.sleep(0.0001)
    dio.value(1)
    return
    
def displayBit(bit, num):
    global ADDR_DIS
    if(num > 9 and bit > 4):
        return
    start()
    writeByte(ADDR_DIS)
    ack()
    writeByte(DisplayCommand)
    ack()
    stop()
    start()
    writeByte(DIG[bit-1])
    ack()
    if(DOT[bit-1] == 1):
        writeByte(NUM[num] | 0x80)
    else:
        writeByte(NUM[num])
    ack()
    stop()
    return
    
def clearBit(bit):
    if(bit > 4):
        return
    start()
    writeByte(ADDR_DIS)
    ack()
    writeByte(DisplayCommand)
    ack()
    stop()
    start()
    writeByte(DIG[bit-1])
    ack()
    writeByte(0x00)
    ack()
    stop()
    return
def setBrightness(b = BRIGHT_TYPICAL):
    global DisplayCommand,brightness
    DisplayCommand = (DisplayCommand & 0x0f)+(b<<4)
    return

def setMode(segment = 0):
    global DisplayCommand
    DisplayCommand = (DisplayCommand & 0xf7)+(segment<<3)
    return
    
def displayOnOFF(OnOff = 1):
    global DisplayCommand
    DisplayCommand = (DisplayCommand & 0xfe)+OnOff
    return

def displayDot(bit, OnOff):
    if(bit > 4):
        return
    if(OnOff == 1): 
        DOT[bit-1] = 1;
    else:
        DOT[bit-1] = 0;
    return
        
def InitDigitalTube():
    setBrightness(2)
    setMode(0)
    displayOnOFF(1)
    for _ in range(4):
        clearBit(_)
    return

def ShowNum(num): #0~9999
    displayBit(1,num%10)
    if(num < 10):
        clearBit(2)
        clearBit(3)
        clearBit(4)
    if(num > 9 and num < 100):
        displayBit(2,num//10%10)
        clearBit(3)
        clearBit(4)
    if(num > 99 and num < 1000):
        displayBit(2,num//10%10)
        displayBit(3,num//100%10)
        clearBit(4)
    if(num > 999 and num < 10000):
        displayBit(2,num//10%10)
        displayBit(3,num//100%10)
        displayBit(4,num//1000)

pwm_r = PWM(Pin(0)) 
pwm_g = PWM(Pin(2))
pwm_b = PWM(Pin(15))

pwm_r.freq(1000)
pwm_g.freq(1000)
pwm_b.freq(1000)

def light(red, green, blue):
    pwm_r.duty(red)
    pwm_g.duty(green)
    pwm_b.duty(blue)

# Ultrasonic ranging, unit: cm
def getDistance(trigger, echo):
    # Generates a 10us square wave
    trigger.value(0)   #A short low level is given beforehand to ensure a clean high pulse:
    utime.sleep_us(2)
    trigger.value(1)
    utime.sleep_us(10)#After pulling high, wait 10 microseconds and immediately set it to low
    trigger.value(0)
    
    while echo.value() == 0: #Establish a while loop to detect whether the echo pin value is 0 and record the time at that time
        start = utime.ticks_us()
    while echo.value() == 1: #Establish a while loop to check whether the echo pin value is 1 and record the time at that time
        end = utime.ticks_us()
    d = (end - start) * 0.0343 / 2 #The travel time of the sound wave x the speed of sound (343.2 m/s, 0.0343 cm/microsecond), and the distance back and forth divided by 2.
    return d

# set the pin
trigger = Pin(13, Pin.OUT)
echo = Pin(14, Pin.IN)

buzzer = PWM(Pin(18))
def playtone(frequency):
    buzzer.duty(1000)
    buzzer.freq(frequency)

def bequiet():
    buzzer.duty(0)
    
# main program
InitDigitalTube()
while True:
    distance = int(getDistance(trigger, echo))
    ShowNum(distance)
    if distance <= 10:
        playtone(880)
        utime.sleep(0.1)
        bequiet()
        light(1023, 0, 0)
    elif distance <= 20:
        playtone(532)
        utime.sleep(0.2)
        bequiet()
        light(0, 0, 1023)
    else:
        light(0, 1023, 0)
```

#### **Code Explanation**

We set sound frequency and light color by adjusting different distance range.

We can adjust the distance range in the code.

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. When the ultrasonic sensor detects different distances, the buzzer will produce different frequencies of sound, the RGB will show different colors, and the measured distances will be displayed on the 4-digit tube display. Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 51: IR Remote Control

![](media/6e823de7db355fde0bc5fcb7c1cdc705.jpeg)

#### **Introduction**

In the previous experiments, we learned to turn on or turn off the LED, adjust the brightness of a light through PWM, and how to use the infrared receiver module. So in this experiment, we use an infrared remote control to control an LED module.

When we receive a value, we set the PWM value by the corresponding button value, thus you can adjust the brightness. Control the LED to turn on or turn off is in the same way. If we want to use the same button to control the LED to turn on or turn off, we can achieve it through the code.

#### **Required Components**

| ![img](media/wps536.jpg) | ![img](media/wps537.png) |    ![img](media/wps538.jpg)    | ![img](media/wps539.jpg) |
| :----------------------: | :----------------------: | :----------------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  | Keyestudio Purple LED Module*1 | Keyestudio IR Receiver*1 |
| ![img](media/wps540.jpg) | ![img](media/wps541.jpg) |    ![img](media/wps542.png)    |                          |
|    Micro USB Cable*1     |   IR Remote Control*1    |        3P Dupont Wire*2        |                          |

#### **Wiring Diagram**

![](media/e00f371661e0fa08c98e84d3d22a110c.png)

#### **Test Code**


```python
import time
from machine import Pin

led = Pin(4, Pin.OUT)
ird = Pin(15,Pin.IN)

act = {"1": "LLLLLLLLHHHHHHHHLHHLHLLLHLLHLHHH","2": "LLLLLLLLHHHHHHHHHLLHHLLLLHHLLHHH","3": "LLLLLLLLHHHHHHHHHLHHLLLLLHLLHHHH",
       "4": "LLLLLLLLHHHHHHHHLLHHLLLLHHLLHHHH","5": "LLLLLLLLHHHHHHHHLLLHHLLLHHHLLHHH","6": "LLLLLLLLHHHHHHHHLHHHHLHLHLLLLHLH",
       "7": "LLLLLLLLHHHHHHHHLLLHLLLLHHHLHHHH","8": "LLLLLLLLHHHHHHHHLLHHHLLLHHLLLHHH","9": "LLLLLLLLHHHHHHHHLHLHHLHLHLHLLHLH",
       "0": "LLLLLLLLHHHHHHHHLHLLHLHLHLHHLHLH","Up": "LLLLLLLLHHHHHHHHLHHLLLHLHLLHHHLH","Down": "LLLLLLLLHHHHHHHHHLHLHLLLLHLHLHHH",
       "Left": "LLLLLLLLHHHHHHHHLLHLLLHLHHLHHHLH","Right": "LLLLLLLLHHHHHHHHHHLLLLHLLLHHHHLH","Ok": "LLLLLLLLHHHHHHHHLLLLLLHLHHHHHHLH",
       "*": "LLLLLLLLHHHHHHHHLHLLLLHLHLHHHHLH","#": "LLLLLLLLHHHHHHHHLHLHLLHLHLHLHHLH"}

def read_ircode(ird):
    wait = 1
    complete = 0
    seq0 = []
    seq1 = []

    while wait == 1:
        if ird.value() == 0:
            wait = 0
    while wait == 0 and complete == 0:
        start = time.ticks_us()
        while ird.value() == 0:
            ms1 = time.ticks_us()
        diff = time.ticks_diff(ms1,start)
        seq0.append(diff)
        while ird.value() == 1 and complete == 0:
            ms2 = time.ticks_us()
            diff = time.ticks_diff(ms2,ms1)
            if diff > 10000:
                complete = 1
        seq1.append(diff)

    code = ""
    for val in seq1:
        if val < 2000:
            if val < 700:
                code += "L"
            else:
                code += "H"
    # print(code)
    command = ""
    for k,v in act.items():
        if code == v:
            command = k
    if command == "":
        command = code
    return command

flag = False
while True:
#     global flag
    command = read_ircode(ird)
    print(command, end = "  ")
    print(flag, end = "  ")
    if command == "Ok":
        if flag == True:
            led.value(1)
            flag = False
            print("led on")
        else:
            led.value(0)
            flag = True
            print("led off")
    time.sleep(0.1)
```

#### **Code Explanation**

We define a boolean variable. There are two boolean variables: true (true) or false (false).

When we press the OK button, the value of infrared reception is OK. At this time, we need to set a boolean variable flag. When the flag is true (true), the LED is turned on, and when it is false (false), the LED is turned off and turned on. After the LED is on and set it to false. We press the OK key, the LED will be off.

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. Press the OK button of the remote, the LED will be on; press it again, the LED will be off.

Press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

![](media/ad0be693b3f956103a6fe8c58c3707d6.png)

### Project 52: Heat Dissipation Device

![](media/24a7a2d97a50c2f3fc4ab893d3aee394.jpeg)

#### **Description**

We will use a temperature sensor and some modules to make a smart cooling device in this experiment. When the ambient temperature is higher than a certain value, the motor is turned on, thereby reducing the ambient temperature and achieving the heat dissipation effect. Then display the temperature value in the four-digit segment display.

#### **Required Components**

|       ![img](media/wps543.jpg)        |  ![img](media/wps544.png)   | ![img](media/wps545.jpg) |    ![img](media/wps546.jpg)     |
| :-----------------------------------: | :-------------------------: | :----------------------: | :-----------------------------: |
|             ESP32 Board*1             |   ESP32 Expansion Board*1   |  Keyestudio 130 Motor*1  | TM16504-Digit Segment Display*1 |
|       ![img](media/wps547.jpg)        |  ![img](media/wps548.png)   | ![img](media/wps549.png) |    ![img](media/wps550.jpg)     |
| Keyestudio 18B20 Temperature Sensor*1 |      3P Dupont Wire*1       |     4P Dupont Wire*2     |        Micro USB Cable*1        |
|       ![img](media/wps551.png)        |  ![img](media/wps552.jpg)   |                          |                                 |
|         6 AA Battery Holder*1         | AA Battery (not included)*6 |                          |                                 |

#### **Wiring Diagram**

![](media/ab795f487c4b10fe6ff36a82e075475a.png)

#### **Add Library**

Open“Thonny”, click“This computer”→“D:”→“2. ESP32\_code\_MicroPython”→“lesson 52. heat abstractor”. Select “ds18x20.py” and “ds18x20.py”, right-click and select “Upload to /”, waiting for the“ds18x20.py” and “ds18x20.py” to be uploaded to the ESP32.

![](media/6dd994f61c98443dea1f57ec3d2e719d.png)

![](media/71668967db31709ba3d9fd647c6b5dd9.png)

#### **Test Code**

```python
from machine import Pin
import machine, onewire, ds18x20, time

ds_pin = machine.Pin(13)

ds_sensor = ds18x20.DS18X20(onewire.OneWire(ds_pin))

roms = ds_sensor.scan()

#Two pins of the motor
INA = Pin(15, Pin.OUT) #INA corresponds to IN+
INB = Pin(4, Pin.OUT)#INB corresponds to IN-
# definitions for TM1650
ADDR_DIS = 0x48  #mode command
ADDR_KEY = 0x49  #read key value command

# definitions for brightness
BRIGHT_DARKEST = 0
BRIGHT_TYPICAL = 2
BRIGHTEST      = 7

on  = 1
off = 0

# number:0~9
NUM = [0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f] 
# DIG = [0x68,0x6a,0x6c,0x6e]
DIG = [0x6e,0x6c,0x6a,0x68]
DOT = [0,0,0,0]

clkPin = 22
dioPin = 21
clk = Pin(clkPin, Pin.OUT)
dio = Pin(dioPin, Pin.OUT)

DisplayCommand = 0

def writeByte(wr_data):
    global clk,dio
    for i in range(8):
        if(wr_data & 0x80 == 0x80):
            dio.value(1)
        else:
            dio.value(0)
        clk.value(0)
        time.sleep(0.0001)
        clk.value(1)
        time.sleep(0.0001)
        clk.value(0)
        wr_data <<= 1
    return

def start():
    global clk,dio
    dio.value(1)
    clk.value(1)
    time.sleep(0.0001)
    dio.value(0)
    return
    
def ack():
    global clk,dio
    dy = 0
    clk.value(0)
    time.sleep(0.0001)
    dio = Pin(dioPin, Pin.IN)
    while(dio.value() == 1):
        time.sleep(0.0001)
        dy += 1
        if(dy>5000):
            break
    clk.value(1)
    time.sleep(0.0001)
    clk.value(0)
    dio = Pin(dioPin, Pin.OUT)
    return
    
def stop():
    global clk,dio
    dio.value(0)
    clk.value(1)
    time.sleep(0.0001)
    dio.value(1)
    return
    
def displayBit(bit, num):
    global ADDR_DIS
    if(num > 9 and bit > 4):
        return
    start()
    writeByte(ADDR_DIS)
    ack()
    writeByte(DisplayCommand)
    ack()
    stop()
    start()
    writeByte(DIG[bit-1])
    ack()
    if(DOT[bit-1] == 1):
        writeByte(NUM[num] | 0x80)
    else:
        writeByte(NUM[num])
    ack()
    stop()
    return
    
def clearBit(bit):
    if(bit > 4):
        return
    start()
    writeByte(ADDR_DIS)
    ack()
    writeByte(DisplayCommand)
    ack()
    stop()
    start()
    writeByte(DIG[bit-1])
    ack()
    writeByte(0x00)
    ack()
    stop()
    return
def setBrightness(b = BRIGHT_TYPICAL):
    global DisplayCommand,brightness
    DisplayCommand = (DisplayCommand & 0x0f)+(b<<4)
    return

def setMode(segment = 0):
    global DisplayCommand
    DisplayCommand = (DisplayCommand & 0xf7)+(segment<<3)
    return
    
def displayOnOFF(OnOff = 1):
    global DisplayCommand
    DisplayCommand = (DisplayCommand & 0xfe)+OnOff
    return

def displayDot(bit, OnOff):
    if(bit > 4):
        return
    if(OnOff == 1): 
        DOT[bit-1] = 1;
    else:
        DOT[bit-1] = 0;
    return
        
def InitDigitalTube():
    setBrightness(2)
    setMode(0)
    displayOnOFF(1)
    for _ in range(4):
        clearBit(_)
    return

def ShowNum(num): #0~9999
    displayBit(1,num%10)
    if(num < 10):
        clearBit(2)
        clearBit(3)
        clearBit(4)
    if(num > 9 and num < 100):
        displayBit(2,num//10%10)
        clearBit(3)
        clearBit(4)
    if(num > 99 and num < 1000):
        displayBit(2,num//10%10)
        displayBit(3,num//100%10)
        clearBit(4)
    if(num > 999 and num < 10000):
        displayBit(2,num//10%10)
        displayBit(3,num//100%10)
        displayBit(4,num//1000)

InitDigitalTube()
print('Found DS devices: ', roms)

while True:
    ds_sensor.convert_temp()
    time.sleep_ms(750)
    for rom in roms:
        value = ds_sensor.read_temp(rom)
        print(value)
        ShowNum(int(value))
        if value > 28:
            INA.value(0)
            INB.value(1)
        else:
            INA.value(0)
            INB.value(0)
```

#### **Code Explanation**

The setting of variables and the storage of detection values are the same as what we learned earlier. We also set a temperature threshold and control the rotation of the motor when the threshold is exceeded, and then we use the digital tube to display the temperature value.

#### **Test Result**

Wire up and power on. Switch the DIP switch on the ESP32 expansion board to the ON end. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. We can see the temperature of the current environment (unit is Celsius) on the four-digit segment display, as shown in the figure below. If this value exceeds the value we set, the fan will rotate to dissipate heat. Press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 53: Intelligent Entrance Guard System

![](media/6dbae618241cc2dd3060dc4abf94f3a6.jpeg)

#### **Description**

In this project, we use the RFID522 card swiping module and the servo to set up an intelligent access control system. The principle is very simple. We use RFID522 swipe card module, an IC card or key card to unlock.

#### **Required Components**

| ![img](media/wps553.jpg) | ![img](media/wps554.png) | ![img](media/wps555.jpg) | ![img](media/wps556.jpg) |
| :----------------------: | :----------------------: | :----------------------: | :----------------------: |
|      ESP32 Board*1       | ESP32 Expansion Board*1  |          Key*1           |        IC Card*1         |
| ![img](media/wps557.jpg) | ![img](media/wps558.jpg) | ![img](media/wps559.png) | ![img](media/wps560.jpg) |
| Keyestudio RFID Module*1 |         Servo*1          |                          |    Micro USB Cable*1     |

#### **Wiring Diagram**

![](media/c8af51059d15f075c781609e64efa43a.png)

#### **Add Library**

Open“Thonny”, click “This computer” → “D:” → “2. ESP32_code_MicroPython” → ”lesson 53. Intelligent access control”. Select “mfrc522_config.py”, “mfrc522_i2c.py” and “soft_iic.py”, right-click and select “Upload to /”, waiting for the “mfrc522_config.py”, “mfrc522_i2c.py” and “soft_iic.py” to be uploaded to the ESP32.

![](media/88465ea010884daef2bfbf399bafa3ed.png)

![](media/0c2f4bb5aae93d6b536664f539870252.png)

![](media/d68fb1443ca9b36d063c2f15c891cc3f.png)

#### **Test Code**

**Note: Different RFID-RC522 modules, ID cards and keys may different uid1 values and uid2 values.** 

The uID1 and UID2 values of the white card and key chain read by your RRFID RC522 module can be replaced by the corresponding values in the program code. If not, click**“Run current script”** to run the code may cause your own white card and key chain to fail to control the servo.  

For example: You can replace the UID1 and UID2 values In the program code ![](media/80d64ee8ab05fb61cb32d19170295277.png) with your own white card and key chain values.


```python
from machine import Pin, PWM
import time
from mfrc522_i2c import mfrc522

pwm = PWM(Pin(15))
pwm.freq(50)

'''
Duty cycle corresponding to the Angle
Duty cycle corresponding to the Angle
0°----2.5%----25
45°----5%----51.2
90°----7.5%----77
135°----10%----102.4
180°----12.5%----128
'''
angle_0 = 25
angle_90 = 77
angle_180 = 128

#i2c config
addr = 0x28
scl = 22
sda = 21
    
rc522 = mfrc522(scl, sda, addr)
rc522.PCD_Init()
rc522.ShowReaderDetails()            # Show details of PCD - MFRC522 Card Reader details

uid1 = [237, 247, 148, 90]
uid2 = [76, 9, 107, 110]

pwm.duty(angle_180)
time.sleep(1)

while True:
    if rc522.PICC_IsNewCardPresent():
        #print("Is new card present!")
        if rc522.PICC_ReadCardSerial() == True:
            print("Card UID:", end=' ')
            print(rc522.uid.uidByte[0 : rc522.uid.size])
            if rc522.uid.uidByte[0 : rc522.uid.size] == uid1 or rc522.uid.uidByte[0 : rc522.uid.size] == uid2:
                pwm.duty(angle_0)
            else :
                pwm.duty(angle_180)
            time.sleep(500)from machine import Pin, PWM
import time
from mfrc522_i2c import mfrc522

pwm = PWM(Pin(15))
pwm.freq(50)

'''
Duty cycle corresponding to the Angle
Duty cycle corresponding to the Angle
0°----2.5%----25
45°----5%----51.2
90°----7.5%----77
135°----10%----102.4
180°----12.5%----128
'''
angle_0 = 25
angle_90 = 77
angle_180 = 128

#i2c config
addr = 0x28
scl = 22
sda = 21
    
rc522 = mfrc522(scl, sda, addr)
rc522.PCD_Init()
rc522.ShowReaderDetails()            # Show details of PCD - MFRC522 Card Reader details

uid1 = [237, 247, 148, 90]
uid2 = [76, 9, 107, 110]

pwm.duty(angle_180)
time.sleep(1)

while True:
    if rc522.PICC_IsNewCardPresent():
        #print("Is new card present!")
        if rc522.PICC_ReadCardSerial() == True:
            print("Card UID:", end=' ')
            print(rc522.uid.uidByte[0 : rc522.uid.size])
            if rc522.uid.uidByte[0 : rc522.uid.size] == uid1 or rc522.uid.uidByte[0 : rc522.uid.size] == uid2:
                pwm.duty(angle_0)
            else :
                pwm.duty(angle_180)
            time.sleep(500)
```

#### **Code Explanation**

In the previous experiment, our RFID module has tested the information of IC card and key. Then we use this corresponding information to control the door.

#### **Test Result**

Wire up and power on. Click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code starts executing. When we use the IC card or blue key to swipe the card, the shell displays the card and the key information , at the same time, the servo rotates to the corresponding angle to simulate opening the door. Press “Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.

### Project 54：WIFI Station Mode

#### **Description**

ESP32 has three different WiFi modes: Station mode, AP mode and AP+Station mode. All WiFi programming projects must be configured with WiFi running mode before using, otherwise the WiFi cannot be used. In this project, we are going to learn the WiFi Station mode of the ESP32.

![image-20230509170847074](media/image-20230509170847074.png)

#### **Wiring Diagram**

Plug the ESP32 to the USB port of your PC.

![image-20230509170904678](media/image-20230509170904678.png)

#### **Component Knowledge**

**Station mode：**

When setting Station mode, the ESP32 is taken as a WiFi client. It can connect to the router network and communicate with other devices on the router via a WiFi connection. As shown in the figure below, the PC and the router have been connected. If the ESP32 wants to communicate with the PC, the PC and the router need to be connected.

![](media/f74baff97695aa2ee33a8c19370d2547.png)

#### **Test Code**

![](media/01309c701d6fcf4f443076f8cacdffa1.png)


```python
import time
import network # Import network module.

ssidRouter     = 'ChinaNet-2.4G-0DF0' # Enter the router name
passwordRouter = 'ChinaNet@233' # Enter the router password

def STA_Setup(ssidRouter,passwordRouter):
    print("Setup start")
    sta_if = network.WLAN(network.STA_IF) # Set ESP32 in Station mode.
    if not sta_if.isconnected():
        print('connecting to',ssidRouter)
  # Activate ESP32’s Station mode, initiate a connection request to the router
  # and enter the password to connect.      
        sta_if.active(True)
        sta_if.connect(ssidRouter,passwordRouter)
  #Wait for ESP32 to connect to router until they connect to each other successfully.      
        while not sta_if.isconnected():
            pass
  # Print the IP address assigned to ESP32-WROVER in “Shell”. 
    print('Connected, IP address:', sta_if.ifconfig())
    print("Setup End")

try:
    STA_Setup(ssidRouter,passwordRouter)
except:
    sta_if.disconnect()
```

#### **Test Result**

Since the router name and password are different in various places, so before running the code, the user needs to enter the correct router name and password in the red box shown above.

After entering the correct router name and password, click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”, the code will start executing.

The Shell monitor will print the IP address of the ESP32 when connecting the ESP32 to your router.

![](media/e283d185859ce0a4372c53449bfd03b8.png)

### Project 55：WIFI AP Mode

#### **Description**

ESP32 has three different WiFi modes: Station mode, AP mode and AP+Station mode. All WiFi programming projects must be configured with WiFi running mode before using, otherwise the WiFi cannot be used. In this project, we are going to learn the WiFi AP mode of the ESP32.

#### **Required Components**

![image-20230509170847074](media/image-20230509170847074.png)

#### **Wiring Diagram**

Plug the ESP32 mainboard to the USB port of your PC.

![image-20230509170904678](media/image-20230509170904678.png)

#### **Component Knowledge**

**AP Mode:**

When setting AP mode, a hotspot network will be created, waiting for other WiFi devices to connect. As shown below:

Take the ESP32 as the hotspot, if a phone or PC needs to communicate with the ESP32, it must be connected to the ESP32's hotspot. Communication is only possible after a connection is established via the ESP32.

![](media/35d90f1ce10814ea1897ba63f8bd7ad9.png)

#### **Test Code**

![](media/034021f83b237c1264e4677a784b4c2b.png)


```python
import network #Import network module.

#Enter correct router name and password.
ssidAP         = 'ESP32_WiFi' #Enter the router name
passwordAP     = '12345678'  #Enter the router password

local_IP       = '192.168.1.147'
gateway        = '192.168.1.1'
subnet         = '255.255.255.0'
dns            = '8.8.8.8'

#Set ESP32 in AP mode.
ap_if = network.WLAN(network.AP_IF)

def AP_Setup(ssidAP,passwordAP):
    ap_if.ifconfig([local_IP,gateway,subnet,dns])
    print("Setting soft-AP  ... ")
    ap_if.config(essid=ssidAP,authmode=network.AUTH_WPA_WPA2_PSK, password=passwordAP)
    ap_if.active(True)
    print('Success, IP address:', ap_if.ifconfig())
    print("Setup End\n")

try:
    AP_Setup(ssidAP,passwordAP)
except:
    print("Failed, please disconnect the power and restart the operation.")
    ap_if.disconnect()
```

#### **Test Result**

You can modify the AP name and password or keep them unchanged Click ![](media/c005d91eb85d5c58566746609ab80254.png)“Run current script”, the code will start executing. Open the AP function of the ESP32, the Shell monitor will print the information.

![](media/5be2d032c8adcb2976c1640268919790.png)

Turn on your phone's WiFi search function, then you can see the ssid\_AP which is called "ESP32\_Wifi" in this code. You can enter the password "12345678" to connect it, or you can modify its AP name and password by code.

![](media/3e0ad895bea7f5100cc02a415adcace7.png)

### Project 56：WIFI AP+Station Mode

#### **Description**

In this project, we are going to learn the AP+Station mode of the ESP32.

#### **Components**

![image-20230509170847074](media/image-20230509170847074.png)

#### **Wiring Diagram**

Plug the ESP32 mainboard to the USB port of your PC.

![image-20230509170904678](media/image-20230509170904678.png)

#### **Component Knowledge**

**AP+Station mode**

In addition to the AP mode and the Station mode, AP+Station mode can be used at the same time. Turn on the Station mode of the ESP32, connect it to the router network, and it can communicate with the Internet through the router. Then turn on the AP mode to create a hotspot network. Other WiFi devices can be connected to the router network or the hotspot network to communicate with the ESP32.

#### **Test Code**

![](media/f2e9eeb897d65975510976b3e178d695.png)

```python
import network #Import network module.

ssidRouter     = 'ChinaNet-2.4G-0DF0' #Enter the router name
passwordRouter = 'ChinaNet@233' #Enter the router password

ssidAP         = 'ESP32_WiFi'#Enter the AP name
passwordAP     = '12345678' #Enter the AP password

local_IP       = '192.168.4.147'
gateway        = '192.168.1.1'
subnet         = '255.255.255.0'
dns            = '8.8.8.8'

sta_if = network.WLAN(network.STA_IF)
ap_if = network.WLAN(network.AP_IF)
    
def STA_Setup(ssidRouter,passwordRouter):
    print("Setting soft-STA  ... ")
    if not sta_if.isconnected():
        print('connecting to',ssidRouter)
        sta_if.active(True)
        sta_if.connect(ssidRouter,passwordRouter)
        while not sta_if.isconnected():
            pass
    print('Connected, IP address:', sta_if.ifconfig())
    print("Setup End")
    
def AP_Setup(ssidAP,passwordAP):
    ap_if.ifconfig([local_IP,gateway,subnet,dns])
    print("Setting soft-AP  ... ")
    ap_if.config(essid=ssidAP,authmode=network.AUTH_WPA_WPA2_PSK, password=passwordAP)
    ap_if.active(True)
    print('Success, IP address:', ap_if.ifconfig())
    print("Setup End\n")

try:
    AP_Setup(ssidAP,passwordAP)    
    STA_Setup(ssidRouter,passwordRouter)
except:
    sta_if.disconnect()
    ap_if.idsconnect()
```

#### **Test Result**

Before running the code, you need to modify **ssidRouter**, **passwordRouter**, **ssidAP**, and **passwordAP**. After making sure that the code is modified correctly, click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”and the "Shell" window will display the following:

![](media/72c864c57de3f40d2a55ee3c10449898.png)

Then you can see the ssid\_A on the ESP32.

![](media/3e0ad895bea7f5100cc02a415adcace7.png)

### Project 57: Comprehensive Experiment

![](media/c92bfcbd1ecd7fe91198066d0c9a4df6.jpeg)

#### **Introduction**

We did a lot of experiments, and for each one we needed to re-upload the code, so can we achieve different functions through an experiment? In this experiment, we will use an external button module to achieve different functions.

#### **Required Components**

| ![img](media/wps578.jpg)           | ![img](media/wps579.png)     | ![img](media/wps580.jpg)                 | ![img](media/wps581.jpg)                | ![img](media/wps582.jpg)                             |
| ---------------------------------- | ---------------------------- | ---------------------------------------- | --------------------------------------- | ---------------------------------------------------- |
| ESP32 Board*1                      | ESP32 Expansion Board*1      | Keyestudio Purple LED Module*1           | Keyestudio Button Module*1              | Keyestudio  Rotary Potentiometer*1                   |
| ![img](media/wps583.jpg)           | ![img](media/wps584.jpg)     | ![img](media/wps585-16836240246492.jpg)  | ![img](media/wps586-16836240267543.jpg) | ![img](media/wps587-16836240407894.jpg)              |
| Keyestudio  Line Tracking Sensor*1 | Keyestudio Joystick Module*1 | Keyestudio HHC-SR04 Ultrasonic Sensor *1 | Keyestudio Common Cathode RGB Module *1 | Keyestudio  XHT11 Temperature and Humidity Sensor *1 |
| ![img](media/wps588.png)           | ![img](media/wps589.png)     | ![img](media/wps588.png)                 | ![img](media/wps591.jpg)                | ![img](media/wps592.jpg)                             |
| 3P Dupont Wire*6                   | 4P Dupont Wire*2             | 5P Dupont Wire*1                         | Keyestudio Obstacle Avoidance Sensor*1  | Micro USB Cable*1                                    |

#### **Wiring Diagram**

![](media/9a02c45a8c8689060b102bdc742432f2.png)

#### **Test Code**

```python
from machine import ADC, Pin, PWM
import time
import machine
import random
import dht

pwm_r = PWM(Pin(4))
pwm_g = PWM(Pin(0))
pwm_b = PWM(Pin(2))

pwm_r.freq(1000)
pwm_g.freq(1000)
pwm_b.freq(1000)

DHT = dht.DHT11(machine.Pin(15))

potentiometer_adc=ADC(Pin(33))
potentiometer_adc.atten(ADC.ATTN_11DB)
potentiometer_adc.width(ADC.WIDTH_12BIT)

button = Pin(23, Pin.IN)
led = PWM(Pin(5))
led.freq(1000)

tracking = Pin(14, Pin.IN, Pin.PULL_UP)

button_z=Pin(32,Pin.IN,Pin.PULL_UP)
rocker_x=ADC(Pin(35))
rocker_y=ADC(Pin(34))
rocker_x.atten(ADC.ATTN_11DB)
rocker_y.atten(ADC.ATTN_11DB)
rocker_x.width(ADC.WIDTH_12BIT)
rocker_y.width(ADC.WIDTH_12BIT)

avoid = Pin(27, Pin.IN)
# Set ultrasonic pins
trigger = Pin(13, Pin.OUT)
echo = Pin(12, Pin.IN)

def light(red, green, blue):
    pwm_r.duty(red)
    pwm_g.duty(green)
    pwm_b.duty(blue)

# Ultrasonic ranging, unit: cm
def getDistance(trigger, echo):
    # Generates a 10us square wave
    trigger.value(0)   #A short low level is given beforehand to ensure a clean high pulse:
    time.sleep_us(2)
    trigger.value(1)
    time.sleep_us(10)#After pulling high, wait 10 microseconds and immediately set it to low
    trigger.value(0)
    
    while echo.value() == 0: #Establish a while loop to detect whether the echo pin value is 0 and record the time at that time
        start = time.ticks_us()
    while echo.value() == 1: #Establish a while loop to check whether the echo pin value is 1 and record the time at that time
        end = time.ticks_us()
    d = (end - start) * 0.0343 / 2 #The travel time of the sound wave x the speed of sound (343.2 m/s, 0.0343 cm/microsecond), and the distance back and forth divided by 2
    return d
keys = 0
nums = 0
print(keys % 8)
def toggle_handle(pin):
    global keys
    keys += 1
    print(keys % 7)

button.irq(trigger = Pin.IRQ_FALLING, handler = toggle_handle)

def showRGB():
    R = random.randint(0,1023)
    G = random.randint(0,1023)
    B = random.randint(0,1023)
    light(R, G, B)
    time.sleep(0.3)

def showxht11():
    DHT.measure() 
    print('temperature:',DHT.temperature(),'℃','humidity:',DHT.humidity(),'%')
    time.sleep(1)

def showtracking():
    if tracking.value() == 0:
        print("0   White")   #Press to print the corresponding information.
    else:
        print("1   Black")
    time.sleep(0.1) #delay 0.1s
    
def showJoystick():
    B_value = button_z.value()
    X_value = rocker_x.read()
    Y_value = rocker_y.read()
    print("button:", end = " ")
    print(B_value, end = " ")
    print("X:", end = " ")
    print(X_value, end = " ")
    print("Y:", end = " ")
    print(Y_value)
    time.sleep(0.1)

def adjustLight():
    pot_value = potentiometer_adc.read()
    print(pot_value)
    led.duty(pot_value)
    time.sleep(0.1)

def showAvoid():
    if avoid.value() == 0:
        print("There are obstacles")
    else:
        print("All going well")
    time.sleep(0.1)

def showDistance():
    distance = getDistance(trigger, echo)
    print("The distance is ：{:.2f} cm".format(distance))
    time.sleep(0.1)
while True:
    nums = keys % 7  #number of keystrokes mod 7 to get 0, 1, 2, 3, 4, 5, 6 
    if nums == 0:  #According to RGB
        showRGB()
    elif nums == 1:  #Displays the high and low level of the tracking sensor
        showtracking()
    elif nums == 2:  #Display temperature and humidity
        showxht11()
    elif nums == 3:  #Displays the rocker value
        showJoystick()
    elif nums == 4:  #The potentiometer adjusts the LED
        adjustLight()
    elif nums == 5:  #Display obstacle information
        showAvoid()
    elif nums == 6:  #Display ultrasonic ranging value
        showDistance()     
```

#### **Code Explanation**

Calculate how many times the button is pressed, divide it by 7, and get the remainder which is 0, 1 2, 3, 4, 5 , 6. According to different remainders, construct seven unique functions to realize different functions.

We can add or reduce sensors or modules.

#### **Test Result**

Wire up, power on and click ![](media/da852227207616ccd9aff28f19e02690.png)“Run current script”. At the beginning, the number of keys is 0, the remainder is 0, and the four lamp beads on the RGB module flash with random colors.

![](media/2b5ff126000d0182b9b3e6bd70de3bab.png)

Press a button, the RGB stops flashing, press once, the remainder is 1. The function of the experiment is to track the sensor according to black and white objects read high and low levels, the following information is displayed.

![](media/7365faf1c84b5d0168bc8b7485b436cb.png)

Press the key twice, the time of pressing buttons is 2 and the remainder is 2. Read temperature and humidity values. As shown below;

![](media/b326a19e887434924c1df74346a1c9aa.png)

Press the key again, the time of pressing buttons is 3 and the remainder is 3. Read digital values at x, y and z axis of the joystick module. As shown below;

![](media/21a31fba315990014bd6e62a4e1b78f6.png)

Press the key for the fourth time, the remainder is 4. Then the potentiometer can adjust the PWM value at the GPI05 port to control LED brightness of the purple LED.

Press the key for the fifth time, the remainder is 5. Then the obstacle avoidance sensor can detect obstacles, as shown below;

![](media/40e0ba1935c2ba87613d0f94fc30b830.png)

Press the key for the sixth time, the remainder is 6. Then the ultrasonic sensor can detect distance away from obstacles, as shown below;

![](media/b7ebf58db51f94d52c4e843531beb348.png)

Press the key for seventh time and the remainder is 0. The RGB will flash again. Keep pressing the key, functions will change. Press“Ctrl+C”or click ![](media/27451c8a9c13e29d02bc0f5831cfaf1f.png)“Stop/Restart backend”to exit the program.





## Resources

[https://fs.keyestudio.com/KS5005-5006](https://fs.keyestudio.com/KS5005-5006)