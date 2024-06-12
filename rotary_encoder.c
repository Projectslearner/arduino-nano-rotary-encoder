/*
    Project name : Rotary Encoder
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-rotary-encoder
*/

// Rotary Encoder Variables
#define CLK 2  // Rotary encoder CLK pin connected to D2
#define DT 3   // Rotary encoder DT pin connected to D3

volatile int lastEncoded = 0;
volatile long encoderValue = 0;

// Function prototypes
void updateEncoder();
void printDirection();

void setup() {
  // Initialize Serial Monitor
  Serial.begin(9600);

  // Set pins as input
  pinMode(CLK, INPUT);
  pinMode(DT, INPUT);

  // Enable pullup resistors
  digitalWrite(CLK, HIGH);
  digitalWrite(DT, HIGH);

  // Attach interrupts
  attachInterrupt(digitalPinToInterrupt(CLK), updateEncoder, CHANGE);
  attachInterrupt(digitalPinToInterrupt(DT), updateEncoder, CHANGE);
}

void loop() {
  // Print the direction to Serial Monitor
  printDirection();
}

// Interrupt service routine to update encoder value
void updateEncoder() {
  int MSB = digitalRead(CLK);
  int LSB = digitalRead(DT);
  int encoded = (MSB << 1) | LSB;
  int sum = (lastEncoded << 2) | encoded;
  if (sum == 0b1101 || sum == 0b0100 || sum == 0b0010 || sum == 0b1011) {
    encoderValue++;
  } else if (sum == 0b1110 || sum == 0b0111 || sum == 0b0001 || sum == 0b1000) {
    encoderValue--;
  }
  lastEncoded = encoded;
}

// Function to print rotation direction to Serial Monitor
void printDirection() {
  if (encoderValue > 0) {
    Serial.println("Clockwise");
  } else if (encoderValue < 0) {
    Serial.println("Counter-Clockwise");
  }
}
