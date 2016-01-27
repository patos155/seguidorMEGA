#include <AFMotor.h>

AF_DCMotor motor(1);
AF_DCMotor motor1(2);

void setup() 
{
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor party!");
  
  motor.setSpeed(100);
  motor.run(RELEASE);
  motor1.setSpeed(150);
  motor1.run(RELEASE);
}

void loop() 
{
   motor.setSpeed(100);
   motor1.setSpeed(150);
  motor.run(FORWARD); 
    motor1.run(BACKWARD);
  delay (10000);
  motor.run(RELEASE);
  motor1.run(RELEASE);
   delay (2000);

}
