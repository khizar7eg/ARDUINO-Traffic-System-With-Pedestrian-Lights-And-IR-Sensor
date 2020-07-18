
const int red1 = 0;
const int yellow1 = 1; 
const int green1 = 2;

const int red2 = 3;
const int yellow2 = 4;
const int green2 = 5;

const int red3 = 6;
const int yellow3 = 7;
const int green3 = 8;

const int red4 = 9;
const int yellow4 = 10;
const int green4 = 11;

const int pRed = 14;
const int pGreen = 15;
const int pOut = 16;

int SegA1 = 22;
int SegB1 = 23;
int SegC1 = 24;
int SegD1 = 25;
int SegE1 = 26;
int SegF1 = 27;
int SegG1 = 28;
int Dig1A = 29;
int Dig1B = 30;

int SegA2 = 31;
int SegB2 = 32;
int SegC2 = 33;
int SegD2 = 34;
int SegE2 = 35;
int SegF2 = 36;
int SegG2 = 37;
int Dig2A = 38;
int Dig2B = 39;

int SegA3 = 45;
int SegB3 = 46;
int SegC3 = 47;
int SegD3 = 48;
int SegE3 = 49;
int SegF3 = 50;
int SegG3 = 51;
int Dig3A = 52;
int Dig3B = 53;

int SegA4 = 17;
int SegB4 = 18;
int SegC4 = 19;
int SegD4 = 20;
int SegE4 = 21;
int SegF4 = 41;
int SegG4 = 42;
int Dig4A = 43;
int Dig4B = 44;

int i;
int j;
int n;
int ArduinoPins1[7] = {SegG1, SegF1, SegE1, SegD1, SegC1, SegB1, SegA1};   // an array of pin numbers to which LEDs
int ArduinoPins2[7] = {SegG2, SegF2, SegE2, SegD2, SegC2, SegB2, SegA2};
int ArduinoPins3[7] = {SegG3, SegF3, SegE3, SegD3, SegC3, SegB3, SegA3};
int ArduinoPins4[7] = {SegG4, SegF4, SegE4, SegD4, SegC4, SegB4, SegA4};
int SegmentPins[10][7] = {
  {0, 1, 1, 1, 1, 1, 1}, // 0
  {0, 0, 0, 0, 1, 1, 0}, // 1
  {1, 0, 1, 1, 0, 1, 1}, // 2
  {1, 0, 0, 1, 1, 1, 1}, // 3
  {1, 1, 0, 0, 1, 1, 0}, // 4
  {1, 1, 0, 1, 1, 0, 1}, // 5
  {1, 1, 1, 1, 1, 0, 1}, // 6
  {0, 0, 0, 0, 1, 1, 1}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 0, 1, 1, 1, 1}, // 9
};

void setup()

{
  pinMode(SegA1, OUTPUT);
  pinMode(SegB1, OUTPUT);
  pinMode(SegC1, OUTPUT);
  pinMode(SegD1, OUTPUT);
  pinMode(SegE1, OUTPUT);
  pinMode(SegF1, OUTPUT);
  pinMode(SegG1, OUTPUT);
  pinMode(Dig1A, OUTPUT);
  pinMode(Dig1B, OUTPUT);

  pinMode(SegA2, OUTPUT);
  pinMode(SegB2, OUTPUT);
  pinMode(SegC2, OUTPUT);
  pinMode(SegD2, OUTPUT);
  pinMode(SegE2, OUTPUT);
  pinMode(SegF2, OUTPUT);
  pinMode(SegG2, OUTPUT);
  pinMode(Dig2A, OUTPUT);
  pinMode(Dig2B, OUTPUT);

  pinMode(SegA3, OUTPUT);
  pinMode(SegB3, OUTPUT);
  pinMode(SegC3, OUTPUT);
  pinMode(SegD3, OUTPUT);
  pinMode(SegE3, OUTPUT);
  pinMode(SegF3, OUTPUT);
  pinMode(SegG3, OUTPUT);
  pinMode(Dig3A, OUTPUT);
  pinMode(Dig3B, OUTPUT);

  pinMode(SegA4, OUTPUT);
  pinMode(SegB4, OUTPUT);
  pinMode(SegC4, OUTPUT);
  pinMode(SegD4, OUTPUT);
  pinMode(SegE4, OUTPUT);
  pinMode(SegF4, OUTPUT);
  pinMode(SegG4, OUTPUT);
  pinMode(Dig4A, OUTPUT);
  pinMode(Dig4B, OUTPUT);
  
pinMode (red1, OUTPUT);
pinMode (yellow1, OUTPUT);
pinMode (green1, OUTPUT);

pinMode (red2, OUTPUT);
pinMode (yellow2, OUTPUT);
pinMode (green2, OUTPUT);

pinMode (red3, OUTPUT);
pinMode (yellow3, OUTPUT);
pinMode (green3, OUTPUT);

pinMode (red4, OUTPUT);
pinMode (yellow4, OUTPUT);
pinMode (green4, OUTPUT);

pinMode (pRed, OUTPUT);
pinMode (pGreen, OUTPUT);
pinMode (pOut, INPUT);

digitalWrite (red1, HIGH);
digitalWrite (red2, HIGH);
digitalWrite (red3, HIGH);
digitalWrite (red4, HIGH);
digitalWrite (pRed, HIGH);

}

void loop() { 

int crossIn = digitalRead (pOut);
if (crossIn == HIGH){
  walkCycle();}
else 
{
delay(100);
digitalWrite (red1, LOW);    
digitalWrite(green1,HIGH); //1st light
counterCycle2();
counterCycle2();
clearCounter2();
digitalWrite(red2,HIGH);
digitalWrite(red3,HIGH);
digitalWrite(red4,HIGH);
delay(200);
}
int crossIn2 = digitalRead (pOut);
if (crossIn2 == HIGH){
  walkCycle();}
else 
{
digitalWrite(green1,LOW);
digitalWrite(yellow1,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(red3,HIGH);
digitalWrite(red4,HIGH);
delay(500);
}
int crossIn3 = digitalRead (pOut);
if (crossIn3 == HIGH){
  walkCycle();}
else 
{  
  
digitalWrite(yellow1,LOW);
digitalWrite(red2,LOW);
digitalWrite(red1,HIGH);
digitalWrite(green2,HIGH); //2nd light
counterCycle3();
counterCycle3();
clearCounter3();
digitalWrite(red3,HIGH);
digitalWrite(red4,HIGH);
delay(200);
}
int crossIn4 = digitalRead (pOut);
if (crossIn4 == HIGH){
  walkCycle();}
else 
{
digitalWrite(green2,LOW);
digitalWrite(yellow2,HIGH);
digitalWrite(red1,HIGH);
digitalWrite(red3,HIGH);
digitalWrite(red4,HIGH);
delay(500);
}
int crossIn5 = digitalRead (pOut);
if (crossIn5 == HIGH){
  walkCycle();}
else 
{
digitalWrite(yellow2,LOW);
digitalWrite(red3,LOW);
digitalWrite(green3,HIGH);//3rd light
counterCycle4();
counterCycle4();
clearCounter4();
digitalWrite(red1,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(red4,HIGH);
delay(200);
}
int crossIn6 = digitalRead (pOut);
if (crossIn6 == HIGH){
  walkCycle();}
else 
{
digitalWrite(green3,LOW);
digitalWrite(yellow3,HIGH);
digitalWrite(red1,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(red4,HIGH);
delay(500);
}
int crossIn7 = digitalRead (pOut);
if (crossIn7 == HIGH){
  walkCycle();}
else 
{
digitalWrite(yellow3,LOW);
digitalWrite(red3,LOW);
digitalWrite(red4,LOW);
digitalWrite(green4,HIGH);//4th light
counterCycle1();
counterCycle1();
clearCounter1();
digitalWrite(red1,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(red3,HIGH);
delay(200);
}
int crossIn8 = digitalRead (pOut);
if (crossIn8 == HIGH){
  walkCycle();}
else 
{
digitalWrite(green4,LOW);
digitalWrite(red4,LOW);
digitalWrite(yellow4,HIGH);
digitalWrite(red1,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(red3,HIGH);
delay(500);
}
digitalWrite(yellow4,LOW);
digitalWrite(red4,LOW);
digitalWrite(red1,LOW);
  
}


void walkCycle() {
delay(350);
digitalWrite (red1, HIGH);
digitalWrite (red2, HIGH);
digitalWrite (red3, HIGH);
digitalWrite (red4, HIGH);

digitalWrite (yellow1, LOW);
digitalWrite (yellow2, LOW);
digitalWrite (yellow3, LOW);
digitalWrite (yellow4, LOW);

digitalWrite (green1, LOW);
digitalWrite (green2, LOW);
digitalWrite (green3, LOW);
digitalWrite (green4, LOW);
   
  digitalWrite (pGreen, HIGH); 
  digitalWrite (pRed, LOW);
  clearCounter1();
  clearCounter2();
  clearCounter3();
  clearCounter4();
  delay (3000);
  digitalWrite (pGreen, LOW); 
  //digitalWrite(pOut, LOW);  // Turn off green Pedestrian Light
  delay(250);
  for (int x = 0; x < 5; x++) {  // Flash green Ped LED 5X
    digitalWrite(pGreen, HIGH);
    delay(250);
    digitalWrite(pGreen, LOW);
    delay(250);
  }
  digitalWrite(pRed, HIGH);
}


void counterCycle1(){
  for (i = 9; i > 0; i--) {
    digitalWrite(Dig1A, 0);
    digitalWrite(Dig1B, 1);
    for (j = 0; j < 7; j++)  {
      digitalWrite(ArduinoPins1[j], SegmentPins[n][j]);
    }
    delay(200);
    digitalWrite(Dig1A, 1);
    digitalWrite(Dig1B, 0);
    for (j = 0; j < 7; j++)  {
      digitalWrite(ArduinoPins1[j], SegmentPins[i][j]);
    }
    delay(200);
  if (i == 9) {
    n--;
    if (n < 0) {
      n = 1;
      }
    }
  }
}


void counterCycle2(){
  for (i = 9; i > 0; i--) {
    digitalWrite(Dig2A, 0);
    digitalWrite(Dig2B, 1);
    for (j = 0; j < 7; j++)  {
      digitalWrite(ArduinoPins2[j], SegmentPins[n][j]);
    }
    delay(200);
    digitalWrite(Dig2A, 1);
    digitalWrite(Dig2B, 0);
    for (j = 0; j < 7; j++)  {
      digitalWrite(ArduinoPins2[j], SegmentPins[i][j]);
    }
    delay(200);
  if (i == 9) {
    n--;
    if (n < 0) {
      n = 1;
      }
    }
  }
}

void counterCycle3(){
  for (i = 9; i > 0; i--) {
    digitalWrite(Dig3A, 0);
    digitalWrite(Dig3B, 1);
    for (j = 0; j < 7; j++)  {
      digitalWrite(ArduinoPins3[j], SegmentPins[n][j]);
    }
    delay(200);
    digitalWrite(Dig3A, 1);
    digitalWrite(Dig3B, 0);
    for (j = 0; j < 7; j++)  {
      digitalWrite(ArduinoPins3[j], SegmentPins[i][j]);  
    }
    delay(200);
  if (i == 9) {
    n--;
    if (n < 0) {
      n = 1;
      }
    }
  }
}

void counterCycle4(){
  for (i = 9; i > 0; i--) {
    digitalWrite(Dig4A, 0);
    digitalWrite(Dig4B, 1);
    for (j = 0; j < 7; j++)  {
      digitalWrite(ArduinoPins4[j], SegmentPins[n][j]);
    }
    delay(200);
    digitalWrite(Dig4A, 1);
    digitalWrite(Dig4B, 0);
    for (j = 0; j < 7; j++)  {
      digitalWrite(ArduinoPins4[j], SegmentPins[i][j]); 
    }
    delay(200);
  if (i == 9) {
    n--;
    if (n < 0) {
      n = 1;
      }
    }
  }
}

void clearCounter1(){
  digitalWrite(SegA1, LOW);
  digitalWrite(SegB1, LOW);
  digitalWrite(SegC1, LOW);
  digitalWrite(SegD1, LOW);
  digitalWrite(SegE1, LOW);
  digitalWrite(SegF1, LOW);
  digitalWrite(SegG1, HIGH);
  digitalWrite(Dig1A, LOW);
  digitalWrite(Dig1B, LOW);
}

void clearCounter2(){
  digitalWrite(SegA2, LOW);
  digitalWrite(SegB2, LOW);
  digitalWrite(SegC2, LOW);
  digitalWrite(SegD2, LOW);
  digitalWrite(SegE2, LOW);
  digitalWrite(SegF2, LOW);
  digitalWrite(SegG2, HIGH);
  digitalWrite(Dig2A, LOW);
  digitalWrite(Dig2B, LOW);
}

void clearCounter3(){
  digitalWrite(SegA3, LOW);
  digitalWrite(SegB3, LOW);
  digitalWrite(SegC3, LOW);
  digitalWrite(SegD3, LOW);
  digitalWrite(SegE3, LOW);
  digitalWrite(SegF3, LOW);
  digitalWrite(SegG3, HIGH);
  digitalWrite(Dig3A, LOW);
  digitalWrite(Dig3B, LOW);
}

void clearCounter4(){
  digitalWrite(SegA4, LOW);
  digitalWrite(SegB4, LOW);
  digitalWrite(SegC4, LOW);
  digitalWrite(SegD4, LOW);
  digitalWrite(SegE4, LOW);
  digitalWrite(SegF4, LOW);
  digitalWrite(SegG4, HIGH);
  digitalWrite(Dig4A, LOW);
  digitalWrite(Dig4B, LOW);
}
