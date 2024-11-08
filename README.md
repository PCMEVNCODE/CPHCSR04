# CPHCSR04 Library

The `CPHCSR04` library is designed to simplify distance measurement using the HC-SR04 ultrasonic sensor. This library provides functions to initialize the sensor and measure distances accurately.

## Features
- Easy-to-use distance measurement with the HC-SR04 sensor.
- Calculates distance in centimeters with optimized functions.
- Lightweight and efficient, designed for projects that require real-time distance readings.

## Installation
1. Download the `CPHCSR04` library files.
2. Place the `CPHCSR04` folder in your Arduino libraries directory (usually located at `Documents/Arduino/libraries`).
3. Open the Arduino IDE and go to **Sketch** > **Include Library** > **CPHCSR04** to add the library to your project.

## Usage

### Basic Example

Below is a basic example of how to use the `CPHCSR04` library to measure distance:

```cpp
#include <CPHCSR04.h>

CPHCSR04 sensor(7, 8); // Echo pin connected to pin 7, Trig pin connected to pin 8

void setup() {
    Serial.begin(9600);
}

void loop() {
    int distance = sensor.getDis(); // Get distance in cm
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(500); // Wait for 500ms before the next reading
}
