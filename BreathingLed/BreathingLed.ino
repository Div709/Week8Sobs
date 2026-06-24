int led = 3;
int i = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
 

}

void loop() {
  // put your main code here, to run repeatedly:
   
   for (i=0;i<=255;i++){
    Serial.println(i);
    analogWrite(led,i);
    delay(150);
    if (i==255){
      for (i==255;i=0;i--){
      analogWrite(led,i);
      delay(150);

    }
  }
  }
  
 


}
