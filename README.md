📌 Problem Statement

In many industries, machines operate continuously and may overheat, leading to equipment damage, safety hazards, and production loss if not monitored properly.

💡 Solution

This project uses an LM35 temperature sensor and Arduino to continuously monitor temperature and automatically control industrial machines using a relay module.

🚀 Features

Automatic temperature monitoring

Machine protection from overheating

Fully automated operation

Low cost and reliable

Easy to expand with IoT features

⚙️ Working Principle

LM35 sensor measures surrounding temperature

Arduino reads sensor values

If temperature exceeds threshold, machine turns ON/OFF accordingly

System continuously monitors temperature

🔧 Hardware Components

Arduino UNO

LM35 Temperature Sensor

Relay Module

DC Motor / Fan / Industrial Load

Jumper Wires

Power Supply

🔌 Pin Connections
LM35 Temperature Sensor
LM35 Pin	Arduino
VCC	5V
OUT	A0
GND	GND
Relay Module
Relay Pin	Arduino
IN	D8
VCC	5V
GND	GND
💻 Software Requirements

Arduino IDE

🛠️ Steps to Run the Project

Connect components according to pin configuration

Upload Arduino code

Power the system

Increase temperature near sensor

Observe automatic machine control

🧪 Demo Instructions (Hackathon)

Warm LM35 sensor → Machine activates 🔥

Cool sensor → Machine deactivates

Explain safety and automation benefits

📈 Future Enhancements

IoT monitoring using ESP32

Mobile app alerts

Multiple sensor integration

Data logging and analytics

🏭 Applications

Manufacturing industries

Industrial safety systems

Machine monitoring

Smart factories

🏆 Why This Project Is Hackathon-Ready

Industrial relevance

Simple live demo

Real-world safety application

Expandable and scalable

📄 License

This project is open-source and free for educational and hackathon use.# Industrial-Automation-System
