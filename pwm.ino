const int MAX_8_INT = 255; 
int brightness;
int fade_amount;



void setup() {
brightness = 0;  // initialize brightness to 0 
fade_amount = 1; // initialize fade_amount to 1
analogReadResolution(12);
pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int brightness = analogRead(A0);
  analogWrite(LED_BUILTIN, brightness >> 4); 
  digitalWrite(10,brightness);
/*  brightness = brightness + fade_amount;

if (brightness ==0 or brightness == MAX_8_INT)
  {
  fade_amount = -fade_amount;
  }
  delay(100); // how much time in milliseconds*/
}
