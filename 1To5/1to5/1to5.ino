
  const int LED[5] = {2,3,4,5,6};
 const int n = sizeof(LED) / sizeof(LED[0]);


void setup() {
  // put your setup code here, to run once:

  for (int i=0; i  < n;   i++){
    pinMode(LED[i],OUTPUT);}
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i=0;   i  < n;  i++){
    digitalWrite(LED[i],HIGH);
    delay(200);}

   for (int i=n-1;   i  >= 0;  i--){
    digitalWrite(LED[i],LOW);
    delay(200);}
}
