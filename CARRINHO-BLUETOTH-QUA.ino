#include <SoftwareSerial.h>

SoftwareSerial bt(0,1);

//LADO ESQUERDO
int ENA = 10;
int IN1 = 9;
int IN2 = 8;

//LADO DIREITO
int ENB = 5;
int IN3 = 7;
int IN4 = 6;

char t;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  analogWrite(ENA,255);
  analogWrite(ENB,255);
}

void loop() {
  // put your main code here, to run repeatedly:

}
