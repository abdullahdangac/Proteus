int data = 0;
int green_led = 13;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(green_led, OUTPUT);
}

void loop() {
  if(Serial.available()){  
     data = Serial.read();
  }

  if(data == 'H'){
    digitalWrite(green_led, HIGH);
  }  

  else if(data == 'L'){
    digitalWrite(green_led, LOW);
  }

  else{
    digitalWrite(green_led, LOW);
  }
}
