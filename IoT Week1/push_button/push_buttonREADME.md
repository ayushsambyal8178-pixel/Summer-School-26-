# ⚡ Arduino Reaction Time Game

An interactive **Arduino Reaction Time Game** that tests a player's reflexes using three LEDs and a push button. The game displays a random LED sequence before signaling the player to press the button as quickly as possible. The reaction time is then measured and displayed on the Serial Monitor.

---

## 📖 Overview

This project is a simple reaction time tester built with an Arduino Uno. It uses a random LED sequence to keep the player alert before displaying a green LED as the signal to react. The elapsed time between the green LED turning on and the button press is recorded as the player's reaction time.

This project is ideal for beginners learning Arduino programming, LEDs, buttons, random number generation, and timing functions.

---

## ✨ Features

- 🎮 Interactive reaction time game
- 🔴🟡🟢 Random LED light sequence
- ⏱ Measures player reaction time in milliseconds
- 📊 Displays results on the Serial Monitor
- 🔀 Random delay for unpredictable gameplay
- 🎯 Simple and beginner-friendly Arduino project

---

## 🛠 Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Red LED | 1 |
| Yellow LED | 1 |
| Green LED | 1 |
| Push Button | 1 |
| 220Ω Resistors | 3 |
| 10kΩ Resistor (optional) | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |

---

## 🔌 Circuit Connections

| Arduino Pin | Component |
|-------------|-----------|
| D8 | Red LED |
| D9 | Yellow LED |
| D10 | Green LED |
| D2 | Push Button |
| GND | Button Ground |
| 5V | Power Supply |

> **Note:** The button uses `INPUT_PULLUP`, so no external pull-up resistor is required.

---

## ⚙️ How It Works

1. The game starts with all LEDs turned off.
2. After a short delay, the Arduino flashes random LEDs in a random order.
3. Once the sequence finishes, the green LED lights up.
4. The player must press the button as quickly as possible.
5. Arduino measures the reaction time using `millis()`.
6. The reaction time is displayed on the Serial Monitor.

---

## 📊 Example Output

```text
Reaction Time Game

Reaction Time: 243 ms

Reaction Time: 198 ms

Reaction Time: 312 ms
```

---

## 📂 Project Structure

```text
Reaction-Time-Game/
│
├── ReactionTimeGame.ino
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
git clone https://github.com/yourusername/Reaction-Time-Game.git
```

### 2. Open the Project

Open the `.ino` file using the Arduino IDE.

### 3. Connect the Hardware

Wire the LEDs and push button according to the circuit diagram.

### 4. Upload the Code

- Select **Arduino Uno**
- Select the correct COM port
- Upload the sketch

### 5. Open the Serial Monitor

Set the baud rate to:

```text
9600
```

Then press the reset button to start the game.

---

## 🎮 Gameplay

1. Wait while the LEDs flash randomly.
2. Stay focused.
3. When the **green LED** lights up, immediately press the button.
4. Your reaction time will be displayed on the Serial Monitor.
5. Try to beat your best score!

---

## 🧠 How Reaction Time is Calculated

The game records the time when the green LED turns on:

```cpp
startTime = millis();
```

When the button is pressed:

```cpp
reactionTime = millis() - startTime;
```

The result is displayed in **milliseconds (ms)**.

---

## 🎯 Applications

- Reaction speed testing
- Arduino programming practice
- STEM education
- Embedded systems learning
- Classroom demonstrations
- Electronics workshops

---

## 🔮 Future Improvements

- LCD or OLED display for reaction time
- OLED scoreboard
- High score memory using EEPROM
- Multiple difficulty levels
- Sound effects with a buzzer
- RGB LED animations
- Multiplayer mode
- Bluetooth score tracking
- ESP32 web leaderboard
- Mobile app integration

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

## 📚 Concepts Demonstrated

- Arduino Digital I/O
- Random Number Generation
- Button Input with `INPUT_PULLUP`
- Timing with `millis()`
- Serial Communication
- LED Control
- Basic Game Logic

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

If you found this project useful, please consider giving it a **St
