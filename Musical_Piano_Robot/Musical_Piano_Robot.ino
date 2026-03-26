// Musical Piano with 4 Buttons

int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;

int buzzer = 8;

// Musical Notes
int note1 = 262; // C
int note2 = 294; // D
int note3 = 330; // E
int note4 = 349; // F

void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  
  pinMode(buzzer, OUTPUT);
}

void loop() {

  if (digitalRead(button1) == HIGH) {
    tone(buzzer, note1);
  }

  else if (digitalRead(button2) == HIGH) {
    tone(buzzer, note2);
  }

  else if (digitalRead(button3) == HIGH) {
    tone(buzzer, note3);
  }

  else if (digitalRead(button4) == HIGH) {
    tone(buzzer, note4);
  }

  else {
    noTone(buzzer);
  }

}