# 🚪 Arduino Automatic Gate Control System Using PIR Sensor

An Arduino-based **Automatic Gate Control System** that uses a **PIR Motion Sensor** to detect movement and automatically open or close a gate using a **servo motor**. A **16×2 LCD** displays the gate status in real time.

---

## 📖 Overview

This project demonstrates a simple smart gate automation system. When the PIR sensor detects motion, the servo motor opens the gate, and the LCD displays **"Gate OPEN"**. When no motion is detected, the gate closes automatically, and the LCD displays **"Gate CLOSE"**.

This project is ideal for beginners learning Arduino, sensors, LCD interfacing, and servo motor control.

---

## ✨ Features

- 🚶 Motion detection using a PIR sensor
- 🚪 Automatic gate opening and closing
- 🔄 Servo motor control
- 📺 Real-time gate status on a 16×2 LCD
- ⚡ Simple and low-cost automation project

---

## 🛠 Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| PIR Motion Sensor | 1 |
| Servo Motor (SG90) | 1 |
| 16×2 LCD (I2C/Adafruit LiquidCrystal) | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| Arduino Pin | Component |
|-------------|-----------|
| D3 | PIR Sensor Output |
| D6 | Servo Signal |
| SDA | LCD SDA |
| SCL | LCD SCL |
| 5V | LCD, PIR, Servo VCC |
| GND | Common Ground |

---

## ⚙️ Working Principle

1. The PIR sensor continuously monitors movement.
2. When motion is detected:
   - Servo rotates to **90°**.
   - Gate opens.
   - LCD displays:

```
1
Gate OPEN
```

3. When no motion is detected:
   - Servo rotates back to **0°**.
   - Gate closes.
   - LCD displays:

```
0
Gate CLOSE
```

The first row of the LCD displays the PIR sensor status (`0` or `1`).

---

## 📂 Project Structure

```
Automatic-Gate-Control/
│
├── AutomaticGate.ino
├── README.md
├── LICENSE
└── images/
    ├── circuit.png
    └── prototype.jpg
```

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/yourusername/Automatic-Gate-Control.git
```

### 2. Open the Project

Open the `.ino` file in the Arduino IDE.

### 3. Install Required Library

Install the **Adafruit LiquidCrystal** library using the Arduino Library Manager.

Required libraries:

- Adafruit LiquidCrystal
- Servo (included with Arduino IDE)

---

### 4. Upload the Code

- Select **Arduino Uno**
- Select the correct COM Port
- Upload the sketch

---

### 5. Run the Project

Open the Serial Monitor (optional) or observe the LCD display.

Move your hand in front of the PIR sensor to test the automatic gate.

---

## 📷 Project Preview

Add your circuit diagram or project images here.

```
images/circuit.png
```

Example:

```
Automatic-Gate-Control/
│
├── images
│   ├── circuit.png
│   ├── prototype.jpg
│   └── demo.gif
```

---

## 📸 Expected Output

### Motion Detected

```
LCD Display

1
Gate OPEN
```

- Servo rotates to **90°**
- Gate opens automatically

---

### No Motion

```
LCD Display

0
Gate CLOSE
```

- Servo rotates to **0°**
- Gate closes automatically

---

## 📚 Libraries Used

```cpp
#include <Adafruit_LiquidCrystal.h>
#include <Servo.h>
```

---

## 🎯 Applications

- Smart Home Gate Automation
- Automatic Parking Gates
- Office Entrance Control
- Visitor Detection
- Home Security Projects
- Arduino Learning Projects

---

## 🔮 Future Improvements

- RFID Access Control
- Fingerprint Authentication
- GSM SMS Alerts
- ESP32 IoT Monitoring
- Mobile App Control
- Face Recognition
- Buzzer Alarm
- IR Obstacle Detection
- Camera Surveillance
- Cloud Data Logging

---

## 🧠 Skills Demonstrated

- Arduino Programming
- Embedded Systems
- Servo Motor Control
- PIR Motion Detection
- LCD Interfacing
- Home Automation
- Sensor Integration

---

## 🤝 Contributing

Contributions are welcome!

1. Fork the repository.
2. Create a feature branch.
3. Commit your changes.
4. Push your branch.
5. Open a Pull Request.

---

## 👨‍💻 Author

**Your Name**

GitHub: https://github.com/yourusername

---

## 📄 License

This project is licensed under the **MIT License**.

---

⭐ If you found this project useful, consider giving it a **Star** on GitHub!
