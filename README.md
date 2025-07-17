# 🤖 Arduino Obstacle Scanner

A radar-style obstacle detection system using Arduino Uno, Ultrasonic Sensor (HC-SR04), Servo Motor, RGB LEDs, and a Buzzer.

This project detects objects in the environment by scanning the area with a rotating sensor and provides **visual and sound alerts** based on the detected distance.

---

## 📌 Features

- Real-time obstacle scanning using an ultrasonic sensor
- Servo motor rotates to cover a 180° field
- RGB LEDs indicate obstacle distance:
  - 🟢 Green → Safe (object far)
  - 🔵 Blue → Caution (object at medium distance)
  - 🔴 Red → Warning (object too close)
- Buzzer alerts with varying tone based on distance
- Live distance logging via the Serial Monitor

---

## 🧰 Components Used

| Component        | Quantity |
|------------------|----------|
| Arduino Uno      | 1        |
| HC-SR04 Sensor   | 1        |
| Servo Motor      | 1        |
| Red LED          | 1        |
| Green LED        | 1        |
| Blue LED         | 1        |
| Buzzer           | 1        |
| 220Ω Resistors   | 3        |
| Breadboard       | 1        |
| Jumper Wires     | As needed |

---

## ▶️ How to Run

1. **Build the Circuit**  
   Connect all components according to the schematic provided.

2. **Upload the Code**
   - Open the `.ino` file in the Arduino IDE.
   - Select:
     ```
     Tools > Board > Arduino Uno
     Tools > Port > [Your COM port]
     ```
   - Click the **Upload** button (→) to flash the code.

3. **Monitor Output (Optional)**
   - Open the **Serial Monitor** from the Tools menu.
   - Set **baud rate** to `9600` to view live distance readings.

4. **Start the Scan**
   - Once powered on, the servo will begin scanning the surroundings.
   - LEDs and buzzer will respond based on object proximity.

---

## 💡 Future Improvements

- Add OLED display to show distance graphically  
- Integrate with IoT platforms for remote monitoring  
- Visualize scanning angle in Processing or Python

---

## 🙌 Acknowledgments

Made using **Tinkercad Circuits**  
Developed with **Arduino IDE**  
Inspired by basic radar and obstacle detection systems

---
