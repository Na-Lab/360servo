#include <Arduino.h>

#include "servo_motor.h"

ServoMotor::ServoMotor() : pulseMin(900), pulseMax(1900) {}

void ServoMotor::begin() { attach(9, pulseMin, pulseMax); }

void ServoMotor::turn(double angle) {
  double pulse = ((pulseMax - pulseMin) / 360.) * angle + pulseMin;
  writeMicroseconds((int)pulse);
}
