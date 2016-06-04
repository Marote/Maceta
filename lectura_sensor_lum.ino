// Carga para el sensor
int photocell_pin=0;
int photocell_reading; 
int photocell_setpoint=100;
// Carga para el led
int LED_pin=3;
int LED_input=10; 


//Seccion SETUP
void setup(){
  Serial.begin(9600);
  pinMode(LED_pin,OUTPUT);
}

void loop(){
  photocell_reading=analogRead(photocell_pin);
  if(photocell_setpoint < photocell_reading)
  {
    LED_input=LED_input-1; 
  
  Serial.print("Analog reading=");
  Serial.println(photocell_reading);
  delay(1000);
}

