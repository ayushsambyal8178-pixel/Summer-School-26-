# 🔐 Arduino Password Protected Door Lock System

A secure **Arduino-based Password Protected Door Lock System** that uses a **4×4 Matrix Keypad**, **16×2 LCD**, and **Servo Motor** to control access. Users enter a predefined password to unlock the door. If the password is correct, the servo opens the door for a few seconds before automatically locking it again.

---

## 📖 Overview

This project demonstrates a simple electronic access control system using Arduino. It is designed for educational purposes and introduces concepts such as keypad interfacing, password authentication, LCD communication, and servo motor control.

---

## ✨ Features

- 🔢 Password authentication using a 4×4 keypad
- 🔐 Servo-controlled electronic door lock
- 📺 Real-time status display on a 16×2 LCD
- ⏳ Automatic door locking after a timeout
- ❌ Invalid password detection
- 🔒 Manual door closing using the `#` key

---

## 🛠 Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| 4×4 Matrix Keypad | 1 |
| Servo Motor (SG90/MG90S) | 1 |
| 16×2 LCD | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

## 📚 Libraries Used

```cpp
#include <Keypad.h>
#include <LiquidCrystal.h>
#include <Servo.h>
```

Install the following libraries through the Arduino Library Manager:

- Keypad
- LiquidCrystal
- Servo (included with Arduino IDE)

---

## 🔌 Pin Configuration

### Keypad

| Keypad Pin | Arduino Pin |
|------------|-------------|
| Row 1 | D0 |
| Row 2 | D1 |
| Row 3 | D2 |
| Row 4 | D3 |
| Column 1 | D4 |
| Column 2 | D5 |
| Column 3 | D6 |
| Column 4 | D7 |

### LCD

| LCD Pin | Arduino Pin |
|----------|-------------|
| RS | A0 |
| EN | A1 |
| D4 | A2 |
| D5 | A3 |
| D6 | A4 |
| D7 | A5 |

### Servo

| Servo Wire | Arduino Pin |
|-------------|-------------|
| Signal | D9 |
| VCC | 5V |
| GND | GND |

---

## 🔑 Default Password

```text
1234
```

You can change the password by modifying:

```cpp
char Master[Password_Length] = "1234";
```

---

## ⚙️ How It Works

1. System initializes and displays:

```
Protected Door
Loading.........
```

2. LCD prompts the user:

```
Enter Password
```

3. User enters a 4-digit password using the keypad.

4. If the password is correct:

- Servo rotates to unlock the door.
- LCD displays:

```
Door is Open
```

- Door remains open for 5 seconds.
- Servo automatically locks the door.

5. If the password is incorrect:

```
Wrong Password
```

6. When the door is open, pressing the **#** key closes and locks the door immediately.

---

## 📸 LCD Output

### Startup

```text
Protected Door
Loading.........
```

---

### Waiting for Password

```text
Enter Password
1234
```

---

### Correct Password

```text
Door is Open
```

---

### Wrong Password

```text
Wrong Password
```

---

### Door Closed

```text
Door is closed
```

---

## 📂 Project Structure

```
Password-Door-Lock/
│
├── PasswordDoorLock.ino
├── README.md
├── LICENSE
├── images/
│   ├── circuit.png
│   ├── prototype.jpg
│   └── demo.gif
└── docs/
    └── report.pdf
```

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/yourusername/Password-Door-Lock.git
```

### 2. Open the Arduino Sketch

Open:

```
PasswordDoorLock.ino
```

### 3. Install Required Libraries

Using the Arduino IDE Library Manager, install:

- Keypad
- LiquidCrystal

The Servo library is included by default.

### 4. Connect the Hardware

Wire the keypad, LCD, and servo according to the pin configuration above.

### 5. Upload the Code

- Select **Arduino Uno**
- Choose the correct COM Port
- Upload the sketch

---

## 🧠 Program Flow

```text
Start
   │
   ▼
Initialize LCD & Servo
   │
   ▼
Display "Enter Password"
   │
   ▼
Read Keypad Input
   │
   ▼
Password Correct?
 ┌───────────────┐
 │               │
Yes             No
 │               │
 ▼               ▼
Open Door    Wrong Password
 │               │
 ▼               ▼
Wait 5 sec   Clear Screen
 │
 ▼
Close Door
 │
 ▼
Repeat
```

---

## 🎯 Applications

- Smart Home Door Lock
- Office Access Control
- Hotel Room Security
- Classroom Security
- Laboratory Access
- Educational Arduino Projects

---

## 🔮 Future Improvements

- RFID Authentication
- Fingerprint Sensor Integration
- Bluetooth Mobile Unlock
- Wi-Fi Remote Access (ESP32)
- Face Recognition
- OLED Display
- GSM SMS Notifications
- Mobile App Control
- EEPROM Password Storage
- Multiple User Passwords

---

## 📷 Project Preview

Add your project images inside the **images/** folder.

Example:

```
images/
├── circuit.png
├── prototype.jpg
└── demo.gif
```

---

## 🤝 Contributing

Contributions are welcome!

1. Fork the repository.
2. Create a feature branch.
3. Commit your changes.
4. Push your branch.
5. Submit a Pull Request.

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

If you found this project helpful, please consider giving it a **⭐ Star** on GitHub. It helps others discover the project and supports future improvements.
