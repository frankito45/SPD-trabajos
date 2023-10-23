# SPD-trabajos

# descripcion
display de 7 segmentos y multiplexacion que muestra un contador del 0 a 99, y  un motor de (cc) que avanza  mientra el sensor de temperatura este entre 0 y 50, y retrocediendo si mientra no este en esos valores el motor ira en sentido contrario ,la velocidad del motor esta controlada por un fotorresistencia 

## primera parte

### funcion principal
buttonUp, buttonDown, buttonReset son #define que estan conestados a pulsadores donde cada pulsador esta asociado a una funcion diferente que luego esta mostrado en los display

    pinMode(buttonUp,INPUT_PULLUP);//suma()
    pinMode(buttonDown,INPUT_PULLUP);//resta()
    pinMode(buttonReset,INPUT_PULLUP);//reset()
    
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


## segunda parte
### funcion principal
se le agrega un condicional dependiendo di el interruptor este encendido o apagado los botones suma resta incrementa y decrementa en 1, si no los valores suman o restan hasta llegar a un numero primo

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
## tercera parte 
### funcion principal
segun la temperatura ara que el motor  gire para un lado o el otro segun la fotoresistencia
la fotoresistencia tambien controla la velocidad del motor 
  
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
    



## link del trabajo
pirmera parte: https://www.tinkercad.com/things/8f7pu4yYX2E?sharecode=t6YECktDC6dDiiWf8S82LQhGSJ03Lmtc1FKahnBUcy0

segunda parte: https://www.tinkercad.com/things/gEgIvKoicBR

tercera parte: https://www.tinkercad.com/things/eolZHC3UdOE

