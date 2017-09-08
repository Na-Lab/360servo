#include<Servo.h>
Servo myservo;

float pulseMin,pulseMax,pulse_deg,pulse,deg;

void setup(){
  myservo.attach(9,955,2000); /*(pin番号,最小パルス幅,最大パルス幅*/
}

void loop() {

  pulseMin = 955; /* パルス幅最小値を360で割る*/
  pulseMax = 2000;  /* パルス幅最大値を360で割る*/

  pulse_deg = (pulseMax-pulseMin)/360;  /*1度あたり何パルス幅増えるか*/

  deg = 360;  /*ここに何度回すか,deg表記で代入*/
  pulse = pulse_deg*deg + pulseMin;  /*degは何パルス幅か*/

  myservo.writeMicroseconds(955);
  delay(2000);
//  myservo.writeMicroseconds(pulse);
//  delay(2000);
//  
}

