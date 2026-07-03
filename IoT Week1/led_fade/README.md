# 💡 Arduino LED Fade Animation

An Arduino project that creates a smooth **LED fade animation** using **Pulse Width Modulation (PWM)**. Six LEDs gradually fade in and out one after another, creating an attractive lighting effect suitable for beginners learning PWM and LED control.

---

## 📖 Overview

This project demonstrates how to use the `analogWrite()` function to control LED brightness on PWM-enabled pins. Each LED smoothly transitions from OFF to maximum brightness and back to OFF before moving to the next LED.

This project is ideal for learning:

- PWM (Pulse Width Modulation)
- Arduino `analogWrite()`
- Loops and arrays
- LED brightness control

---

## ✨ Features

- 💡 Smooth LED fade-in effect
- 🌙 Smooth LED fade-out effect
- 🔄 Sequential LED animation
- ⚡ Uses Arduino PWM pins
- 🎓 Beginner-friendly Arduino project

---

## 🛠 Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| LEDs | 6 |
| 220Ω Resistors | 6 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

| Arduino Pin | LED |
|-------------|-----|
| D3 | LED 1 |
| D5 | LED 2 |
| D6 | LED 3 |
| D9 | LED 4 |
| D10 | LED 5 |
| D11 | LED 6 |

> Connect each LED through a **220Ω resistor** to prevent excessive current.

---

## ⚙️ How It Works

1. The Arduino initializes all six LEDs as outputs.
2. Each LED gradually increases in brightness from **0 to 255** using PWM.
3. The LED then gradually decreases back to **0**.
4. The animation moves to the next LED.
5. The sequence repeats continuously.

---

## 🔄 Animation Sequence

```text
LED 1  █████ Fade In → Fade Out

LED 2  █████ Fade In → Fade Out

LED 3  █████ Fade In → Fade Out

LED 4  █████ Fade In → Fade Out

LED 5  █████ Fade In → Fade Out

LED 6  █████ Fade In → Fade Out

Repeat...
```

---

## 📂 Project Structure

```text
Arduino-LED-Fade-Animation/
│
├── LED_Fade_Animation.ino
├── README.md
├── LICENSE
└── images/
    ├── circuit.png
    ├── prototype.jpg
    └── demo.gif
```

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/yourusername/Arduino-LED-Fade-Animation.git
```

### 2. Open the Sketch

Open the `.ino` file using the Arduino IDE.

### 3. Connect the Hardware

Connect six LEDs to the PWM pins according to the circuit diagram.

### 4. Upload the Code

- Select **Arduino Uno**
- Select the correct COM port
- Upload the sketch

The animation will begin automatically after upload.

---

## 🧠 Code Explanation

The LEDs are stored in an array:

```cpp
int leds[] = {3, 5, 6, 9, 10, 11};
```

Fade in:

```cpp
analogWrite(led, brightness);
```

Fade out:

```cpp
analogWrite(led, brightness);
```

Brightness ranges from:

```text
0 → 255 → 0
```

where:

- **0** = LED Off
- **255** = Maximum Brightness

---

## 📷 Project Preview

Add your project images inside the `images/` folder.

```text
images/
├── circuit.png
├── prototype.jpg
└── demo.gif
```

---

## 🎯 Applications

- LED lighting effects
- Decorative lighting
- Arduino PWM learning
- Beginner electronics projects
- Embedded systems education
- Interactive displays

---

## 🔮 Future Improvements

- RGB LED fading effects
- Multiple animation modes
- Button-controlled patterns
- Adjustable fade speed using a potentiometer
- Music-reactive LED effects
- NeoPixel LED integration
- Bluetooth-controlled lighting
- OLED display for animation selection

---

## 📚 Concepts Demonstrated

- PWM (Pulse Width Modulation)
- `analogWrite()` Function
- Arrays in Arduino
- `for` Loops
- LED Brightness Control
- Embedded Programming

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

See the `LICENSE` file for more information.

---

## ⭐ Support

If you found this project useful, please consider giving it a ⭐ **Star** on GitHub. Your support helps improve and maintain the project!
