int led1=3;
int incoming=100;
//

void setup(){
  Serial.begin(9600);
  pinMode(led1,OUTPUT);  
  analogWrite(led1,incoming);
}

void loop(){
  if(Serial.available()>0){
    incoming=Serial.read();
    analogWrite(led1,incoming);
    Serial.println(incoming,DEC);
    Serial.println(incoming,BIN);
    delay(1000);
}
}

