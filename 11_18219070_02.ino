// C++ code
//
int sensorPin = A0;
int sensorInput;
double temp;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensorInput = analogRead(sensorPin);
  temp = (double) sensorInput/1024;
  temp = temp*5;
  temp = temp-0.5;
  temp = temp*100;
  
  Serial.print("Suhu : ");
  Serial.print(temp);
  Serial.print(" Celcius\n");
}