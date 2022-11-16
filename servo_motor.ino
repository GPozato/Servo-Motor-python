// C++ code
//
#include <Servo.h>

int graus = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);

  graus = 0;
}

void loop()
{
  while (graus < 180) {
    servo_9.write(graus);
    delay(5); // Wait for 50 millisecond(s)
    graus = (graus + 1);
  }
  while (graus > 0) {
    servo_9.write(graus);
    delay(5); // Wait for 50 millisecond(s)
    graus = (graus - 1);
  }
}
