/*
    Project name : Arduino Nano Rotary Encoder
    Modified Date: 27-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-rotary-encoder
*/

// Define the pins connected to the rotary encoder
const int encoderPinCLK = 2;  // CLK pin
const int encoderPinDT = 3;   // DT pin
const int encoderPinSW = 4;   // SW pin

volatile int encoderPos = 0;  // Current position of the encoder
volatile boolean rotating = false; // Flag to indicate rotation

void setup() {
  pinMode(encoderPinCLK, INPUT_PULLUP); // CLK pin as input with internal pull-up resistor
  pinMode(encoderPinDT, INPUT_PULLUP);  // DT pin as input with internal pull-up resistor
  pinMode(encoderPinSW, INPUT_PULLUP);  // SW pin as input with internal pull-up resistor

  attachInterrupt(digitalPinToInterrupt(encoderPinCLK), handleEncoder, CHANGE); // Interrupt on CLK pin change
}

void loop() {
  // Main program loop
  // You can add your main program logic here
}

void handleEncoder() {
  // Read DT pin to determine direction
  int DTstate = digitalRead(encoderPinDT);

  if (DTstate == HIGH) {
    encoderPos++;
  } else {
    encoderPos--;
  }

  rotating = true; // Set rotating flag

  // Print encoder position to Serial Monitor
  Serial.print("Encoder Position: ");
  Serial.println(encoderPos);

  // Debounce delay to avoid multiple interrupts for the same movement
  delay(1);
}
