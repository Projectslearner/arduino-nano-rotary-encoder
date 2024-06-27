# Arduino Nano Rotary Encoder

#### Project Overview

This project demonstrates how to use a rotary encoder with an Arduino Nano to measure rotation and detect button presses. A rotary encoder converts the angular position or rotation of a shaft into digital signals, which can be used to track position changes or user inputs.

#### Components Needed

- **Arduino Nano**
- **Rotary Encoder Module**
- **Jumper Wires**

#### Block diagram


#### Circuit Setup

1. **Connect Rotary Encoder Module to Arduino Nano:**
   - **CLK Pin:** Connect to digital pin 2 on Arduino Nano.
   - **DT Pin:** Connect to digital pin 3 on Arduino Nano.
   - **SW Pin:** Connect to digital pin 4 on Arduino Nano.
   - **+ Pin:** Connect to 5V on Arduino Nano.
   - **GND Pin:** Connect to GND on Arduino Nano.

#### Instructions

1. **Circuit Setup:**
   - Connect the rotary encoder module to the Arduino Nano as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Nano.
   - Open the serial monitor with a baud rate of 9600.
   - Rotate the encoder shaft. Observe the serial monitor output displaying the current position of the encoder.

#### Applications

- **User Input:** Use for controlling menu navigation or parameter adjustments in projects.
- **Position Tracking:** Implement in projects requiring precise position tracking or measurement.
- **Interface Control:** Useful for user interface elements where rotary input is preferred.

#### Notes

- Ensure the rotary encoder module is correctly connected to the Arduino Nano and powered.
- Modify the code to include additional functionality, such as detecting button presses (using the SW pin).
- Adjust the debounce delay (`delay(1)`) in the `handleEncoder` function if necessary to debounce the encoder signal.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-nano-rotary-encoder)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner