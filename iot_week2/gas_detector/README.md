# Gas Leakage Detection System using Arduino

## 📌 Project Overview

This project is a simple **Gas Leakage Detection System** built using an **Arduino Uno** and a **gas sensor (MQ series, e.g., MQ-2)**. The system continuously monitors the gas concentration in the environment. If the gas level exceeds a predefined threshold, it activates an LED and a buzzer to alert nearby users.

---

## 🚀 Features

* Detects combustible gas and smoke.
* Real-time gas value monitoring through the Serial Monitor.
* Automatic LED indication during gas leakage.
* Buzzer alarm for immediate warning.
* Easy to build and suitable for beginners.

---

## 🛠️ Components Required

* Arduino Uno
* MQ-2 Gas Sensor (or compatible MQ sensor)
* LED
* 220Ω Resistor
* Buzzer
* Breadboard
* Jumper Wires
* USB Cable

---

## 🔌 Circuit Connections

| Component          | Arduino Pin |
| ------------------ | ----------- |
| MQ-2 Analog Output | A0          |
| LED                | D4          |
| Buzzer             | D7          |
| VCC                | 5V          |
| GND                | GND         |

---

## 📂 Arduino Code

The program performs the following operations:

1. Reads the analog gas sensor value from **A0**.
2. Displays the gas value on the Serial Monitor.
3. Compares the value with a threshold of **600**.
4. If the gas value is greater than **600**:

   * Turns ON the LED.
   * Activates the buzzer.
5. Otherwise:

   * Turns OFF both the LED and buzzer.

---

## ⚙️ Threshold

```cpp
if (GAS_VAL > 600)
```

You can adjust the threshold depending on your sensor calibration and environment.

---

## ▶️ How to Run

1. Connect all components as shown above.
2. Open the Arduino IDE.
3. Upload the code to your Arduino Uno.
4. Open the **Serial Monitor** at **9600 baud**.
5. Expose the gas sensor to smoke or combustible gas.
6. When the gas level exceeds the threshold, the LED and buzzer will activate.

---

## 📷 Output

* **Normal Condition**

  * LED: OFF
  * Buzzer: OFF
  * Serial Monitor displays gas values below the threshold.

* **Gas Leakage Detected**

  * LED: ON
  * Buzzer: ON
  * Serial Monitor displays gas values above the threshold.

---

## 📁 Project Structure

```
Gas-Leakage-Detection/
│
├── Gas_Leakage_Detection.ino
├── README.md
└── images/
    ├── circuit_diagram.png
    └── output.jpg
```

---

## 🔮 Future Improvements

* Send SMS alerts using GSM.
* IoT monitoring with ESP8266/ESP32.
* Display gas levels on an LCD or OLED.
* Upload sensor data to the cloud.
* Mobile app notifications.

---

## 👨‍💻 Author

**Your Name**

GitHub: https://github.com/your-username

---

## 📜 License

This project is licensed under the MIT License. Feel free to use, modify, and distribute it for educational and personal projects.
