//int ledpin=5;
int ir=5;
int stat;

void setup() {
  // put your setup code here, at once: 
  Serial.begin(9600);
  //pinMode(ledpin,OUTPUT);
  pinMode(ir,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

    stat=digitalRead(ir);

 
    if(stat==HIGH)
    {
      Serial.println("OFF");
      //digitalWrite(ledpin,HIGH);
      //Serial.println(stat);
    } 
   else
   {
      Serial.println("ON");
      //digitalWrite(ledpin,LOW);
      //Serial.println(stat);
   }
    delay(1000);
  

}
