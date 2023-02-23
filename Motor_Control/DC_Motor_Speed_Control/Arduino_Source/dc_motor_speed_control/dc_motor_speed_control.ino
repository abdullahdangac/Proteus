const int potPin = A0;
const int clockwise = 7;
const int counterclockwise = 6;
const int cw = 11;
const int ccw = 10;

int potValue = 0;
int motorValue = 0;
int clockwise_state = 0;
int counterclockwise_state = 0;

void setup() {
  pinMode(clockwise, INPUT_PULLUP);
  pinMode(counterclockwise, INPUT_PULLUP);
  pinMode(cw, OUTPUT);
  pinMode(ccw, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);
  motorValue = map(potValue, 0, 1023, 0, 255);
  clockwise_state = digitalRead(clockwise);
  counterclockwise_state = digitalRead(counterclockwise);

  if(clockwise_state == LOW){
    analogWrite(cw, motorValue);
    digitalWrite(ccw, LOW);
  }
  else if(counterclockwise_state == LOW){
    analogWrite(ccw, motorValue);
    digitalWrite(cw, LOW);
  }
  else{
    digitalWrite(cw, LOW);
    digitalWrite(ccw, LOW);
  }
}
