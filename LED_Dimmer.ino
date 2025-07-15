//Reading a Potentiometer Using ESP32; LED Dimmer Fun Project
//Defining analog pin
const int potPin = 15;
//GP015 is input only

void
setup () {
  Serial.begin(115200);
//Start serial monitor at 115200 baud rate 
}

void
loop () {
  int potValue = analogRead(potPin);
//Read analog value (0-4095) 
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
//Print value
  delay(200);
//Delay for readability  
}