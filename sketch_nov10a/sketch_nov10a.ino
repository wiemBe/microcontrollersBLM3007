void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  for(int i=12; i>4; i--){
    pinMode(i, OUTPUT);
  }
}
void loop() {

  int pot1 = analogRead(A0);
  int pot2 = analogRead(A1);
  int led1 = map(pot1, 0, 1023, 0 ,255);
  int led2 = map(pot2, 0, 1023, 0 ,255);


  for(int k=13; k>4; k--){
   analogWrite(k, led1); 
   delay(led2);
   analogWrite(k, 0);
  }
   
}