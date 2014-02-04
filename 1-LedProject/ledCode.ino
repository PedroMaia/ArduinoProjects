/* Primeiro Projecto com "onda" de led's 
*/
const int pinsLed[]={13,12,11,10},vdelay=50;


void setup() {
  // iniciar pinos
  pinMode(pinsLed[0], OUTPUT);
  pinMode(pinsLed[1], OUTPUT);
  pinMode(pinsLed[2], OUTPUT);
  pinMode(pinsLed[3], OUTPUT);
}

void loop(){

    digitalWrite(pinsLed[0], HIGH);
    delay(vdelay);  
    digitalWrite(pinsLed[1], HIGH);
    delay(vdelay);  
    digitalWrite(pinsLed[2], HIGH);
    delay(vdelay);  
    digitalWrite(pinsLed[3], HIGH);
    delay(vdelay);  
    
    digitalWrite(pinsLed[0], LOW);
    delay(vdelay);  
    digitalWrite(pinsLed[1], LOW);
    delay(vdelay);  
    digitalWrite(pinsLed[2], LOW);
    delay(vdelay);  
    digitalWrite(pinsLed[3], LOW);
    delay(vdelay);  
 
}