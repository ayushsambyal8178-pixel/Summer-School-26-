<div align="center">

# **🌿 Smart Greenhouse Monitoring and Control System**

### *IoT-Based Environmental Monitoring and Automation using ESP32 & MQTT*

</div>

---

## **📌 Problem Statement**

Greenhouses require continuous monitoring of environmental conditions to ensure healthy plant growth. **Temperature, humidity, and light intensity** must remain within optimal ranges to maximize crop yield.

This project implements an **IoT-based Smart Greenhouse Monitoring and Control System** using an **ESP32** that automatically controls **heating, ventilation, and artificial lighting** while publishing sensor data to an **MQTT broker** for remote monitoring.

---

## **💡 Solution Approach**

The system uses an **ESP32** to monitor:

- 🌡️ Temperature using a **DHT22** sensor
- 💧 Humidity using a **DHT22** sensor
- ☀️ Ambient light intensity using an **LDR**

A **moving average filter** is applied to the LDR readings to reduce sensor noise and provide stable light measurements.

Based on predefined thresholds with **hysteresis**, the ESP32 automatically controls:

- 🔥 Heater
- 🌬️ Ventilation Fan
- 💡 Artificial Lighting

A **16×2 I2C LCD** displays environmental conditions and actuator status. The display automatically cycles through multiple information screens every **3 seconds**.

The ESP32 connects to a **Wi-Fi network** and publishes sensor readings and actuator states to the **HiveMQ Public MQTT Broker**, allowing real-time monitoring using MQTT clients such as **MQTT Explorer**.

---

## **✨ Features**

- ✅ Temperature monitoring using DHT22
- ✅ Humidity monitoring
- ✅ Ambient light monitoring using LDR
- ✅ Running average filter for light sensor
- ✅ Automatic heater control
- ✅ Automatic ventilation fan control
- ✅ Automatic greenhouse lighting control
- ✅ Bang-Bang control with hysteresis
- ✅ 16×2 I2C LCD status display
- ✅ Wi-Fi connectivity
- ✅ MQTT data publishing
- ✅ Real-time Serial Monitor diagnostics

---

## **🛠️ Hardware Components**

- ESP32 DevKit V1
- DHT22 Temperature & Humidity Sensor
- LDR (Light Dependent Resistor)
- 10 kΩ Resistor (Voltage Divider)
- 16×2 I2C LCD Display
- 3 LEDs (Heater, Fan, Light Simulation)
- 220 Ω Resistors
- Breadboard
- Jumper Wires

---

## **🔌 Pin Connections**

| Component | ESP32 GPIO Pin |
|-----------|----------------|
| DHT22 Data | GPIO 4 |
| LDR Output | GPIO 34 |
| Heater LED | GPIO 25 |
| Fan LED | GPIO 26 |
| Light LED | GPIO 27 |
| LCD SDA | GPIO 21 |
| LCD SCL | GPIO 22 |
| LCD VCC | 5V |
| LCD GND | GND |

---

## **💻 Software Requirements**

- Arduino IDE
- ESP32 Board Package
- WiFi Library
- PubSubClient Library
- LiquidCrystal_I2C Library
- DHT Sensor Library
- Wire Library
- MQTT Explorer *(or any MQTT client)*

---

## **📡 MQTT Topics**

| Topic | Description |
|--------|-------------|
| `greenhouse/temp` | Temperature (°C) |
| `greenhouse/humidity` | Humidity (%) |
| `greenhouse/light` | Average LDR Value |
| `greenhouse/heater` | Heater Status |
| `greenhouse/fan` | Fan Status |
| `greenhouse/lightStatus` | Artificial Light Status |

---

## **⚙️ Working Principle**

1. Connect the ESP32 to the Wi-Fi network.
2. Read **temperature** and **humidity** from the DHT22 sensor.
3. Read ambient light using the LDR.
4. Apply a **moving average filter** to stabilize light readings.
5. Apply **hysteresis-based control**:
   - Turn on the **heater** when the temperature falls below the lower threshold.
   - Turn on the **ventilation fan** when temperature or humidity exceeds the upper threshold.
   - Turn on **artificial lighting** when ambient light is insufficient.
6. Display sensor values and actuator status on the **16×2 LCD**.
7. Publish sensor readings and actuator states to the **HiveMQ MQTT Broker** every **3 seconds**.
8. Print diagnostic information to the **Serial Monitor**.

---

## **🖥️ Sample Serial Monitor Output**

```text
------ GREENHOUSE DATA ------
Temperature: 20.5 C
Humidity   : 62.3 %
Light Avg  : 1245

Heater:0  Fan:0  Light:1
-----------------------------

------ GREENHOUSE DATA ------
Temperature: 16.8 C
Humidity   : 58.1 %
Light Avg  : 980

Heater:1  Fan:0  Light:1
-----------------------------
```

---

## **🚀 Future Improvements**

- Replace LEDs with real relay modules controlling greenhouse equipment.
- Add soil moisture sensing with automated irrigation.
- Store historical sensor data in a cloud database.
- Implement MQTT subscriptions for remote control.
- Develop a web dashboard for monitoring and analytics.
- Send SMS or email alerts during abnormal environmental conditions.

---

## **🎯 Conclusion**

The **Smart Greenhouse Monitoring and Control System** provides an efficient IoT solution for maintaining optimal environmental conditions inside a greenhouse. By combining **temperature, humidity, and light monitoring** with **automatic control of heating, ventilation, and lighting**, the system improves plant health while reducing manual intervention.

The integration of **Wi-Fi** and **MQTT** enables real-time remote monitoring, making the system suitable for modern smart agriculture and precision farming applications.

---

## **👨‍💻 Author**

**Name:** **Ayush SAmbyaL**

**Project:** Smart Greenhouse Monitoring and Control System

**Course:** IoT Summer School 2026
