# 🚗 Gesture Controlled Car

![Platform](https://img.shields.io/badge/Platform-Embedded--Systems-blue?logo=arduino)
![Made With](https://img.shields.io/badge/Built%20with-Arduino-orange?logo=arduino)
![Wireless](https://img.shields.io/badge/Wireless-RF%20434MHz-yellow?logo=wifi)
![Status](https://img.shields.io/badge/Status-Working%20Module-brightgreen)


A real-time, gesture-based wireless robotic car system that eliminates the need for buttons or joysticks. The car is controlled entirely through **hand gestures**, using an **accelerometer** and **RF communication**. Ideal for beginners in robotics, embedded systems, and wireless communication.

---

## ✨ Features

- 📡 **Wireless Control** via RF transmitter & receiver.
- 🤚 **3-Axis Gesture Detection** using an accelerometer sensor.
- 🧠 **Arduino-based processing** on both transmitter and receiver ends.
- ⚙️ **Motor driver logic** for smooth movement (forward, backward, left, right).
- 🔋 **Portable & battery-powered** system using rechargeable 9V batteries.
- 🔄 **Fully embedded solution** with all wiring, mounting, and soldering done manually.

---

## 🔧 Components Used

| Component                   | Quantity | Description                                                                 |
|----------------------------|----------|-----------------------------------------------------------------------------|
| **Arduino ATmega32 Board** | 1        | Microcontroller for processing gestures and driving motors                 |
| **3-Axis Accelerometer**   | 1        | Detects hand orientation for gesture control                               |
| **RF Transmitter (434 MHz)** | 1      | Sends data from accelerometer to receiver                                  |
| **RF Receiver (434 MHz)**  | 1        | Receives gesture data and controls motor driver                            |
| **L293D Motor Driver Board** | 1      | Drives 2 DC motors based on Arduino signals                                |
| **300 RPM DC Motors**      | 2        | For vehicle movement                                                       |
| **9V Rechargeable Battery** | 1        | Power supply for both Arduino and motors                                   |
| **Progo + USB Cable**      | 1        | To upload code to the ATmega board                                         |

---

## 💻 Software & Tools

- **Arduino IDE** – For writing and uploading code to the Arduino ATmega32
- **FTDI Driver (for Progo)** – Allows USB communication between PC and ATmega
- **Soldering Tools** – For assembling the circuit
- **Breadboard/Wires** – For prototyping

---

## 🧠 Libraries Used (Built-in to Arduino IDE)

- No external libraries required.
- Uses standard `digitalWrite()`, `digitalRead()`, `delay()`, and pin setup functions from Arduino core.

---

## 🛠️ How It Works

1. The **accelerometer** detects hand movements (tilt left, right, forward, backward).
2. This data is processed by the Arduino and **encoded**.
3. It is transmitted wirelessly via the **RF transmitter module**.
4. The **RF receiver** on the car receives this data and sends it to another Arduino.
5. Based on the command, the **L293D motor driver** turns the motors in the desired direction.

---

## 🧪 Testing & Results

- 📡 Successful gesture transmission via RF modules
- 🧭 Smooth movement in all 4 directions using hand tilts
- 🔋 Operates wirelessly with a 9V battery without lag or interference
- 🧰 Fully assembled and tested manually with soldered components


