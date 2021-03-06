#include<Servo.h>
 
//Creamos los objetos servo
Servo servo;
Servo servo2;
 
int enviado; //Aqui enviamos el numero completo
int num; //Numero del servo
int posicion; //Posicion del servo
 
void setup()
{
  //Inicializamos los Servos
  servo.attach(9);
  servo2.attach(10);
  
  //Inicializamos la comunicacion por Serial
  Serial.begin(9600);
}
 
void loop()
{
  if(Serial.available() >= 1)
  {
    /*
    1- Leer un numero entero por serial
    2- Calculamos su modulo por 10 (sera el numero del motor)
    3- Dividir el entero inicial por 10
    4- Lo que quede, sera la posicion del motor
    */
    enviado = Serial.parseInt();
    num = enviado%10;
    enviado = enviado/10;
    posicion = enviado;
     
    //Hora de mover los servos!
    if(num == 1)
    {
      servo.write(posicion);
    }
    else if(num == 2)
    {
      servo2.write(posicion);
    }
  }
 
}
