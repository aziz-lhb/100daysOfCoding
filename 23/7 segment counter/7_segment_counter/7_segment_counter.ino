int Ntime = 0;
int Otime = 0;
float X = 0;
int time = 4;

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int pinDP = 1;

int DIG1 = 12;
int DIG2 = 11;
int DIG3 = 10;
int DIG4 = 9;

void choose_digit(char num) {
  switch (num) {
  default: digitalWrite(pinA, LOW); digitalWrite(pinB, LOW); digitalWrite(pinC, LOW); digitalWrite(pinD, LOW); digitalWrite(pinE, LOW); digitalWrite(pinF, LOW); digitalWrite(pinG, HIGH); digitalWrite(pinDP, HIGH); break; case 1: digitalWrite(pinA, HIGH); digitalWrite(pinB, LOW); digitalWrite(pinC, LOW); digitalWrite(pinD, HIGH); digitalWrite(pinE, HIGH); digitalWrite(pinF, HIGH); digitalWrite(pinG, HIGH); digitalWrite(pinDP, HIGH); break; case 2: digitalWrite(pinA, LOW); digitalWrite(pinB, LOW); digitalWrite(pinC, HIGH); digitalWrite(pinD, LOW); digitalWrite(pinE, LOW); digitalWrite(pinF, HIGH); digitalWrite(pinG, LOW); digitalWrite(pinDP, HIGH); break; case 3: digitalWrite(pinA, LOW); digitalWrite(pinB, LOW); digitalWrite(pinC, LOW); digitalWrite(pinD, LOW); digitalWrite(pinE, HIGH); digitalWrite(pinF, HIGH); digitalWrite(pinG, LOW); digitalWrite(pinDP, HIGH); break; case 4: digitalWrite(pinA, HIGH); digitalWrite(pinB, LOW); digitalWrite(pinC, LOW); digitalWrite(pinD, HIGH); digitalWrite(pinE, HIGH); digitalWrite(pinF, LOW); digitalWrite(pinG, LOW); digitalWrite(pinDP, HIGH); break; case 5: digitalWrite(pinA, LOW); digitalWrite(pinB, HIGH); digitalWrite(pinC, LOW); digitalWrite(pinD, LOW); digitalWrite(pinE, HIGH); digitalWrite(pinF, LOW); digitalWrite(pinG, LOW); digitalWrite(pinDP, HIGH); break; case 6: digitalWrite(pinA, LOW); digitalWrite(pinB, HIGH); digitalWrite(pinC, LOW); digitalWrite(pinD, LOW); digitalWrite(pinE, LOW); digitalWrite(pinF, LOW); digitalWrite(pinG, LOW); digitalWrite(pinDP, HIGH); break; case 7: digitalWrite(pinA, LOW); digitalWrite(pinB, LOW); digitalWrite(pinC, LOW); digitalWrite(pinD, HIGH); digitalWrite(pinE, HIGH); digitalWrite(pinF, HIGH); digitalWrite(pinG, HIGH); digitalWrite(pinDP, HIGH); break; case 8: digitalWrite(pinA, LOW); digitalWrite(pinB, LOW); digitalWrite(pinC, LOW); digitalWrite(pinD, LOW); digitalWrite(pinE, LOW); digitalWrite(pinF, LOW); digitalWrite(pinG, LOW); digitalWrite(pinDP, HIGH); break; case 9: digitalWrite(pinA, LOW); digitalWrite(pinB, LOW); digitalWrite(pinC, LOW); digitalWrite(pinD, LOW); digitalWrite(pinE, HIGH); digitalWrite(pinF, LOW); digitalWrite(pinG, LOW); digitalWrite(pinDP, HIGH); break;

      ;
  }
}

void pick_digit(int digit) {
  digitalWrite(DIG1, LOW);
  digitalWrite(DIG2, LOW);
  digitalWrite(DIG3, LOW);
  digitalWrite(DIG4, LOW); switch (digit) {
  case 1: digitalWrite(DIG1, HIGH); break; case 2: digitalWrite(DIG2, HIGH); break; case 3: digitalWrite(DIG3, HIGH); break; default: digitalWrite(DIG4, HIGH); break;
  }

}

void decimal_place() {
  digitalWrite(pinDP, LOW);
}

void seven_segment(int number) {
  unsigned char thousands = int (number / 1000);
  unsigned char hundreds = int ((number / 100) % 10);
  unsigned char tens = int ((number / 10) % 10);
  unsigned char ones = int (number % 10); //1234
  if (thousands > 0) {
    choose_digit(thousands);
    pick_digit(1);
  }

  if ((hundreds > 0) | (thousands > 0)) {
    delay(time); choose_digit(hundreds);
    pick_digit(2);
  }

  if ((tens > 0) || (hundreds > 0) | (thousands > 0)) {
    //decimal_place();
    delay(time); choose_digit(tens);
    pick_digit(3);
  }


  // add decimal point
  delay(time); choose_digit(ones);
  pick_digit(4);

  delay(time);

}

void setup() {
  pinMode(DIG1, OUTPUT);
  pinMode(DIG2, OUTPUT);
  pinMode(DIG3, OUTPUT);
  pinMode(DIG4, OUTPUT); 
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinDP, OUTPUT);

}

void loop() {
float sensor_value = map(analogRead(A0),0,1023,0,3000); // for Flood level Sensor this Eg:3000 is the maximum level
seven_segment(sensor_value);

}
