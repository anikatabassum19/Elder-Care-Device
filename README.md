# Elder Care Monitoring Device

Welcome to the GitHub repository for our Elder Care Monitoring Device! This compact and versatile device is designed to provide comprehensive care and monitoring for elderly individuals. It integrates various sensors and modules to ensure their safety and well-being.

## Features

1. **Temperature and Humidity Monitoring (DHT11):**
   - Constantly monitors room temperature and humidity to maintain a comfortable environment for the elderly person.

2. **Live Video Streaming (ESP32 Cam Module):**
   - Enables real-time video monitoring of the elderly person through the ESP32 Cam module, ensuring visual check-ins for caregivers.

3. **Fire Detection:**
   - Utilizes sensors to detect potential fire hazards in the surroundings, providing an extra layer of safety.

4. **Fall Detection (ADXL345):**
   - Detects falls when the elderly person is outdoors, using the ADXL345 accelerometer, triggering immediate alerts for prompt assistance.

5. **SMS Alerts (SIM800L Module):**
   - Sends SMS alerts to designated contacts in case of emergencies or specific events, enhancing communication and response times.

6. **Location Tracking (NEO 7M GPS Module):**
   - Tracks the location of the elderly person when they are outside, providing caregivers with real-time location information for enhanced safety and security.

## Repository Structure

- **/TemperatureHumidityMonitoring:** Code for reading data from the DHT11 sensor.
- **/LiveVideoStreaming:** Code for implementing live video streaming through the ESP32 Cam module.
- **/FireDetection:** Code for detecting and alerting in case of fire hazards.
- **/FallDetection:** Code for fall detection using the ADXL345 accelerometer.
- **/SMSAlerts:** Code for sending SMS alerts using the SIM800L module.
- **/LocationTracking:** Code for tracking the location through the NEO 7M GPS module.

## Getting Started

1. Clone the repository to your local machine.

   ```bash
   git clone https://github.com/your-username/elder-care-device.git
2. Open the Arduino IDE and upload these codes in the esp32 cam module

## Connection Strings

 **Temperature and Humidity Monitoring (DHT11):**
   - DHT11 GND to ESP32 Cam GND
   - DHT11 VCC to ESP32 Cam 5V
   - DHT11 Data to ESP32 Cam D2

 **Live Video Streaming (ESP32 Cam Module):**
   - ESP32 Cam Module (Follow ESP32 Cam pinout)

 **Fire Detection:**
   - Fire detection sensor (Connection details may vary based on the specific sensor used)

 **Fall Detection (ADXL345):**
   - ADXL345 GND to ESP32 Cam GND
   - ADXL345 VCC to ESP32 Cam 5V
   - ADXL345 SDA to ESP32 Cam D21
   - ADXL345 SCL to ESP32 Cam D22
   - 
**SMS Alerts (SIM800L Module):**
   - SIM800L GND to ESP32 Cam GND
   - SIM800L VCC to ESP32 Cam 5V
   - SIM800L TX to ESP32 Cam U2_RXD
   - SIM800L RX to ESP32 Cam U2_TXD

**Location Tracking (NEO 7M GPS Module):**
   - NEO 7M GPS Module (Follow NEO 7M GPS Module pinout)


