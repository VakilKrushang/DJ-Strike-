// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 has the LED on Teensy 2.0
// Pin 6  has the LED on Teensy++ 2.0
// Pin 13 has the LED on Teensy 3.0
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  Serial.begin(9600);
   digitalWrite(led,LOW);
}

// the loop routine runs over and over again forever:
void loop() {
//  while(1)
//  {
 
  char input = Serial.read();
  if(input == '1')
  {
   digitalWrite(led, HIGH);
  }
  if(input=='0')
  { 
    digitalWrite(led, LOW);
  }
//  } // wait for a second
}
