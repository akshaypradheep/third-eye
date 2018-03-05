
const int trigPin = 9;
const int echoPin = 10;
const int echopin = ;
const int powerpin = 8;
const int groundpin = 11;
float duration1,duration2;
int distance1,distance2;

void setup() {
pinMode(powerpin,OUTPUT);
pinMode(groundpin,INPUT);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(13,OUTPUT);
digitalWrite(groundpin,LOW);
digitalWrite(powerpin,HIGH);
Serial.begin(9600);
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration1 = pulseIn(echoPin, HIGH);
duration2 = pulseIn(echopin, HIGH);

distance1= duration1*0.034/2;
distance2= duration2*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);
if(distance1 < 100 || distance2){
  digitalWrite(13,HIGH);
  delay(distance*10);
  digitalWrite(13,LOW);
  delay(distance*10);
}
}
