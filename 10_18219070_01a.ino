// C++ code
//
int RedLED = 0;

void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(10); // Wait for 500 millisecond(s)
}