int buttonPin = 2;
int buzzerPin = 8;

int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH) {
    digitalWrite(buzzerPin, HIGH); // buzzer ON
  }
  else {
    digitalWrite(buzzerPin, LOW);  // buzzer OFF
  }

}