/*
Library CPHCSR04 (VER 1.0.0)
------------Created by Dev Community Project---------------------
Day of Created: 5/11/2024
*/

#ifndef CPHCSR04_H
#define CPHCSR04_H
#include <Arduino.h>

class CPHCSR04 {
    private:
        int8_t echo;
        int8_t trig;
        unsigned long dur;
        int dis;

    public:

        CPHCSR04(int8_t echoPin, int8_t trigPin) {
            echo = echoPin;
            trig = trigPin;
            pinMode(trig, OUTPUT);
            pinMode(echo, INPUT);
        }


        int getDis() {
            data();
            return dis;
        }

    private:

        void data() {
            digitalWrite(trig, LOW);   
            delayMicroseconds(2);
            digitalWrite(trig, HIGH);   
            delayMicroseconds(5);  
            digitalWrite(trig, LOW);

            dur = pulseIn(echo, HIGH);  
            dis = int(dur / 2 / 29.412);
        }
};
#endif
