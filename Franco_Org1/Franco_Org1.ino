#include <EEPROM.h>
//Wiedermann no explica nada

int direccion=0;
byte Val1; 
byte Val2; 

void Setup() {
Serial.begin(9600);
byte informacion=B11001;
int valor=analogRead(0);
EEPROM.write(direccion, informacion);
EEPROM.write(direccion+1,valor);
}

void loop() {
EEPROM.read(direccion);
EEPROM.read(direccion+1);

Serial.print("En la dirección esta:");
Serial.print(direccion);
Serial.print("Se encuentra");
Serial.print(Val1, DEC);
}
# include <Servo.h>
  Servo myservo;
  int Echo= A4;
  int trig= A5;
const int inputnodes=3;
const int HiddenNodes=4;
const int OutputNodes=4;
int i,j;

double Accum;
double Hidden[HiddenNodes];
double Output[OutputNodes];
float HiddenWeights[3] [4]{{
float OutputWeights [4][4]{{
void stop(){
digitalwrite(ENA,LOW);
digitalwrite(ENB,LOW);
serial.println("parar");
