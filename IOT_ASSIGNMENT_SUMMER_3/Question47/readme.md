<div align="center">

# **❤️ IoT Patient Health Monitoring System**

### *Smart Health Monitoring using ESP32*

</div>

---

## **📌 Problem Statement**

Continuous monitoring of a patient's vital signs is essential for the early detection of potential health issues. This project simulates a basic **IoT Patient Health Monitoring System** using an **ESP32**. An **LDR sensor** is used as a simulated physiological input to generate **Heart Rate** and **Blood Oxygen (SpO₂)** values. The system analyzes these readings and activates an alert indicator whenever abnormal conditions are detected.

---

## **💡 Solution Approach**

The **ESP32** continuously reads analog values from an **LDR sensor** and applies a **moving average filter** to reduce fluctuations and improve stability.

The filtered sensor value is mapped to simulated:

- ❤️ Heart Rate (BPM)
- 🩸 Blood Oxygen Level (SpO₂)

The generated vital signs are continuously compared against predefined safety thresholds.

- 🟢 If all readings are within the normal range, the system remains in a safe state.
- 🔴 If any parameter exceeds the safe limits, an **LED alert** is activated.

All sensor readings and system status are displayed on the **Serial Monitor** every **2 seconds**.

---

## **✨ Features**

- ✅ Simulated Heart Rate monitoring
- ✅ Simulated SpO₂ monitoring
- ✅ Moving average filtering for stable readings
- ✅ Automatic abnormal condition detection
- ✅ LED-based health alert indicator
- ✅ Real-time Serial Monitor logging
- ✅ Simple and lightweight ESP32 implementation

---

## **🛠️ Hardware Components**

- ESP32 DevKit V1
- LDR (Light Dependent Resistor)
- 10 kΩ Resistor (Voltage Divider)
- LED
- 220 Ω Resistor
- Breadboard
- Jumper Wires

---

## **🔌 Pin Connections**

| Component | ESP32 GPIO Pin |
|-----------|----------------|
| LDR Output | GPIO 34 |
| Alert LED | GPIO 14 |
| LDR VCC | 3.3V |
| LDR GND | GND |

---

## **💻 Software Requirements**

- Arduino IDE
- ESP32 Board Package
- Arduino Core Library

---

## **📊 Monitoring Thresholds**

| Parameter | Normal Range | Alert Condition |
|-----------|--------------|-----------------|
| ❤️ Heart Rate | 50–120 bpm | Below 50 or Above 120 bpm |
| 🩸 SpO₂ | ≥ 94% | Below 94% |

---

## **⚙️ Working Principle**

1. Read the analog value from the **LDR sensor**.
2. Apply a **moving average filter** using the last five samples.
3. Convert the filtered value into simulated **Heart Rate** and **SpO₂** readings.
4. Compare the readings with predefined safety thresholds.
5. Turn the **Alert LED ON** if any parameter falls outside the safe range.
6. Display the current Heart Rate, SpO₂, and Alert Status on the **Serial Monitor** every **2 seconds**.

---

## **🖥️ Sample Serial Monitor Output**

```text
--------------------------
Heart Rate : 76 bpm
SpO₂       : 98 %
Alert      : NO
--------------------------

--------------------------
Heart Rate : 128 bpm
SpO₂       : 92 %
Alert      : YES
--------------------------
```

---

## **🚀 Future Improvements**

- Replace the LDR with a real **MAX30102 Pulse Oximeter Sensor**.
- Add body temperature monitoring.
- Upload patient data to the cloud using **MQTT** or **HTTP**.
- Develop a web or mobile dashboard for remote monitoring.
- Send SMS or email notifications during emergency conditions.
- Store historical patient data for trend analysis.

---

## **🎯 Conclusion**

The **IoT Patient Health Monitoring System** demonstrates how an **ESP32** can be used to simulate continuous monitoring of vital signs. By generating **Heart Rate** and **SpO₂** values from sensor input, applying filtering techniques, and detecting abnormal conditions, the system provides a simple yet effective demonstration of IoT-based healthcare monitoring.

With future integration of real biomedical sensors and cloud connectivity, this system can be extended into a practical remote patient monitoring solution for hospitals, clinics, and home healthcare.

---

## **👨‍💻 Author**

**Name:** **Ayush Sambyal**

**Project:** IoT Patient Health Monitoring System

**Course:** IoT Summer School 2026
