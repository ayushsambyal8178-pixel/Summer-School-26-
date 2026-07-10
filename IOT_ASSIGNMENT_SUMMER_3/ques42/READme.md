<div align="center">

# **🌱 Automated Plant Watering System**

### *Smart IoT-Based Irrigation System using ESP32*

</div>

---

## **📌 Problem Statement**

A horticulture farmer in **Jammu & Kashmir** requires an automated irrigation system for a saffron farm. The system should continuously monitor soil moisture and irrigate the field only when the soil becomes dry. Since saffron is highly sensitive to overwatering, irrigation must be prevented whenever rainfall is detected.

Rain detection is achieved using two methods:

- 🌥️ **LDR (Light Dependent Resistor)** as a local overcast/rain indicator.
- ☁️ **OpenWeatherMap API** for real-time online weather information.

The system also supports **manual watering** with a **5-minute safety lockout** to prevent repeated activation. Sensor readings and watering events are automatically uploaded to **Google Sheets** over Wi-Fi for monitoring and record keeping.

---

## **💡 Solution Approach**

The **ESP32** continuously monitors **soil moisture** and **ambient light intensity**.

The soil moisture is classified into three levels:

- 🌵 **Dry**
- 🌿 **Optimal**
- 💧 **Wet**

An **LDR** acts as a local indicator of cloudy or rainy conditions, while the **OpenWeatherMap API** confirms actual weather conditions.

If the soil is **Dry** and **no rainfall is detected** by either source, the ESP32 activates a **relay** *(simulated using an LED in Wokwi)* to operate the irrigation pump.

A **manual override push button** allows watering at any time. After manual activation, the system enforces a **5-minute lockout** to prevent repeated watering.

A **16×2 I2C LCD** displays:

- Soil Moisture Percentage
- Soil Condition
- Time Since Last Watering

The ESP32 also uploads sensor readings and watering status to **Google Sheets** using a **Google Apps Script Web Application**.

---

## **✨ Features**

- ✅ Soil moisture monitoring
- ✅ Dry, Optimal, and Wet soil classification
- ✅ Automatic irrigation control
- ✅ LDR-based rain detection
- ✅ OpenWeatherMap API rain detection
- ✅ Manual watering override
- ✅ 5-minute manual override safety lockout
- ✅ 16×2 I2C LCD status display
- ✅ Wi-Fi connectivity
- ✅ Google Sheets cloud logging
- ✅ Serial Monitor diagnostics

---

## **🛠️ Hardware Components**

- ESP32 DevKit V1
- Soil Moisture Sensor
- LDR (Light Dependent Resistor)
- 10 kΩ Resistor (Voltage Divider)
- Push Button
- LED (Relay/Pump Simulation)
- 220 Ω Resistor
- 16×2 I2C LCD
- Breadboard
- Jumper Wires

---

## **🔌 Pin Connections**

| Component | ESP32 GPIO Pin |
|-----------|----------------|
| Soil Moisture Sensor (AO) | GPIO 34 |
| LDR Output | GPIO 35 |
| Push Button | GPIO 18 |
| Pump LED / Relay | GPIO 19 |
| LCD SDA | GPIO 21 |
| LCD SCL | GPIO 22 |
| LCD VCC | 5V |
| LCD GND | GND |

---

## **💻 Software Requirements**

- Arduino IDE
- ESP32 Board Package
- WiFi Library
- HTTPClient Library
- ArduinoJson Library
- LiquidCrystal_I2C Library
- OpenWeatherMap API Key
- Google Apps Script (Web App)
- Wokwi Simulator *(Optional)*

---

## **⚙️ Working Principle**

1. Connect the ESP32 to the Wi-Fi network.
2. Read the soil moisture sensor value.
3. Convert the reading into a moisture percentage.
4. Classify the soil as **Dry**, **Optimal**, or **Wet**.
5. Detect possible rainfall using:
   - 🌥️ LDR Sensor
   - ☁️ OpenWeatherMap API
6. If the soil is **Dry** and **no rain is detected**, activate the water pump.
7. Display system status on the **16×2 LCD**.
8. Upload sensor readings and watering status to **Google Sheets**.
9. Allow manual watering using the push button with a **5-minute lockout** after each activation.

---

## **🖥️ Sample Serial Monitor Output**

```text
-----------------------
Moisture : 22%
State    : DRY
LDR Rain : NO
API Rain : NO
Last Watered : 120 sec
Conditions OK - Starting Pump
-----------------------

-----------------------
Moisture : 75%
State    : WET
LDR Rain : YES
API Rain : YES
Last Watered : 580 sec
Watering Skipped - Rain Detected
```

---

## **🚀 Future Improvements**

- Replace the LED with a real relay module and water pump.
- Use a capacitive soil moisture sensor for improved accuracy.
- Integrate an RTC module for real-time timestamps.
- Support OTA (Over-the-Air) firmware updates.
- Add support for multiple irrigation zones.
- Develop a mobile dashboard for remote monitoring and control.

---

## **🎯 Conclusion**

The **Automated Plant Watering System** provides an efficient and intelligent irrigation solution for saffron farming. By combining **soil moisture sensing**, **local rain detection using an LDR**, and **real-time weather data from the OpenWeatherMap API**, the system prevents unnecessary watering while ensuring optimal soil conditions.

Cloud logging through **Google Sheets**, LCD status display, and manual override functionality make the system reliable, user-friendly, and suitable for modern smart agriculture applications.

---

## **👨‍💻 Author**

**Name:** **Ayush Sambyal**

**Project:** Automated Plant Watering System

**Course:** IoT Summer School 2026
