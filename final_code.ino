#include <Servo.h>

int red = 4;
int green = 5;
int blue = 6;

int buzz = 9;

int trig = 11;
int echo =10;

Servo myservo;
long duration;
float dis;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(3);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
  
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(buzz,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // myservo.write(0);
  // delay(2000);
  // myservo.write(90);
  // delay(2000);

  // myservo.write(180);
  // delay(2000);
  for (int deg = 0; deg <= 180; deg++ ){
  myservo.write(deg);
  delay(30);
  digitalWrite(trig,LOW);
  delay(10);

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);

  digitalWrite(trig,LOW);

  duration = pulseIn(echo, HIGH);
  dis = duration * 0.017;
  Serial.println(dis);

  if (dis >= 40){
    digitalWrite(green , HIGH);
    digitalWrite(red , LOW);
    digitalWrite(blue , LOW);
    noTone(buzz);
  }
  else if(dis>=10 && dis<40){
    digitalWrite(blue , HIGH);
    digitalWrite(red , LOW);
    digitalWrite(green , LOW);
    tone(buzz,100);

  }
  else {
    digitalWrite(red , HIGH);
    digitalWrite(green , LOW);
    digitalWrite(blue , LOW);
    // digitalWrite(buzz, HIGH);
    tone(buzz,500);
  }
  }
  for (int deg = 180; deg >= 0; deg-- ){
    myservo.write(deg);
  delay(30);
  digitalWrite(trig,LOW);
  delay(10);

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);

  digitalWrite(trig,LOW);

  duration = pulseIn(echo, HIGH);
  dis = duration * 0.017;
  Serial.println(dis);

  if (dis >= 40){
    digitalWrite(green , HIGH);
    digitalWrite(red , LOW);
    digitalWrite(blue , LOW);
    noTone(buzz);
  }
  else if(dis>=10 && dis<40){
    digitalWrite(blue , HIGH);
    digitalWrite(red , LOW);
    digitalWrite(green , LOW);
    tone(buzz,100);

  }
  else {
    digitalWrite(red , HIGH);
    digitalWrite(green , LOW);
    digitalWrite(blue , LOW);
    // digitalWrite(buzz, HIGH);
    tone(buzz,500);
  }
  }

}
