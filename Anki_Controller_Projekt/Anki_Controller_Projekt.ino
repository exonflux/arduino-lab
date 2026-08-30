#include <LiquidCrystal.h>

const int BUTTON1 = 9;
const int BUTTON2 = 10;
const int BUTTON3 = 11;
const int BUTTON4 = 12;

const int RED = 2;
const int GREEN = 3;
const int BLUE = 4;
int counter =0;

const int rs = 22, en = 23, d4 = 24, d5 = 25, d6 = 26, d7 = 27;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


bool lastState[4] = {true, true, true, true};


void setup() {
pinMode(BUTTON1, INPUT_PULLUP);
pinMode(BUTTON2, INPUT_PULLUP);
pinMode(BUTTON3, INPUT_PULLUP);
pinMode(BUTTON4, INPUT_PULLUP);

lcd.begin(16, 2);

pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
Serial.begin(9600);
}

void loop() {

bool current1 = digitalRead(BUTTON1);
bool current2 = digitalRead(BUTTON2);
bool current3 = digitalRead(BUTTON3);
bool current4 = digitalRead(BUTTON4);

if (current1 == LOW && lastState[0] == true){
  lcd.setCursor(1, 0);
  lcd.print("Perfect  :) ");
  analogWrite(RED, 0);
  analogWrite(GREEN, 120);
  analogWrite(BLUE, 105);
  delay(200);
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);

  counter += 1;
}

if (current2 == LOW && lastState[1] == true){
   lcd.setCursor(1, 0);
  lcd.print("Good   :>    ");
  analogWrite(RED, 0);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 0);
  delay(200);
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);

  counter += 1;
}

if (current3 == LOW && lastState[2] == true){
   lcd.setCursor(1, 0);
  lcd.print("Hard     :|   ");
  analogWrite(RED, 200);
  analogWrite(GREEN, 100);
  analogWrite(BLUE, 0);
  delay(200);
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);

  counter += 1;
}

if (current4 == LOW && lastState[3] == true){
   lcd.setCursor(1, 0);
  lcd.print("AGAIN :(        ");
  analogWrite(RED, 255);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay(200);
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  counter += 1;

}


lastState[0] = current1;
lastState[1] = current2;
lastState[2] = current3;
lastState[3] = current4;


lcd.setCursor(0, 1);
lcd.print(counter);


delay(20);
}