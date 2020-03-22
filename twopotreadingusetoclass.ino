class Pots
{
  private:
  	int potVal;
  	int pin;
  
  public:
  	Pots(int pinNames)
  	{
      pinMode(pinNames,INPUT);
      pin = pinNames;
  	}
  	void analogReading()
    {
      potVal = analogRead(pin);
      Serial.println(potVal);
    }
};
void setup()
{
	Serial.begin(9600);
}

void loop()
{
 	Pots pot1(A0);
  	Pots pot2(A1);
  	pot1.analogReading();
  	pot2.analogReading();
}
