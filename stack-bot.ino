#include <Servo.h>

Servo servo1;

void setup()
{ 
  Serial.begin(9600);
  servo1.attach(9);
  servo1.write(125);
  while(!Serial.available());
  servo1.write(90);
  delay(200);
  servo1.write(125);
  delay(750);

}

void loop()
{
  servo1.write(90);  
  delay(200);
  servo1.write(125);
  delay(600);
}
