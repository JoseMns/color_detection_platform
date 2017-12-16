#define X1 A0
#define X2 A1
#define Y1 A2
#define Y2 A3
//Define your screen resolution as per your Touch screen (Max: 1024)
#define Xresolution 184//128
#define Yresolution 141 //64

void setup()
{
   Serial.begin(9600);
}

void loop()
{
  int X,Y;//Touch Coordinates are stored in X,Y variable
  int Xprint;
       pinMode(Y1,OUTPUT);
       pinMode(Y2,OUTPUT);
       digitalWrite(Y1,LOW);
       digitalWrite(Y2,HIGH);
       pinMode(X1,INPUT);
       pinMode(X2,INPUT);
   X = (analogRead(X1))/(1024/Xresolution); //Reads X axis touch position

   
       pinMode(X1,OUTPUT);
       pinMode(X2,OUTPUT);
       digitalWrite(X1,LOW);
       digitalWrite(X2,HIGH);
       pinMode(Y1,INPUT);
       pinMode(Y2,INPUT);
   Y = (analogRead(Y1))/(1024/Yresolution); //Reads Y axis touch position
  
  //Display X and Y on Serial Monitor
   Serial.print("X = ");  
   Serial.print(X);
   Serial.print(" Y = ");
   Serial.println(Y);
   delay(100);
}
