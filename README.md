# Smart IV Fluid Monitoring System
## Overview
The Smart IV Fluid Monitoring System is an embedded systems project developed using ESP32 to monitor IV fluid levels in real time. The system displays the fluid level on an LCD screen and generates an alert when the fluid level falls below a predefined threshold.
## Features
- Real-time IV fluid level monitoring
- LCD display for fluid level status
- Low fluid level detection
- Buzzer alert for low fluid condition
- ESP32-based implementation
- Wokwi simulation support
## Components Used
- ESP32 Development Board
- Potentiometer (simulated fluid level sensor)
- 16x2 I2C LCD Display
- Buzzer
- Jumper Wires
## Circuit Connections
Potentiometer
- VCC → 3.3V
- GND → GND
- SIG → GPIO 34
LCD (I2C)
- SDA → GPIO 21
- SCL → GPIO 22
- VCC → 5V
- GND → GND
Buzzer
- Positive → GPIO 25
- Negative → GND
## Software and Tools
- Arduino IDE
- ESP32 Board Package
- Wokwi Simulator
- Embedded C/C++
- LiquidCrystal_I2C Library
- Wire Library
## Working Principle
The potentiometer simulates the IV fluid level and provides analog values to the ESP32. The ESP32 reads and processes these values, converts them into fluid level readings, and displays the information on the LCD. When the fluid level drops below the threshold value, the buzzer is activated and a warning message is displayed.
## Results
- Real-time fluid level monitoring achieved
- LCD display updates continuously
- Low fluid level alert works successfully
- System operates effectively in simulation
## Future Scope
- IoT-based remote monitoring
- Mobile application integration
- Cloud data storage
- Real IV fluid level sensors
- Hospital-wide monitoring system
## Author
Project developed as part of an Internship Project on Embedded Systems and IoT.
