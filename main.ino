#include "my_servo.h"

void setup(){
    servo_init();
}

void loop()
{
    turn_servo(0);
    delay(2000);
    turn_servo(180);
    delay(2000);
  }
