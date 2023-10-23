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
}

int numero = 0;

void loop()
{
  //saca los decimale 
int ds = numero / 10 ;
  //saca las unidades
int u =(numero - 10*(numero/ 10));
  
  
//Si reset es ejecutado devuelve 0 o 99
reset();  
  
//decrementa la variable numero  
resta();
//  incrementa la variavle numero
suma();
  
  

  Serial.print(ds);
  Serial.println(u);
  
  //prende el led de decena y amaga el de unidades
  digitalWrite(unidad,1);
  digitalWrite(decena,0);
  
  //muesta los digitos en el led
  digitos(ds);

  // apaga el led de decena y prende las unidades
  digitalWrite(decena,1);
  digitalWrite(unidad,0);
  
  digitos(u);
}

int reset(){
    if(digitalRead(buttonReset)==0){
    if(numero > 50)
  {numero = 0;}
    else{numero = 99;}
  }
}
int resta(){
   if(digitalRead(buttonDown)== 0)
    {numero--;}
  else{
    if(numero < 0){numero = 99;}
  }
}
int suma(){
 if(digitalRead(buttonUp)==0)
 {numero++;}
 else{
   if(numero > 99){numero = 0;}
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
  
