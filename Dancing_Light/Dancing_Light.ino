int soundPin = A0;

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int soundValue = analogRead(soundPin);

  Serial.println(soundValue);

  digitalWrite(led1, soundValue > 100);
  digitalWrite(led2, soundValue > 200);
  digitalWrite(led3, soundValue > 350);
  digitalWrite(led4, soundValue > 500);
  digitalWrite(led5, soundValue > 700);
  digitalWrite(led6, soundValue > 850);

  delay(50);
}