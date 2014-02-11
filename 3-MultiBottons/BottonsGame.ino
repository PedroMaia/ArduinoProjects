/*
  Button
 
Dois botões e dois ledes, que um botão controla um led.

 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 2;// the number of the pushbutton pin
const int buttonPin2 = 3;

const int ledPin =  13;      // the number of the LED pin
const int ledPin2 =  12;
// variables will change:
int buttonState = 0;
int buttonState2 = 0;// variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
   pinMode(ledPin2, OUTPUT); 
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
  
  
  //segundo butao
    // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState2 == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin2, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin2, LOW); 
  }
  
}