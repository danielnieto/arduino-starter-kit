int switchState = 0;

int LED_RED_1 = 5;
int LED_RED_2 = 4;
int LED_GREEN = 3;

int SWITCH_PIN = 2;

int DELAY_MS = 200;

void setup() {
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED_1, OUTPUT);
  pinMode(LED_RED_2, OUTPUT);
  pinMode(SWITCH_PIN, INPUT);
}

void loop() {

  switchState = digitalRead(SWITCH_PIN);

  if (switchState == LOW) {

    digitalWrite(LED_RED_1, LOW);
    digitalWrite(LED_RED_2, LOW);
    digitalWrite(LED_GREEN, HIGH);

  } else {

    digitalWrite(LED_RED_1, HIGH);
    digitalWrite(LED_RED_2, LOW);
    digitalWrite(LED_GREEN, LOW);

    delay(DELAY_MS);

    digitalWrite(LED_RED_1, LOW);
    digitalWrite(LED_RED_2, HIGH);

    delay(DELAY_MS);
  }
}
