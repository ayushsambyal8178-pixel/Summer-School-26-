# 🏠 Arduino-Based Smart Home Safety & Security System

A Smart Home Safety & Security System built using an **Arduino Uno** that monitors the home environment and improves safety through temperature monitoring, gas leak detection, motion detection, automatic lighting, and a servo-controlled smart door lock.

---

## 📖 Overview

This project integrates multiple sensors and actuators to create a low-cost home automation and security solution. It continuously monitors environmental conditions and provides visual and audible alerts when abnormal situations are detected.

---

## ✨ Features

- 🌡️ **Room Temperature Monitoring**
  - Blue LED → Cool Temperature (<25°C)
  - Green LED → Normal Temperature (25–35°C)
  - Yellow LED → High Temperature (>35°C)

- 🔥 **Gas/Smoke Leak Detection**
  - Detects gas or smoke using an analog gas sensor.
  - Red LED and buzzer activate during a gas leak.

- 🚨 **Intruder Detection**
  - PIR motion sensor detects movement.
  - Buzzer sounds when an intruder is detected.

- 💡 **Automatic Room Lighting**
  - LDR automatically turns on the room light when it becomes dark.

- 🔐 **Smart Door Lock**
  - Lock and unlock the door using push buttons.
  - Servo motor controls the locking mechanism.

- 📟 **Serial Monitoring**
  - Displays temperature, gas level, light intensity, and motion status in the Arduino Serial Monitor.

---

## 🛠 Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Servo Motor (SG90) | 1 |
| Temperature Sensor (TMP36/LM35) | 1 |
| Gas/Smoke Sensor (MQ Series or Potentiometer for Simulation) | 1 |
| LDR (Light Dependent Resistor) | 1 |
| PIR Motion Sensor | 1 |
| Push Buttons | 2 |
| LEDs (Blue, Green, Yellow, White/Orange, Red) | 5 |
| Piezo Buzzer | 1 |
| 220Ω Resistors | 5 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

## 🔌 Pin Connections

| Arduino Pin | Component |
|-------------|-----------|
| A0 | Temperature Sensor |
| A1 | Gas/Smoke Sensor |
| A2 | LDR |
| D2 | PIR Motion Sensor |
| D3 | Lock Button |
| D4 | Unlock Button |
| D5 | Blue LED |
| D6 | Green LED |
| D7 | Yellow LED |
| D8 | Automatic Room Light LED |
| D9 | Servo Motor |
| D10 | Gas Alert LED |
| D11 | Buzzer |

---

## ⚙️ System Operation

### 🌡 Temperature Monitoring

The system continuously reads the temperature sensor.

| Temperature | Indicator |
|-------------|-----------|
| Below 25°C | Blue LED |
| 25°C – 35°C | Green LED |
| Above 35°C | Yellow LED |

---

### 💡 Automatic Room Light

The LDR measures ambient light intensity.

- Dark Environment → Room Light ON
- Bright Environment → Room Light OFF

---

### 🔥 Gas Leak Detection

The gas sensor monitors harmful gas or smoke.

- Gas level above threshold
  - Red LED ON
  - Buzzer ON

- Gas level normal
  - Red LED OFF
  - Buzzer OFF

---

### 🚨 Motion Detection

The PIR sensor detects human movement.

When motion is detected:

- Buzzer sounds
- "Intruder Detected!" is displayed on the Serial Monitor

---

### 🔐 Smart Door Lock

Two push buttons control the servo motor.

| Button | Action |
|--------|--------|
| Lock | Servo rotates to 0° |
| Unlock | Servo rotates to 90° |

Door status is also printed on the Serial Monitor.

---

## 📊 Serial Monitor Output

Example:

```text
Temperature: 27.80 C | Gas: 182 | Light: 645 | Motion: Safe

Temperature: 38.10 C | Gas: 425 | Light: 180 | Motion: Detected

Door Locked

Door Unlocked
```

---

## 📁 Project Structure

```
Smart-Home-Safety-System/
│
├── SmartHomeSafety.ino
├── README.md
├── LICENSE
├── images/
│   └── circuit.png
└── docs/
    └── report.pdf
```

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/yourusername/Smart-Home-Safety-System.git
```

### 2. Open Arduino IDE

Open:

```
SmartHomeSafety.ino
```

### 3. Connect the Hardware

Wire the sensors according to the pin configuration table.

### 4. Upload the Code

Select:

- Board: Arduino Uno
- Port: COM Port

Upload the sketch.

### 5. Open the Serial Monitor

Set the baud rate to:

```
9600
```

---

## 📷 Project Preview

Add your circuit diagram or project photo here.

```
images/circuit.png
```

Example:

```
Smart-Home-Safety-System
│
├── images
│   ├── circuit.png
│   ├── prototype.jpg
│   └── demo.gif
```

---

## 🎯 Applications

- Smart Home Automation
- Home Intruder Detection
- Fire & Gas Leak Warning System
- Elderly Home Monitoring
- Educational Arduino Projects
- Embedded Systems Learning

---

## 🔮 Future Improvements

- ESP32 Wi-Fi Integration
- Mobile App Control
- Blynk Dashboard
- Firebase Database
- GSM SMS Alerts
- Email Notifications
- RFID Door Access
- Fingerprint Authentication
- LCD/OLED Display
- Voice Assistant Integration (Google Assistant/Alexa)

---

## 📚 Technologies Used

- Arduino IDE
- Embedded C/C++
- Servo Library
- Arduino Uno
- Analog & Digital Sensors

---

## 🤝 Contributing

Contributions are welcome!

1. Fork the repository
2. Create a new feature branch
3. Commit your changes
4. Push to your branch
5. Open a Pull Request

---

## 👨‍💻 Author

**Your Name**

GitHub: https://github.com/yourusername

---

## 📄 License

This project is licensed under the **MIT License**.

---

⭐ **If you found this project helpful, please give it a Star on GitHub!**
