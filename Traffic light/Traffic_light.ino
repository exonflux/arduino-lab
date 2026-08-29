// assiged names based on pin


const int redpin = 3;
const int yellowpin = 7;
const int greenpin = 10;
const int buttonpin = 13;




void setup() {
  // setup the LED outputs and BUTTON Input Serial.Monitor as debugging step
pinMode(redpin, OUTPUT);
pinMode(yellowpin, OUTPUT);
pinMode(greenpin, OUTPUT);
pinMode(buttonpin, INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
  // check if button is pressed
int buttonpressed = digitalRead(buttonpin);

// without any interaction the traffic ligth should stay green
digitalWrite(greenpin, HIGH);

//i wanna read if its actually getting pressed or not
Serial.println(buttonpressed);

// if it is pressed initate the traffic light seqzeunze 
if (buttonpressed == LOW){
 // Green -> Yellow
    digitalWrite(greenpin, LOW);
    digitalWrite(yellowpin, HIGH);
    delay(800);
 
    // Yellow -> Red
    digitalWrite(yellowpin, LOW);
    digitalWrite(redpin, HIGH);
    delay(1500);
 
    // Red -> Red+Yellow
    digitalWrite(yellowpin, HIGH);
    delay(800);
 
    // Red+Yellow -> Green
    digitalWrite(redpin, LOW);
    digitalWrite(yellowpin, LOW);
    digitalWrite(greenpin, HIGH);
    delay(800);
  }
}
