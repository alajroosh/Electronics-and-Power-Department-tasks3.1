// C++ code
//
#include <Servo.h>

Servo servo_8;

Servo servo_9;

Servo servo_10;

Servo servo_11;

Servo servo_12;

Servo servo_13;
void setup()
{
  servo_8.attach(8, 500, 2500);

  servo_9.attach(9, 500, 2500);

  servo_10.attach(10, 500, 2500);

  servo_11.attach(11, 500, 2500);

  servo_12.attach(12, 500, 2500);

   servo_13.attach(13, 500, 2500);
}

void loop()
{
  //initial
  servo_8.write(90);
  servo_9.write(150);
  servo_10.write(35);
  servo_11.write(90);
  servo_12.write(150);
  servo_13.write(35);
  delay(5000); 

    //movement1
  servo_8.write(90);
  servo_9.write(150);
  servo_10.write(85);
  servo_11.write(90);
  servo_12.write(150);
  servo_13.write(85);
  delay(5000); 
  //movement2
  servo_8.write(30);
  servo_9.write(150);
  servo_10.write(85);
  servo_11.write(30);
  servo_12.write(150);
  servo_13.write(85);
  delay(5000); 
  //movement3
  servo_8.write(30);
  servo_9.write(60);
  servo_10.write(85);
  servo_11.write(30);
  servo_12.write(60);
  servo_13.write(85);
  delay(5000); 
  
}