void setup() {
  // Serial.begin -> This will help us to make use of computer serial monitor
  Serial.begin(9600);

  // For selecting pin number 13 which is connected with a led 
  pinMode(13, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println() -> This will help us to print on Serial monitor;
  Serial.println("Print forever");

  // For writing on a specefic port, in this case the port is 13.
  digitalWrite(13, HIGH);
  delay(500);
  
  // For blinking the light
  digitalWrite(13, LOW);
  // delay() -> for waiting in a specific amount of time. 
  delay(500);
}
