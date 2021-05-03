// C++ code
//
const int SignalPin = 7;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  long duration, cm;
  
  pinMode(SignalPin, OUTPUT);
  digitalWrite(SignalPin, LOW);
  delayMicroseconds(2);
  digitalWrite(SignalPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(SignalPin, LOW);
  
  pinMode(SignalPin, INPUT);
  duration = pulseIn(SignalPin, HIGH);
  cm = microsecondsToCentimeters(duration);
  Serial.print(cm);
  Serial.print("cm \n");
  delay (100);
}

long microsecondsToCentimeters(long microseconds){
  return microseconds/29/2;
}