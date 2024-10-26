<img width="1280" alt="readme-banner" src="https://github.com/user-attachments/assets/35332e92-44cb-425b-9dff-27bcf1023c6c">
..
### Brightness Beyond Borders: A Calculator for Those Who Love a Challenge 🎯


### Basic Details
### Team Name: Synovate


### Team Members
- Team Lead: Navaneeth K - Government College of Engineering Kannur
- Member 2: Athena S Kumar - Government College of Engineering Kannur
- Member 3: Sanika Ramesh - Government College of Engineering Kannur

### Project Description
Introducing "Bright Overload Calculator" — a playful tool that operates only within a specific network, delivering answers in reverse format with a leading zero (e.g., 4 * 2 becomes 08). As a fun twist, it adjusts brightness based on WiFi strength, shifting from blindingly bright to nearly unreadable, creating an unforgettable (and slightly challenging) calculation experience!

### The Problem (that doesn't exist)
Imagine a world where calculators are too straightforward, where math just happens without any 'surprise'. You type 10+5, and without drama, you get the expected result: 15. But this "boring accuracy" denies you the thrill of uncertainty, the adrenaline of misreading numbers and the joy of mathematical mystery.

Now, imagine you’re in a WiFi-rich environment, where every bar of signal strength shows its presence without any regard for 'sensitive eyes'. Calculators could use a bit more rebellion. Why settle for readable brightness when you could experience the full spectrum of 'retinal strain'?

Introducing the brightoverload calculator:
It not only inverts math results for an unexpected twist but also gauges WiFi strength, using signal power to control display brightness. Is it too bright or too dim? Yes. But think of the thrill in every calculation, every signal search. Finally, a calculator that challenges perception and provides an obstacle course for your senses!

### The Solution (that nobody asked for)
To solve this definitely pressing non-issue, we’ve built the 'bright overload calculator' —a masterpiece of twist against straightforward math and normal brightness levels.

Here’s how it works:

1. WiFi Detection Shenanigans: Our setup constantly searches for a specific WiFi network like an overly-attached friend. The moment it latches onto the signal, it springs to life. But this isn’t your ordinary calculator; it’s the opposite of helpful.

2. Backward Math Magic: When you punch in an equation, like "10 + 5," it laughs in the face of correct displays and spits out "51" instead. Why? Because regular answers are for mere mortals, and this calculator only gives reverse results to remind you that sometimes, logic should take a backseat.

3. Brightness Roulette: And as a bonus, we’ve wired the display brightness to the strength of the WiFi signal. If you’re too close? Blinding light mode activates—goodbye, retinas! Step away? It’ll dim to the point of invisibility, making you question if it’s on. Now every calculation becomes a guessing game, with numbers hiding in the shadows or dazzling you out of nowhere.

In the end, we’ve solved a problem that doesn’t exist by creating a WiFi-dependent, brightness-variable, backward-answering calculator. Finally, there’s a way to do math and not trust a single answer you see!



## Technical Details
### Technologies/Components Used
For Software:
- C++
- Arduino Core for ESP32 and Arduino
- Keypad.h,LiquidCrystal.h.
- Arduino CLI,Text editors,Simulide simulation.

For Hardware:
- ESP32,Arduino UNO,Liquid Crystal Display,Keypad,Breadboard,Jumper wires,powersupply.
- ESP devkit v1,arduino UNO(2 Nos),Keypad 4*4,HD44780 LCD,Jumper wires(male to male),USB cable(power supply connection from powerbank).
- multimeter,stripper.

### Implementation
For Software: We used SimulIDE for simulation and Arduino CLI for compiling and uploading sketches, first we created our circuit in SimulIDE and simulated our circuit. Then by using Arduino CLI to compile the sketch with arduino-cli compile and uploaded it to the Arduino board and esp 32.

# Installation
- yay -S arduino-cli
- git clone https://aur.archlinux.org/arduino-cli.git
- cd arduino-cli
- makepkg -si

# Run
- arduino-cli config init
- arduino-cli core update-index
- arduino-cli core install arduino:avr
- arduino-cli core install esp32:esp32
- arduino-cli compile --fqbn esp32:esp32:esp32dev /path/to/your/sketch.ino
- arduino-cli board list
- arduino-cli upload -p /dev/ttyUSB0 --fqbn esp32:esp32:esp32dev /path/to/your/sketch.ino
- screen /dev/ttyUSB0 115200sim


### Project Documentation
For Software:

# Screenshots (Add at least 3)

![image alt](https://raw.githubusercontent.com/Navaneeth6105/useless_project/a6a58935e07ebb35071834d8cca37d1a093afb63/image.png)
The Code

![image alt](https://raw.githubusercontent.com/Navaneeth6105/useless_project/4e0e7dbcbe8e56ff968dd67e55453a64cab9d809/image.png)
Simulator

![image alt](https://raw.githubusercontent.com/Navaneeth6105/useless_project/454cdfe7bb8496778336bbf6bebb50e0c783d1b4/image.png)
The Terminal

# Diagrams
![Workflow](https://github.com/Navaneeth6105/useless_project/blob/bac67027c67d0f8bf92f972cb09db1b32c56fcad/image2.jpeg)
1. Calculator Operations (Arduino 1): Performs basic calculations based on keypad input.
   
2. Data Transmission: Sends numbers, operation type, and result to Arduino 2 via serial communication.

3. WiFi Signal Monitoring (ESP32): Detects WiFi signal strength of a specific network.

4. Signal Strength Transmission: Passes WiFi signal strength to Arduino 2.

5. Data Storage (Arduino 2): Stores received calculation and signal strength data.

6. LCD Contrast Adjustment: Adjusts LCD contrast based on WiFi signal strength.

7. Display Output: Shows results on LCD with modified contrast and reversed output.

8. Reset on 'Clear': Clears display for new calculations when "Clear" is pressed.

For Hardware:

# Schematic & Circuit
![Circuit](https://github.com/Navaneeth6105/useless_project/blob/503e65e0224b220f63174a782f8ee9ee6e43f1fd/image.jpeg)
1. ESP32:
   - RX2 and D4 are connected to Arduino UNO's RX and TX pins, respectively, for serial communication.
   - D2 is connected to Arduino UNO’s digital pin 2.
   
2. LCD Display:
   - The LCD display (labeled “Enter the Numbers”) is connected to the Arduino UNO using the following pins:
     - R5, EN, D4, D5, D6, and D7 are connected to digital pins 8, 9, 12, 11, 5, and 4 on the Arduino UNO, respectively.
     - V0 controls the contrast, and VSS, VDD, and V0 are powered according to the display's requirements.

3. Arduino UNO:
   - Acts as the main controller, connecting the ESP32, LCD display, and keypad.
   - RX and TX pins are connected to the ESP32 for serial communication.
   
4. 4x4 Keypad:
   - Rows and columns of the keypad are connected to digital pins 9, 8, 7, 6, 5, 4, 3, and 2 on the Arduino UNO, allowing user input for numeric entry and operations.

![Schematic](https://github.com/Navaneeth6105/useless_project/blob/503e65e0224b220f63174a782f8ee9ee6e43f1fd/image.jpeg)
1. ESP32 Module: The ESP32 is used to detect specific WiFi networks. When the designated network is detected, it enables the Arduino UNO to function as a calculator.

2. Arduino UNO: Serves as the main controller, handling data from the ESP32, processing inputs from the keypad, and displaying output on the LCD. It communicates with the ESP32 through its RX (D0) and TX (D1) pins for WiFi signal information.

3. LCD Display: Shows prompts and results for the calculator. The display's data and control pins are connected to digital pins (8, 9, 12, 11, 5, 4) on the Arduino UNO.

4. 4x4 Keypad: Allows the user to input numbers and operations. The keypad is wired to the Arduino’s digital pins (2 to 9), where each row and column is mapped for unique key recognition.

In operation, the ESP32 detects the desired WiFi, enabling calculations on the Arduino. When the user enters calculations on the keypad, the Arduino processes the input and displays the result on the LCD—reversed.

# Build Photos
![Components](https://github.com/Navaneeth6105/useless_project/blob/main/finalbuildd.jpeg?raw=true)
1. Keypad 
2. Arduino boards
3. ESP8266 module 
4. LCD Display 
5. Power bank 

![Build](https://github.com/Navaneeth6105/useless_project/blob/main/finalbuildd.jpeg?raw=true)
1. Hardware Setup:
   - Connect the keypad and LCD display to the Arduino.
   - Link the ESP8266 to the Arduino for WiFi detection.
   - Power the setup with a USB power source.

2. WiFi Detection:
   - Program the ESP8266 to detect a specific WiFi network and send signal strength to the Arduino.

3. Calculator Logic:
   - Code the Arduino to handle keypad inputs, perform calculations, and reverse the result before displaying on the LCD.
   - Use signal strength to adjust LCD brightness (brighter/dimmer with stronger signal).

4. Testing:
   - Verify keypad, WiFi detection, reversed display, and brightness adjustment for the final setup.

![image alt](https://github.com/Navaneeth6105/useless_project/blob/main/finalbuildd.jpeg?raw=true)
This setup is a WiFi-enabled calculator for a "useless project." It consists of:

1. Keypad for inputting numbers and operations.
2. Arduino boards to handle calculations and control logic.
3. ESP8266 module to detect WiFi, adjusting the LCD brightness based on signal strength.
4. LCD Display that shows reversed results of calculations (e.g., 5+10 = 51).
5. Power bank for portable power.

In essence, it’s a calculator that only works when connected to WiFi, displays results backwards, and has a brightness that varies with WiFi strength.

### Project Demo
# Video
[https://github.com/Navaneeth6105/useless_project/blob/c1faa0a7bc765e9f453e760551a5195f905a1f15/My%20movie%201_216x384%20(1)_184x326.mp4]



## Team Contributions
- Nvaneeth K:  Hardware setup
- Athena S Kumar: Software setup
- Sanika Ramesh: WiFi connection, Documentation

---
Made with ❤️ at TinkerHub Useless Projects 

![Static Badge](https://img.shields.io/badge/TinkerHub-24?color=%23000000&link=https%3A%2F%2Fwww.tinkerhub.org%2F)
![Static Badge](https://img.shields.io/badge/UselessProject--24-24?link=https%3A%2F%2Fwww.tinkerhub.org%2Fevents%2FQ2Q1TQKX6Q%2FUseless%2520Projects)



