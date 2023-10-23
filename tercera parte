// C++ code

#define a 4
#define b 5
#define f 9
#define g 10
#define e 8
#define d 7
#define c 6
#define decena A0
#define unidad A1
#define buttonUp 2
#define buttonDown 3
#define buttonReset 1
#define interruptor A5
#define sensor A2
#define motor A3


int numero = 0;

void(* resetSoftware)(void) = 0;
void setup()
{
 Serial.begin(9600);  
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(unidad,OUTPUT);
  pinMode(decena,OUTPUT);
  pinMode(buttonUp,INPUT_PULLUP);
  pinMode(buttonDown,INPUT_PULLUP);
  pinMode(buttonReset,INPUT_PULLUP);
  pinMode(interruptor,INPUT_PULLUP);
  pinMode(motor,OUTPUT);
  
}

int temperaturaM = 0;
int temperatura= 0;
void loop()
{
  //lee los valores de tencion 
  	temperatura = analogRead(sensor);
  	temperaturaM= map(temperatura,20,357,-40,125);
  	Serial.println(temperaturaM);
  
  //controla la cantidad de electrones
  	analogWrite(11,225);
  
  //si la temperatura esta entre 0 y 50, entra al if 
  if(temperaturaM > 0 && temperaturaM <50){
  digitalWrite(motor,0);

  }
  //si no sale del if
  else{digitalWrite(motor,1);};
    
  
int ds = numero / 10 ;
int u =(numero - 10*(numero/ 10));
  
    
  //si entra al if el display mostrara solo numeros naturales
  if(digitalRead(interruptor)==0){
  suma();
  resta();
  reset();
  }
  //si no entra el  mostrara solo los numeros primos
  else{
    //muestra los numeros primos en creciente
   es_primo();
    reset();
    //si entra al if mostrara los numeros primos en decreciente
    if(digitalRead(buttonDown)==0){
    if(numero <= 1){
    suma();}
  
  for(int i=1; i < numero;i++){
    if (numero % i == 0){
      resta();}
  };;
    };
  }
 
    
 

  Serial.print(ds);
  Serial.println(u);
  
  digitalWrite(unidad,1);
  digitalWrite(decena,0);
  digitos(ds);

  digitalWrite(decena,1);
  digitalWrite(unidad,0);
  digitos(u);
  
  
  
}

int es_primo(){
  
  if(numero <= 1){suma();}
  
  for(int i=1; i < numero;i++){
    if (numero % i == 0){suma();}
  };
  
}



int suma(){
if(digitalRead(buttonUp)==0)
 {numero++;}
 else{
   if(numero > 99)
   {numero = 0;}
  }
}

void resta(){
if(digitalRead(buttonDown)== 0)
    {numero--;}
  else{
    if(numero < 0){numero = 99;}
  }
}


void reset(){
 if(digitalRead(buttonReset)==0){
    if(numero > 50)
  {numero = 0;}
    else{numero = 99;}
  }
}












void digitos(int numeros){
 switch(numeros){
    case 0:
      segCero();
   delay(50);
    break;
    case 1:
      segOne();
      delay(50);
    break;
    case 2:
    segTwo();
      delay(50);
    break;
    case 3:
    segThree();
      delay(50);
    break;
    case 4:
    segFor();
      delay(50);
    break;
    case 5:
    segFive();
      delay(50);
    break;
    case 6:
    segSix();
      delay(50);
    break;
    case 7:
    segSeven();
      delay(50);
    break;
    case 8:
    segEight();
      delay(50);
    break;
    case 9:
    segNine();
      delay(50);
    break;
 }}



void segCero(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
}
void segOne(){
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
}
void segTwo(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,1);
}
void segThree(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
}
void segFor(){
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void segFive(){
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void segSix(){
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void segSeven(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
}
void segEight(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void segNine(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
  
