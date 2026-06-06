# 💧 Smart Water Tank Level Indicator System

## 📌 Project Overview

The Smart Water Tank Level Indicator System is an Arduino UNO-based project that monitors water levels using an HC-SR04 Ultrasonic Sensor. The system measures the distance between the sensor and the water surface, determines the tank level, and displays the status using LEDs, a buzzer, and a 16x2 LCD display.

This project helps prevent water shortages by providing real-time tank level monitoring and refill alerts.

---

## 🎯 Objectives

- Monitor water levels in real time.
- Indicate tank status using LEDs.
- Display tank level information on an LCD screen.
- Generate alerts when the water level is low.
- Learn ultrasonic sensor interfacing with Arduino.

---

## 🛠 Components Used

- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- 16x2 LCD Display
- Green LED
- Yellow LED
- Red LED
- Piezo Buzzer
- 220Ω Resistors
- Breadboard
- Jumper Wires

---

## ⚙️ Working Principle

The ultrasonic sensor continuously measures the distance between the sensor and the water surface.

### 🟢 Tank Full
- Green LED ON
- Yellow LED OFF
- Red LED OFF
- Buzzer OFF
- LCD displays "Tank Full"

### 🟡 Tank Medium
- Green LED OFF
- Yellow LED ON
- Red LED OFF
- Buzzer OFF
- LCD displays "Tank Medium"

### 🔴 Tank Low
- Green LED OFF
- Yellow LED OFF
- Red LED ON
- Buzzer ON
- LCD displays "Refill Required"

---

## 🔌 Connections

### Ultrasonic Sensor

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

### LEDs

| LED | Arduino Pin |
|------|-------------|
| Green LED | D2 |
| Yellow LED | D3 |
| Red LED | D4 |

### Buzzer

| Component | Arduino Pin |
|------------|-------------|
| Buzzer (+) | D13 |
| Buzzer (-) | GND |

### LCD Display

| LCD Pin | Arduino Pin |
|----------|-------------|
| RS | D12 |
| E | D11 |
| DB4 | D5 |
| DB5 | D6 |
| DB6 | D7 |
| DB7 | D8 |
| VSS | GND |
| VDD | 5V |
| RW | GND |
| VO | GND |
| LED+ | 5V |
| LED- | GND |

---

## 🚀 Features

- Real-Time Water Level Monitoring
- Ultrasonic Distance Measurement
- LCD Status Display
- Multi-Level Indication
- Audio Alert System
- Low-Cost Implementation
- Easy to Build and Understand

---

## 🌍 Applications

- Residential Water Tanks
- Industrial Water Storage Systems
- Smart Buildings
- Water Management Systems
- Irrigation Monitoring
- IoT-Based Water Monitoring Projects

---

## ✅ Advantages

- Non-Contact Water Level Measurement
- Accurate Monitoring
- Simple Circuit Design
- Low Maintenance
- Cost Effective
- Expandable for IoT Applications

---

## 🔄 System Flow

1. Measure distance using Ultrasonic Sensor.
2. Calculate water level.
3. Determine tank status.
4. Display status on LCD.
5. Activate corresponding LED.
6. Trigger buzzer if water level is low.

---

## 🔮 Future Enhancements

- IoT Cloud Monitoring
- Mobile App Notifications
- Automatic Water Pump Control
- GSM Alert System
- Data Logging and Analytics
- Smart Home Integration

---

## 👨‍💻 Author

**Manas Varanasi**

### 🚀 45 Days Project Challenge

**Day 09 of 45 - Smart Water Tank Level Indicator System**

*One Project a Day, Building a Better Tomorrow!*