//RGB Interfacing a Potentiometer
const int POT = 2;
const int RGB_RED = 11;
const int RGB_GREEN = 10;
const int RGB_BLUE = 9;
int val = 0;
int i = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(POT,INPUT);
  pinMode(RGB_RED,OUTPUT);
  pinMode(RGB_GREEN,OUTPUT);
  pinMode(RGB_BLUE,OUTPUT);
  //for(i=0;i<20; i++){ //i++ means incrementing the value of i by 1
    //val = analogRead(POT);
  //}
  //WHY???

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(POT); // I ADDED !!!
  Serial.println(val);
  if (val>=0 & val <320){
    digitalWrite(RGB_RED,HIGH);
    delay(1000);
    digitalWrite(RGB_RED,LOW);}
  else if ( val >= 320 & val < 900){
    digitalWrite(RGB_GREEN, HIGH) ;
    delay (1000) ;
    digitalWrite(RGB_GREEN, LOW) ;
  }
  else if ( val >= 900 & val <= 1023) {
  digitalWrite(RGB_BLUE, HIGH) ;
  delay (1000) ;
  digitalWrite(RGB_BLUE, LOW) ;
}
    
  }


