void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}



void loop() {
  if(Serial.available()>=0)
  {
    if(Serial.read() == 1)
    {
      digitalWrite(13, HIGH);
    }

    if(Serial.read() == 0)
    {
      digitalWrite(13, LOW);
    }
  }

}
