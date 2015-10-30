int ledPin1=11;
int ledPin2=10;
int ledPin3=9;
int ledPin4=6;
int ledPin5=5;
int ledPin6=3;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
pinMode(ledPin3,OUTPUT);
pinMode(ledPin4,OUTPUT);
pinMode(ledPin5,OUTPUT);
pinMode(ledPin6,OUTPUT);
randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
  int randomDelay = random(5,250);
for(int a = 0; a <=2 ; a += 1){ 
fade1();
delay(randomDelay);
fade2();
decay1();
delay(randomDelay);
fade3();
decay2();
delay(randomDelay);
fade4();
decay3();
delay(randomDelay);
fade5();
decay4();
delay(randomDelay);
fade6();
decay5();
delay(randomDelay);
decay6();
fade3();
delay(randomDelay);
fade1();
fade6();
delay(randomDelay);
decay3();
delay(randomDelay);
fade2();
decay1();
delay(randomDelay);
fade5();
fade4();
delay(randomDelay);
decay4();
fade3();
fade1();
delay(randomDelay);
decay5();
fade2();
delay(randomDelay);
decay5();
decay2();
decay1();
decay3();
decay4();
decay6();
}
delay(randomDelay);
randomBlink();
delay(randomDelay);
fade1();
fade2();
fade3();
fade4();
fade5();
fade6();
decay1();
decay2();
decay3();
decay4();
decay5();
decay6();
fade1();
fade2();
fade3();
fade4();
fade5();
fade6();
decay6();
decay5();
decay4();
decay3();
decay2();
decay1();
}

void fade1() {
  int fadeDelay = random(5,30);
  for(int fadeValue = 0 ; fadeValue <= 255 ; fadeValue += 5){
    analogWrite(ledPin1,fadeValue);
    delay(fadeDelay);
  }
}
void fade2() {
  int fadeDelay = random(5,30);
  for(int fadeValue = 0 ; fadeValue <= 255 ; fadeValue += 5){
    analogWrite(ledPin2,fadeValue);
    delay(fadeDelay);
  }
}
void fade3() {
  int fadeDelay = random(5,30);
  for(int fadeValue = 0 ; fadeValue <= 255 ; fadeValue += 5){
    analogWrite(ledPin3,fadeValue);
    delay(fadeDelay);
  }
}
void fade4() {
  int fadeDelay = random(5,30);
  for(int fadeValue = 0 ; fadeValue <= 255 ; fadeValue += 5){
    analogWrite(ledPin4,fadeValue);
    delay(fadeDelay);
  }
}
void fade5() {
  int fadeDelay = random(5,30);
  for(int fadeValue = 0 ; fadeValue <= 255 ; fadeValue += 5){
    analogWrite(ledPin5,fadeValue);
    delay(fadeDelay);
  }
}
void fade6() {
  int fadeDelay = random(5,30);
  for(int fadeValue = 0 ; fadeValue <= 255 ; fadeValue += 5){
    analogWrite(ledPin6,fadeValue);
    delay(fadeDelay);
  }
}
void decay1() {
  int decayDelay = random(5,30);
  for(int decayValue = 255 ; decayValue >=0; decayValue -= 5) {
    analogWrite(ledPin1,decayValue);
    delay(decayDelay);
  }
}
void decay2() {
  int decayDelay = random(5,30);
  for(int decayValue = 255 ; decayValue >=0; decayValue -= 5) {
    analogWrite(ledPin2,decayValue);
    delay(decayDelay);
  }
}
void decay3() {
  int decayDelay = random(5,30);
  for(int decayValue = 255 ; decayValue >=0; decayValue -= 5) {
    analogWrite(ledPin3,decayValue);
    delay(decayDelay);
  }
}
void decay4() {
  int decayDelay = random(5,30);
  for(int decayValue = 255 ; decayValue >=0; decayValue -= 5) {
    analogWrite(ledPin4,decayValue);
    delay(decayDelay);
  }
}
void decay5() {
  int decayDelay = random(5,30);
  for(int decayValue = 255 ; decayValue >=0; decayValue -= 5) {
    analogWrite(ledPin5,decayValue);
    delay(decayDelay);
  }
}
void decay6() {
  int decayDelay = random(5,30);
  for(int decayValue = 255 ; decayValue >=0; decayValue -= 5) {
    analogWrite(ledPin6,decayValue);
    delay(decayDelay);
  }
}
void randomBlink(){
 for(int i =0 ; i <= 100 ; i += 1){
  int blinkDelay = random(50,250);
  int blinkPin = random(3,11);
    digitalWrite(blinkPin,HIGH);
    delay(blinkDelay);
    digitalWrite(blinkPin,LOW);
    delay(blinkDelay);
  }
}
