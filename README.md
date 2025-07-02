# Electronics Task – LED Control with 3 Buttons

This project demonstrates a basic Arduino circuit in which three push buttons are used to control three LEDs. Each button turns its corresponding LED on or off.

## 🧠 Objective
Create a simple electronic circuit using Arduino where pressing a button controls an LED.

## 🛠 Components Used
- Arduino Uno  
- 3 LEDs (Red, Green, Yellow)  
- 3 Push buttons  
- Resistors (for LEDs and pull-downs)  
- Breadboard  
- Jumper wires  

## 🔌 Description
Each button is connected to a digital input pin with a pull-down resistor to ground. Each LED is connected to a digital output pin through a current-limiting resistor. When a button is pressed, it activates the corresponding LED.

## 📷 Circuit Diagram
The circuit was designed and simulated using Tinkercad.

## 💡 Summary
This task is part of an introductory electronics module, focusing on using Arduino to read digital inputs (buttons) and control outputs (LEDs).

## 🧾 Arduino Code
```cpp
const int button1 = 11;
const int led1 = 7;

const int button2 = 12;
const int led2 = 8;

const int button3 = 13;
const int led3 = 10;

bool state1 = false;
bool state2 = false;
bool state3 = false;

bool last1 = LOW;
bool last2 = LOW;
bool last3 = LOW;

void setup()
{
  pinMode(button1, INPUT);
  pinMode(led1, OUTPUT);
  
  pinMode(button2, INPUT);
  pinMode(led2, OUTPUT);
  
  pinMode(button3, INPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  bool current1 = digitalRead(button1);
  if (current1 == HIGH && last1 == LOW) {
    state1 = !state1;
    digitalWrite(led1, state1);
    delay(200);
  }
  last1 = current1;

  bool current2 = digitalRead(button2);
  if (current2 == HIGH && last2 == LOW) {
    state2 = !state2;
    digitalWrite(led2, state2);
    delay(200);
  }
  last2 = current2;

  bool current3 = digitalRead(button3);
  if (current3 == HIGH && last3 == LOW) {
    state3 = !state3;
    digitalWrite(led3, state3);
    delay(200);
  }
  last3 = current3;
}
