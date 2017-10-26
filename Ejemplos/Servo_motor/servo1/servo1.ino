#include <Servo.h>

Servo ServoJose; //Declaramos que queremos controlar un Servo, al cual le vamos a poner un nombre cualquiera

int pot = 0; //El pin análogo donde va conectado el Potenciómetro
int val; //El valor a leer por el puerto análogo

void setup()
{
ServoJose.attach(9); //El pin al cual conectaremos nuestro Servo
}

void loop()
{
val = analogRead(pot); //Aquí le decimos que lea el valor del potenciómetro, valor el cual oscila entre 0 y 1023
val = map(val, 0 ,1023, 0, 180); //Traduce la lectura análga (0, 1023) a grados (0°, 180°)
ServoJose.write(val); //Mueve el Servo según la lectura análoga
delay(15);
}
