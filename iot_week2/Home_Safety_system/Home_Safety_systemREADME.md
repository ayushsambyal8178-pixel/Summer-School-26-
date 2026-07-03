# 🚗 Arduino-Based Smart Vehicle Safety & Monitoring System

An **Arduino Uno** project that integrates multiple sensors and actuators to create a **Smart Vehicle Safety & Monitoring System**. The system monitors temperature, ambient light, fuel level, detects motion, and provides a servo-based door locking mechanism with visual and audio alerts.

---

## 📌 Features

- 🌡️ **Temperature Monitoring**
  - Blue LED → Cold (<25°C)
  - Green LED → Normal/Warm (25°C–35°C)
  - Yellow LED → High Temperature (>35°C)

- 💡 **Automatic Headlight**
  - Uses an LDR sensor to detect darkness.
  - Turns on the headlight indicator LED automatically.

- ⛽ **Fuel Level Monitoring**
  - Detects low fuel level.
  - Red LED indicates low fuel.

- 🚨 **Motion Detection**
  - PIR/IR motion sensor detects movement.
  - Activates buzzer alarm.

- 🔐 **Door Lock System**
  - Push button to Lock
  - Push button to Unlock
  - Servo motor controls the door lock mechanism.

- 📊 **Serial Monitoring**
  - Displays:
    - Temperature
    - Fuel Level
    - Light Intensity
    - Door Lock Status

---

## 🛠️ Components Used

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Servo Motor (SG90) | 1 |
| Temperature Sensor (TMP36/LM35) | 1 |
| LDR (Light Sensor) | 1 |
| Fuel Sensor/Potentiometer | 1 |
| PIR/IR Motion Sensor | 1 |
| Push Buttons | 2 |
| LEDs (Blue, Green, Yellow, Orange, Red) | 5 |
| Buzzer | 1 |
| Resistors (220Ω) | 5 |
| Breadboard | 1 |
| Jumper Wires | Several |

---

## 🔌 Pin Configuration

| Arduino Pin | Component |
|-------------|-----------|
| A0 | Temperature Sensor |
| A1 | Fuel Sensor |
| A2 | LDR |
| D2 | PIR/IR Motion Sensor |
| D3 | Lock Button |
| D4 | Unlock Button |
| D5 | Blue LED |
| D6 | Green LED |
| D7 | Yellow LED |
| D8 | Headlight LED |
| D9 | Servo Motor |
| D10 | Fuel Warning LED |
| D11 | Buzzer |

---

## ⚙️ Working Principle

### Temperature Monitoring
The temperature sensor continuously measures the ambient temperature.

- **< 25°C** → Blue LED ON
- **25°C – 35°C** → Green LED ON
- **> 35°C** → Yellow LED ON

---

### Automatic Headlight

The LDR measures ambient light.

- Low light → Headlight LED ON
- Bright light → Headlight LED OFF

---

### Fuel Monitoring

The fuel sensor continuously checks the fuel level.

- Fuel value below threshold → Red LED ON
- Fuel level normal → Red LED OFF

---

### Motion Detection

The PIR/IR sensor detects nearby movement.

- Motion detected → Buzzer ON
- No motion → Buzzer OFF

---

### Door Lock System

Two push buttons control the servo motor.

- Lock Button → Servo rotates to **0°**
- Unlock Button → Servo rotates to **90°**

The status is displayed on the Serial Monitor.

---

## 📟 Serial Monitor Output

```
Temp: 27.30 Fuel: 420 Light: 635
Door Locked

Temp: 30.15 Fuel: 280 Light: 215
Door Unlocked
```

---

## 📷 Project Preview

> Add your circuit image here.

```
/images/project.png
```

---

## 🚀 Getting Started

1. Clone this repository

```bash
git clone https://github.com/yourusername/Smart-Vehicle-Safety-System.git
```

2. Open the project in **Arduino IDE**

3. Install the Servo library (already included with Arduino IDE)

```cpp
#include <Servo.h>
```

4. Upload the sketch to your Arduino Uno.

5. Open the Serial Monitor at **9600 baud**.

---

## 📂 Project Structure

```
Smart-Vehicle-Safety-System/
│
├── SmartVehicle.ino
├── README.md
├── LICENSE
└── images/
    └── project.png
```

---

## 🔮 Future Improvements

- GPS Tracking
- GSM Alerts
- Bluetooth Control
- RFID Authentication
- Fingerprint Door Lock
- OLED/LCD Display
- IoT Dashboard using ESP32
- Firebase Integration
- Mobile App Control

---

## 🎯 Applications

- Smart Vehicles
- Vehicle Security
- Driver Assistance
- Educational Projects
- Embedded Systems Learning
- IoT Prototype Development

---

## 👨‍💻 Author

**Your Name**

GitHub: https://github.com/yourusername

---

## 📜 License

This project is licensed under the **MIT License**.

Feel free to fork, improve, and contribute.

⭐ If you found this project helpful, don't forget to star the repository!
