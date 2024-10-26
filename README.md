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

![Screenshot1](Add screenshot 1 here with proper name)
*Add caption explaining what this shows*

![Screenshot2](Add screenshot 2 here with proper name)
*Add caption explaining what this shows*

![Screenshot3](Add screenshot 3 here with proper name)
*Add caption explaining what this shows*

# Diagrams
![Workflow](Add your workflow/architecture diagram here)
*Add caption explaining your workflow*

For Hardware:

# Schematic & Circuit
![Circuit](Add your circuit diagram here)
*Add caption explaining connections*

![Schematic](Add your schematic diagram here)
*Add caption explaining the schematic*

# Build Photos
![Components](Add photo of your components here)
*List out all components shown*

![Build](Add photos of build process here)
*Explain the build steps*

![image alt](https://github.com/Navaneeth6105/useless_project/blob/main/finalbuildd.jpeg?raw=true)
*Explain the final build*

### Project Demo
# Video
[Add your demo video link here]
*Explain what the video demonstrates*


## Team Contributions
- Nvaneeth K:  ntributions]
- Athena S Kumar: [Specific contributions]
- Sanika Ramesh: [Specific contributions]

---
Made with ❤️ at TinkerHub Useless Projects 

![Static Badge](https://img.shields.io/badge/TinkerHub-24?color=%23000000&link=https%3A%2F%2Fwww.tinkerhub.org%2F)
![Static Badge](https://img.shields.io/badge/UselessProject--24-24?link=https%3A%2F%2Fwww.tinkerhub.org%2Fevents%2FQ2Q1TQKX6Q%2FUseless%2520Projects)



