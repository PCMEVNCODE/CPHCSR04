#include <CPHCSR04.h>

CPHCSR04 sensor(7, 8); // Echo pin connected to pin 7, Trig pin connected to pin 8

void setup() {
    Serial.begin(9600);
}

void loop() {
    int distance = sensor.getDistance(); // Get distance in cm
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(500); // Wait for 500ms before the next reading
}