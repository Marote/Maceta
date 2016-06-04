// Carga para el sensor
int photocell_pin=0;
int photocell_reading; 
int photocell_setpoint=110;

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
    LED_input=constrain(LED_input-5,10,255); 
  }
  else if (photocell_setpoint > photocell_reading)
  {
      LED_input=constrain(LED_input+5,10,255);
  }
  analogWrite(LED_pin,LED_input);
  Serial.print("El sensor ve=");
  Serial.println(photocell_reading);
  Serial.print("La luz esta al=");
  Serial.println(LED_input/2.55);



  delay(100);
}

