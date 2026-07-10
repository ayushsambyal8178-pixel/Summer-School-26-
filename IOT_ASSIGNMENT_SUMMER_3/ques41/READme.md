<div align="center">

# **🏠 Smart Home Air Quality Monitor**

### *IoT-Based Indoor Air Quality Monitoring System using ESP32*

</div>

---

## **📌 Problem Statement**

A family in **Milan, Europe**, is concerned about indoor air quality during winter when wood is burned for heating. Poor ventilation can increase **carbon monoxide (CO)** and smoke levels, creating serious health risks.

The objective is to design an **IoT-based Air Quality Monitoring System** that continuously measures gas concentration, temperature, and humidity, provides visual and audible alerts based on air quality, and logs sensor data locally so that the system continues to operate even when the internet is unavailable.

---

## **💡 Solution Approach**

This project uses an **ESP32 Development Board** as the central controller to continuously monitor indoor environmental conditions.

- An **MQ-2 Gas Sensor** detects smoke and carbon monoxide (CO) concentration.
- A **DHT22 (or DHT11)** sensor measures temperature and humidity.

During startup, the MQ-2 sensor performs **baseline calibration** by recording its value in clean air. During normal operation, the ESP32 continuously compares the current gas sensor reading with the baseline to determine the indoor air quality.

The system classifies air quality into three different levels:

| Air Quality | RGB LED | Buzzer |
|-------------|---------|---------|
| 🟢 **SAFE** | Green | OFF |
| 🟡 **MODERATE** | Yellow | Intermittent Warning Beep |
| 🔴 **DANGER** | Red | Continuous Alarm |

Every **2 seconds**, the ESP32 records:

- Timestamp
- MQ-2 Gas Sensor Reading
- Temperature
- Humidity
- Air Quality Severity

The data is displayed in **CSV format** on the Serial Monitor, allowing local logging even without an internet connection.

---

## **🛠️ Hardware Required**

- ESP32 Development Board
- MQ-2 Gas Sensor
- DHT22 (or DHT11) Temperature & Humidity Sensor
- RGB LED (Common Cathode)
- Piezo Buzzer
- Breadboard
- Jumper Wires
- USB Cable for ESP32 Programming

---

## **🔌 Pin Connections**

| Component | ESP32 GPIO Pin |
|-----------|---------------|
| MQ-2 Analog Output | GPIO 34 |
| DHT22/DHT11 Data | GPIO 15 |
| RGB LED (Red) | GPIO 25 |
| RGB LED (Green) | GPIO 26 |
| RGB LED (Blue) | GPIO 27 |
| Piezo Buzzer | GPIO 14 |

---

## **📊 Air Quality Thresholds**

| Severity | Condition | RGB LED | Buzzer |
|----------|-----------|----------|---------|
| 🟢 SAFE | Gas level close to baseline | Green | OFF |
| 🟡 MODERATE | Moderate increase above baseline | Yellow | 1000 Hz Warning Beep |
| 🔴 DANGER | High increase above baseline | Red | Continuous 2000 Hz Alarm |

---

## **🖥️ Sample Serial Monitor Output**

```csv
Timestamp,MQ-2 Value,Temperature,Humidity,Severity

00:01,220 ppm,23.4°C,49%,SAFE
00:02,280 ppm,23.5°C,50%,SAFE
00:03,420 ppm,23.6°C,49%,MODERATE
00:04,710 ppm,23.8°C,48%,DANGER
```

---

## **✨ Features**

- ✅ MQ-2 gas sensor monitoring with automatic baseline calibration
- ✅ Temperature and humidity monitoring using DHT22/DHT11
- ✅ Three-level air quality classification
- ✅ RGB LED status indication
- ✅ Multi-level buzzer alarm
- ✅ CSV data logging through the Serial Monitor
- ✅ Fully functional without an internet connection
- ✅ Low-cost and easy-to-build IoT solution

---

## **🚀 Applications**

- 🏠 Smart Homes
- 🏢 Offices
- 🏭 Industrial Safety
- 🏫 Schools & Colleges
- 🏥 Hospitals
- 🌱 Indoor Environmental Monitoring

---

## **🎯 Conclusion**

The **Smart Home Air Quality Monitor** is a reliable IoT solution for monitoring indoor environmental conditions in real time. By combining the **ESP32**, **MQ-2 Gas Sensor**, and **DHT22/DHT11**, the system detects harmful gas levels, measures temperature and humidity, and alerts users through RGB LEDs and a buzzer.

Its ability to perform local processing and data logging ensures continuous operation even without an internet connection, making it suitable for smart homes and other indoor environments where air quality is critical.

---

## **👨‍💻 Author**

VASU JAMWAL
