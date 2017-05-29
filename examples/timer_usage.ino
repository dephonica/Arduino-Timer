#include <longtime.h>

// Set timer period to 1000 milliseconds
CLongTimer tmr(1000);

int led = 13;
bool led_on = true;

void elapsed()
{
   led_on = !led_on;
   digitalWrite(13, led_on); 

   // Set timer period to 1000 milliseconds
   tmr.set(500);
}

void setup()
{
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);

  tmr.event(&elapsed);
  tmr.start();
}

void loop()
{
  tmr.tick();
}
