- **Project Title:** ESP32 Environmental Monitoring & Alert System.
- **Project Type:** ESP32-based IoT simulation project built in Wokwi.
- **Main Purpose:** Monitor temperature and humidity and trigger visual and audio alerts when values cross a limit.
- **Why this project:** To detect sudden environmental changes automatically instead of checking values manually.

- **Project Overview:**
- Reads temperature and humidity from a DHT22 sensor.
- Compares the readings with threshold values.
- Turns on an LED and buzzer when limits are exceeded.
- Shows live values on the Serial Monitor.

- **Features:**
- ESP32-based simulation.
- DHT22 temperature monitoring.
- DHT22 humidity monitoring.
- LED alert system.
- Buzzer alert system.
- Real-time serial output.
- Simulation testing without physical hardware.

- **Problem Statement:**
- Sudden changes in temperature and humidity can be missed in manual monitoring.
- This can cause discomfort or unsafe environmental conditions.
- The system solves this by giving automatic alerts.

- **Components Used and Why:**
- **ESP32:** Main microcontroller that reads sensor data and controls alerts.
- **DHT22 sensor:** Used because it measures both temperature and humidity in one sensor.
- **LED:** Used as a simple visual alert indicator.
- **Buzzer:** Used to give an audio alert when thresholds are crossed.
- **Breadboard and jumper wires:** Used for easy circuit connections in the Wokwi simulation.

- **DHT22 Features:**
- Measures both temperature and humidity.
- Digital sensor, so it gives easy-to-read output.
- Suitable for IoT and automation projects.
- Useful for environmental monitoring.
- Easy to simulate in Wokwi.
- Helps test logic without real hardware.

- **How It Works:**
- ESP32 reads data from the DHT22 sensor.
- The values are printed every 2 seconds.
- If temperature is above 30°C or humidity is above 70%, the LED turns ON.
- The buzzer also turns ON using `tone()`.
- When values return to normal, both alerts turn OFF.

- **Simulation:**
- Built and tested using Wokwi ESP32 simulator.
- No physical components are needed for testing.
- Sensor values can be changed during simulation.
- This helps verify the code and circuit before hardware implementation.

- **File Structure:**
- `sketch.ino` for the code.
- `diagram.json` for the circuit layout.
- `libraries.txt` for required libraries.
- `README.md` for project documentation.
- `wokwi.toml` if Wokwi configuration is needed.

- **Code Logic:**
- If temperature or humidity is too high, turn alerts ON.
- Otherwise, turn alerts OFF.

- **How To Run:**
- Open the project in Wokwi.
- Start the simulation.
- Check temperature and humidity in Serial Monitor.
- Change sensor values to test alert behavior.
- Observe the LED and buzzer response.

- **Future Scope:**
- Add relay control for fan or appliance automation.
- Add PIR motion sensor for security.
- Add LCD/OLED display for local readings.
- Add Wi-Fi and cloud dashboard support.
- Convert the simulation into a real hardware prototype.

- **Internship Relevance:**
- Shows ESP32 programming skills.
- Demonstrates sensor interfacing.
- Uses threshold-based automation.
- Includes embedded logic and debugging.
- Shows simulation-based development.
- Demonstrates real-time monitoring and alert generation.




project is available on https://wokwi.com/projects/468279379292969985






image <img width="1917" height="925" alt="image" src="https://github.com/user-attachments/assets/9235afb9-70e1-4915-9125-786974113677" />
