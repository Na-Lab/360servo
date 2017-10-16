#include<Servo.h>

#define PULSE_MIN 955
#define PULSE_MAX 2000
Servo myservo;

void turn_servo(double deg) {
  double pulse_deg,pulse;
  pulse_deg = (PULSE_MAX-PULSE_MIN)/360.0;  /*1度あたり何パルス幅増えるか*/
  pulse = pulse_deg*deg + PULSE_MIN;  /*degは何パルス幅か*/
  myservo.writeMicroseconds(pulse);
}

void setup(){
  myservo.attach(9,PULSE_MIN,PULSE_MAX); /*(pin番号,最小パルス幅,最大パルス幅*/
}

void loop() {
  turn_servo(0);
  delay(2000);
  turn_servo(90);
  delay(2000);
}

