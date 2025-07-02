const int button1 = 11;
const int led1 = 7;

const int button2 = 12;
const int led2 = 8;

const int button3 = 13;
const int led3 = 10;

bool state1 = false;
bool state2 = false;
bool state3 = false;

bool last1 = LOW;
bool last2 = LOW;
bool last3 = LOW;

void setup()
{
  pinMode(button1, INPUT);
  pinMode(led1, OUTPUT);
  
  pinMode(button2, INPUT);
  pinMode(led2, OUTPUT);
  
  pinMode(button3, INPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  bool current1 = digitalRead(button1);
  if (current1 == HIGH && last1 == LOW) {
    state1 = !state1;
    digitalWrite(led1, state1);
    delay(200);
  }
  last1 = current1;

  bool current2 = digitalRead(button2);
  if (current2 == HIGH && last2 == LOW) {
    state2 = !state2;
    digitalWrite(led2, state2);
    delay(200);
  }
  last2 = current2;

  bool current3 = digitalRead(button3);
  if (current3 == HIGH && last3 == LOW) {
    state3 = !state3;
    digitalWrite(led3, state3);
    delay(200);
  }
  last3 = current3;
}