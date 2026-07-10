<div align="center">

# **💧 IoT Water Tank Level Monitoring System**

### *Smart Water Level Monitoring using ESP32 & ThingSpeak*

</div>

---

## **📌 Problem Statement**

Efficient water management requires continuous monitoring of water tank levels to prevent **overflow** and **water shortages**. This project implements an **IoT-based Water Tank Level Monitoring System** using an **ESP32** and an **HC-SR04 Ultrasonic Sensor**. The measured water level is displayed locally through **LEDs** and a **buzzer**, while the data is uploaded to the **ThingSpeak Cloud Platform** for remote monitoring and visualization.

---

## **💡 Solution Approach**

The **ESP32** measures the distance between the ultrasonic sensor and the water surface using the **HC-SR04 Ultrasonic Sensor**.

To improve measurement accuracy, a **rolling average filter** is applied to the last **five distance readings**, reducing fluctuations caused by sensor noise.

Based on the averaged distance, the system classifies the tank status into:

- 🟢 **Normal**
- 🟡 **Warning**
- 🔴 **Critical**

Three LEDs provide visual indication of the tank level, while a buzzer generates different alert patterns depending on the detected condition.

The ESP32 connects to a **Wi-Fi network** and uploads the averaged water level and tank status to a **ThingSpeak Channel** every **15 seconds**, enabling cloud-based monitoring and historical data logging.

---

## **✨ Features**

- ✅ Water level measurement using HC-SR04 Ultrasonic Sensor
- ✅ Rolling average filtering for stable measurements
- ✅ Three-level water status detection
  - 🟢 Normal
  - 🟡 Warning
  - 🔴 Critical
- ✅ Visual indication using Green, Yellow, and Red LEDs
- ✅ Audible alerts using a buzzer
- ✅ Wi-Fi connectivity
- ✅ Cloud logging to ThingSpeak
- ✅ Real-time Serial Monitor diagnostics

---

## **🛠️ Hardware Components**

- ESP32 DevKit V1
- HC-SR04 Ultrasonic Sensor
- Green LED
- Yellow LED
- Red LED
- Passive Buzzer
- 220 Ω Resistors
- Breadboard
- Jumper Wires

---

## **🔌 Pin Connections**

| Component | ESP32 GPIO Pin |
|-----------|----------------|
| HC-SR04 Trigger | GPIO 5 |
| HC-SR04 Echo | GPIO 18 |
| Buzzer | GPIO 4 |
| Green LED | GPIO 12 |
| Yellow LED | GPIO 13 |
| Red LED | GPIO 14 |
| Sensor VCC | 5V |
| Sensor GND | GND |

---

## **💻 Software Requirements**

- Arduino IDE
- ESP32 Board Package
- WiFi Library
- HTTPClient Library
- ThingSpeak Account
- ThingSpeak Channel with API Write Key

---

## **📊 Water Level Thresholds**

| Distance from Sensor | Tank Status | LED | Buzzer |
|----------------------|-------------|-----|---------|
| **> 30 cm** | 🟢 Normal | Green | OFF |
| **15–30 cm** | 🟡 Warning | Yellow | Intermittent Tone |
| **< 15 cm** | 🔴 Critical | Red | Continuous Tone |

---

## **☁️ ThingSpeak Fields**

| Field | Data |
|--------|------|
| **Field 1** | Average Distance (cm) |
| **Field 2** | Water Level Status *(0 = Normal, 1 = Warning, 2 = Critical)* |

---

## **⚙️ Working Principle**

1. Connect the ESP32 to the Wi-Fi network.
2. Measure the water level using the **HC-SR04 Ultrasonic Sensor**.
3. Calculate the rolling average of the last **five distance measurements**.
4. Classify the tank status as **Normal**, **Warning**, or **Critical**.
5. Update the LEDs and buzzer according to the detected water level.
6. Display live sensor readings and system status on the **Serial Monitor**.
7. Upload the averaged distance and tank status to the **ThingSpeak Cloud** every **15 seconds**.

---

## **🖥️ Sample Serial Monitor Output**

```text
Connecting WiFi...
WiFi Connected!

Raw: 42.8 cm | Avg: 41.9
Level: NORMAL

Sending to ThingSpeak...
HTTP Response: 200

----------------------------------

Raw: 22.6 cm | Avg: 24.1
Level: WARNING

Sending to ThingSpeak...
HTTP Response: 200

----------------------------------

Raw: 10.8 cm | Avg: 11.6
Level: CRITICAL

Sending to ThingSpeak...
HTTP Response: 200
```

---

## **🚀 Future Improvements**

- Display water level percentage on an LCD or OLED display.
- Send SMS or email alerts during critical water levels.
- Add an automatic water pump controller.
- Integrate MQTT for real-time cloud communication.
- Develop a web or mobile dashboard for remote monitoring.
- Store long-term historical data for analytics and forecasting.

---

## **🎯 Conclusion**

The **IoT Water Tank Level Monitoring System** provides an efficient and reliable solution for monitoring water storage tanks in real time. By combining the **ESP32**, **HC-SR04 Ultrasonic Sensor**, **LED indicators**, and **ThingSpeak Cloud**, the system helps prevent water overflow and shortages through continuous monitoring and timely alerts.

Its cloud connectivity, stable sensor measurements, and simple hardware design make it suitable for homes, industries, farms, and smart water management applications.

---

## **👨‍💻 Author**

**Name:** **Ayush Sambyal**

**Project:** IoT Water Tank Level Monitoring System

**Course:** IoT Summer School 2026
