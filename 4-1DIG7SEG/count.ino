
//Ligações de cada fio
int A = 7;  
int B = 6;
int C = 4;  
int D = 3;
int E = 2;
int F = 8;
int G = 9;
//Inicia botão contador
const int buttonPin=10;
int buttonState = 0;    
  
byte num0 = 0x77;  //Hexadecima para cada número
byte num1 = 0x6;
byte num2 = 0x5B;
byte num3 = 0x4F;
byte num4 = 0x66;
byte num5 = 0x6D;
byte num6 = 0x7C;
byte num7 = 0x7;
byte num8 = 0x7F;
byte num9 = 0x6F;


//Função coloca sistema em espera enquanto não preecionar novamente o botão;
void verifica(){

   buttonState = digitalRead(buttonPin);
  
  while(buttonState == LOW){
    buttonState = digitalRead(buttonPin);
    delay(1);
  }

}


//Escreve no segmente correcto
void on(byte num)   // This function turns on the correct pins to display numbers passed to it         // through the variable "num".
{
  int result = bitRead(num, 0);  // Read the first binary entry in num and stores it in result.
  
      if (result == 1)  // Check to see if this segment should be on.
  
    {digitalWrite(A, HIGH);}   // Turns on the segment.
    else   // Otherwise, it turns it off.
    {digitalWrite(A, LOW);}  // Turns segment off.
  
      result = bitRead( num, 1);  // Same thing for the 6 remaining segments.
  
      if (result == 1)
  
    {digitalWrite(B, HIGH);}
    else
    {digitalWrite(B, LOW);}     
    result = bitRead( num, 2);
  
      if (result == 1)
  
    {digitalWrite(C, HIGH);}
    else
    {digitalWrite(C, LOW);}    
   result = bitRead( num, 3);
  
      if (result == 1)
  
    {digitalWrite(D, HIGH);}
    else
    {digitalWrite(D, LOW);}    
   result = bitRead( num, 4);
  
      if (result == 1)
    {digitalWrite(E, HIGH);}
    else
    {digitalWrite(E, LOW);}
     
   result = bitRead( num, 5);  
      if (result == 1)
    {digitalWrite(F, HIGH);}
    else
    {digitalWrite(F, LOW);}    
     
   result = bitRead( num, 6);
      if (result == 1)
    {digitalWrite(G, HIGH);}
    else
    {digitalWrite(G, LOW);}
  }



void setup() {                
  pinMode(A, OUTPUT); 
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);

  //Activa pi de entrada
  pinMode(buttonPin,INPUT);
}

void loop() {  
  on(num0);   
 delay(500);
  verifica(); 
  on(num1);
verifica();  
  delay(500); 
  on(num2);
verifica();  
  delay(500);
  on(num3);  
  verifica();
  delay(500);
  on(num4);  
  verifica();
  delay(500);
  on(num5); 
 verifica(); 
  delay(500);
  on(num6); 
 verifica(); 
  delay(500);
  on(num7);
  verifica();
  delay(500);
  on(num8); 
 verifica(); 
  delay(500);  
  on(num9);
verifica();  
  delay(500); 
  
}