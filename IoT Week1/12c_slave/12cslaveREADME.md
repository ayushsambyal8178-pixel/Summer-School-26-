# 🔗 Arduino I2C Slave LED Control

A simple **Arduino I2C (Inter-Integrated Circuit) Slave** project that receives data from an I2C master device and controls an onboard LED accordingly. This project demonstrates basic I2C communication between two Arduino boards using the **Wire** library.

---

## 📖 Overview

This project configures an Arduino as an **I2C Slave** with the address **8**. It listens for data sent by an I2C master device. When the slave receives the value `1`, it turns the LED ON. Any other value turns the LED OFF.

This project is ideal for learning Arduino-to-Arduino communication using the I2C protocol.

---

## ✨ Features

- 🔄 Arduino configured as an I2C slave
- 📡 Receives data from an I2C master
- 💡 Controls an LED based on received data
- 📚 Demonstrates basic I2C communication
- ⚡ Uses the built-in Wire library

---

## 🛠 Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno (Slave) | 1 |
| Arduino Uno (Master) | 1 |
| LED | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |

---

## 📚 Library Used

```cpp
#include <Wire.h>
```

The **Wire** library comes pre-installed with the Arduino IDE.

---

## 🔌 Circuit Connections

### I2C Communication

| Master | Slave |
|--------|-------|
| SDA (A4) | SDA (A4) |
| SCL (A5) | SCL (A5) |
| GND | GND |

### LED Connection

| Arduino Pin | Component |
|-------------|-----------|
| D13 | LED (Built-in or External) |

> **Note:** Pin 13 can use the Arduino's built-in LED, so an external LED is optional.

---

## ⚙️ How It Works

1. The Arduino initializes as an I2C slave with address **8**.

```cpp
Wire.begin(8);
```

2. A receive callback function is registered.

```cpp
Wire.onReceive(receiveEvent);
```

3. Whenever the master sends data:

- If the received value is **1**
  - LED turns **ON**

- Otherwise
  - LED turns **OFF**

---

## 📟 Example Master Data

| Data Sent | LED State |
|-----------|-----------|
| 1 | ON |
| 0 | OFF |
| 5 | OFF |
| 255 | OFF |

---

## 📂 Project Structure

```text
Arduino-I2C-Slave-LED/
│
├── I2C_Slave_LED.ino
├── README.md
├── LICENSE
└── images/
    ├── circuit.png
    └── wiring.jpg
```

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/yourusername/Arduino-I2C-Slave-LED.git
```

### 2. Open the Sketch

Open:

```
I2C_Slave_LED.ino
```

### 3. Connect the Hardware

- Connect SDA to SDA (A4)
- Connect SCL to SCL (A5)
- Connect GND between both Arduinos

### 4. Upload the Code

Upload this sketch to the **slave Arduino**.

### 5. Upload a Master Sketch

Upload a compatible I2C master program to another Arduino to send values.

Example:

```cpp
Wire.beginTransmission(8);
Wire.write(1);
Wire.endTransmission();
```

---

## 📷 Project Preview

Add your project images inside the **images/** folder.

```text
images/
├── circuit.png
├── wiring.jpg
└── demo.gif
```

---

## 🎯 Applications

- Arduino-to-Arduino communication
- Home automation systems
- Distributed sensor networks
- Robotics
- Embedded systems learning
- I2C communication practice

---

## 🔮 Future Improvements

- Control multiple LEDs
- Relay switching via I2C
- LCD status display
- Servo motor control
- Sensor data sharing
- ESP32 I2C communication
- Raspberry Pi as I2C Master
- Error handling and acknowledgements
- Multi-slave communication
- IoT integration

---

## 📚 Concepts Demonstrated

- I2C Protocol
- Master-Slave Communication
- Wire Library
- Digital Output Control
- Event-Driven Programming
- Embedded Systems

---

## 🤝 Contributing

Contributions are welcome!

1. Fork this repository.
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

See the `LICENSE` file for details.

---

## ⭐ Support

If you found this project useful, please consider giving it a **⭐ Star** on GitHub. Your support helps improve and maintain the project.
