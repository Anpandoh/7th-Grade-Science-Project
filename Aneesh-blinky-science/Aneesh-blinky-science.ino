/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 */
int darkness = 0;
void setup() {
  pinMode(12, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(8,INPUT); 
  Serial.begin(9600);
}
int motion = 0;
// the loop function runs over and over again forever
void loop() {
    motion = digitalRead(8);
    darkness = analogRead(A1);
    Serial.print("Darkness = ");
    Serial.print(darkness);
    Serial.print(" , Motion = ");
    Serial.print(motion);
    Serial.print(" ");
    if (darkness <= 7 && motion == HIGH)
    {
      digitalWrite(12,HIGH);//detected dark
      delay(5000);
    }
     else
    {
      digitalWrite(12,LOW);//detected light
    }
//  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);              // wait for a second
//  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
delay(1000);              // wait for a second
}
