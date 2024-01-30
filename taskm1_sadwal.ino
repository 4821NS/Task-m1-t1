int baselineTemp = 0;
int celsius = 0;


void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(2, OUTPUT);

}

void loop()
{
  baselineTemp = 40;
  
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  
  Serial.print(celsius);
  Serial.println(" C, ");

  
   if (celsius > baselineTemp) {
    digitalWrite(2, HIGH);
 
  }
  else{
    digitalWrite(2,LOW);
  }
  
  delay(1000); 
}
