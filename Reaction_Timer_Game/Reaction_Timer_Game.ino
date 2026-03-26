const int button1 = 2;
const int button2 = 3;

const int led1 = 8;
const int led2 = 9;

bool gameStarted = false;

void setup()
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  randomSeed(analogRead(0));
}

void loop()
{
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);

  int waitTime = random(2000, 5000);
  delay(waitTime);

  gameStarted = true;

  while(gameStarted)
  {
    if(digitalRead(button1) == HIGH)
    {
      digitalWrite(led1, HIGH);
      gameStarted = false;
    }

    if(digitalRead(button2) == HIGH)
    {
      digitalWrite(led2, HIGH);
      gameStarted = false;
    }
  }

  delay(3000);
}