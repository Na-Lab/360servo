#include <Arduino.h>
#include "servo_motor.h"

ServoMotor motor;
void       setup() { motor.begin(); }

void loop() {
  motor.turn(0);
  delay(2000);
  motor.turn(90);
  delay(2000);
}
