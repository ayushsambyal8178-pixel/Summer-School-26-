# 🌞 Arduino LDR-Based Automatic Light Control

A simple Arduino project that uses an **LDR (Light Dependent Resistor)** to automatically control an LED based on ambient light intensity. The LED turns **ON** when it is dark and **OFF** when there is sufficient light.

---

## 📖 Project Overview

This project demonstrates how to interface an **LDR sensor** with an **Arduino Uno**. The Arduino continuously reads the analog value from the LDR and compares it with a predefined threshold.

* 🌙 Low Light → LED ON
* ☀️ Bright Light → LED OFF

This project is ideal for beginners learning Arduino programming and sensor interfacing.

---

## ✨ Features

* Automatic light detection
* Real-time sensor value monitoring using Serial Monitor
* Energy-efficient LED control
* Beginner-friendly circuit and code
* Easy to customize threshold values

---

## 🛠️ Components Required

* Arduino Uno
* LDR (Light Dependent Resistor)
* LED
* 220Ω Resistor (for LED)
* 10kΩ Resistor (for voltage divider)
* Breadboard
* Jumper Wires
* USB Cable

---

## 🔌 Circuit Connections

| Component    | Arduino Pin                 |
| ------------ | --------------------------- |
| LDR Output   | A0                          |
| LED Positive | D10                         |
| LED Negative | GND (through 220Ω resistor) |
| LDR VCC      | 5V                          |
| LDR GND      | GND                         |

---

## 🖥️ Working Principle

1. The Arduino reads the analog value from the LDR connected to **A0**.
2. The sensor value is displayed on the **Serial Monitor**.
3. If the sensor value is **less than 500**, the environment is considered dark.
4. The Arduino turns the LED **ON**.
5. If the sensor value is **500 or greater**, the LED turns **OFF**.

---

## 💻 Sample Arduino Code

```cpp
int LDR_VAL = 0;

void setup() {
  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  LDR_VAL = analogRead(A0);
  Serial.println(LDR_VAL);

  if (LDR_VAL < 500) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }

  delay(10);
}
```

---

## 📊 Output

### Bright Environment

* LDR Value > 500
* LED OFF

### Dark Environment

* LDR Value < 500
* LED ON

---

## 📷 Project Images

### Block Programming

Add your block programming screenshot here.

```
images/block_programming.png
```

### Circuit Diagram

Add your circuit diagram here.

```
images/circuit_diagram.png
```

Recommended project structure:

```
Arduino-LDR-Light-Control/
│
├── Arduino_LDR.ino
├── README.md
└── images/
    ├── block_programming.png
    └── circuit_diagram.png
```

---

## 🚀 Applications

* Automatic street lights
* Smart home lighting
* Garden lighting systems
* Energy-saving lighting
* Light-sensitive alarm systems

---

## 🔧 Customization

You can modify the threshold value according to your environment.

```cpp
if (LDR_VAL < 500)
```

Increase or decrease **500** depending on the lighting conditions and sensor calibration.

---

## 📚 Learning Outcomes

* Reading analog sensor values
* Using the `analogRead()` function
* Working with conditional statements (`if-else`)
* Controlling digital outputs
* Serial communication with Arduino

---

## 👨‍💻 Author

**Your Name**

GitHub: https://github.com/your-username

---

## 📄 License

This project is licensed under the **MIT License**.

Feel free to use, modify, and share this project for educational purposes.

