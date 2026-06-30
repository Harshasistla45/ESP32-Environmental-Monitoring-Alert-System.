# ESP32-Smart-Home-Automation-using-DHT22-and-Buzzer
ESP32 Environmental Monitoring & Alert System
An ESP32-based IoT simulation project built in Wokwi to monitor temperature and humidity using a DHT22 sensor and trigger visual and audio alerts through an LED and buzzer when thresholds are exceeded. The project demonstrates basic embedded logic, sensor reading, and alert automation in a browser-based simulation environment.
wokwi
+2

Project Overview
This project reads environmental data from a DHT22 sensor connected to an ESP32.
If the temperature goes above 30°C or humidity goes above 70%, the system turns on an LED and activates a buzzer.
The values are printed continuously on the Serial Monitor for real-time observation.
wokwi
+1

Features
ESP32-based simulation.

DHT22 temperature and humidity monitoring.

LED alert when threshold is crossed.

Buzzer alert when threshold is crossed.

Real-time serial output.

Tested in Wokwi without physical hardware.
wokwi
+2

Problem Statement
In many environments, sudden changes in temperature or humidity can go unnoticed, leading to discomfort or unsafe conditions.
This project solves that by automatically detecting high temperature or humidity and generating alerts using an ESP32-based embedded system.
ijraset
+1

Components Used
ESP32.

DHT22 sensor.

LED.

Buzzer.

Breadboard and jumper wires in Wokwi simulation.
wokwi
+1

How It Works
The ESP32 reads temperature and humidity from the DHT22 sensor.

The values are printed to the Serial Monitor every 2 seconds.

If temperature is greater than 30°C or humidity is greater than 70%, the LED turns ON.

The buzzer also turns ON using the tone() function.

When values go back to normal, both alerts turn OFF.
wokwi
+1

Simulation
This project was developed and tested using the Wokwi ESP32 simulator.
You can run the simulation directly in Wokwi using the project files in this repository.
The simulation is based on the same workflow used in Wokwi ESP32 example projects and documentation.
github
+2

File Structure

bash
.
├── sketch.ino
├── diagram.json
├── libraries.txt
├── README.md
└── wokwi.toml   # optional, if you add Wokwi config
Code Logic

cpp
if (t > TEMP_HIGH_C || h > HUM_HIGH_PCT) {
  digitalWrite(LED_PIN, HIGH);
  tone(BUZZER_PIN, 1800);
} else {
  digitalWrite(LED_PIN, LOW);
  noTone(BUZZER_PIN);
}
How To Run
Open the project in Wokwi.

Start the simulation.

Observe temperature and humidity values in the Serial Monitor.

Change sensor values to test the alert condition.

Watch the LED and buzzer react to threshold crossing.
wokwi
+2

Future Scope
Add relay control for fan or appliance automation.

Add PIR motion sensor for smart home security.

Add LCD/OLED display for local status.

Add Wi-Fi and cloud dashboard integration.

Convert the simulation into a physical prototype later.
wokwi
+2

Internship Relevance
This project demonstrates:

ESP32 programming.

Sensor interfacing.

Threshold-based automation.

Embedded logic.

Simulation-based development.

Real-time monitoring and alert generation 





project is available on https://wokwi.com/projects/468279379292969985






image <img width="1917" height="925" alt="image" src="https://github.com/user-attachments/assets/9235afb9-70e1-4915-9125-786974113677" />
