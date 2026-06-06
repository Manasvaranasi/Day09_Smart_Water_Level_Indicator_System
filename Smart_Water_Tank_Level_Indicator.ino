#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 6, 7, 8);

const int trigPin = 9;
const int echoPin = 10;

const int greenLED = 2;
const int yellowLED = 3;
const int redLED = 4;

const int buzzer = 13;

long duration;
int distance;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  lcd.begin(16, 2);

  Serial.begin(9600);

  lcd.setCursor(0, 0);
  lcd.print("Water Tank");
  lcd.setCursor(0, 1);
  lcd.print("Monitoring");
  delay(2000);
  lcd.clear();
}

void loop() {

  // Ultrasonic Measurement
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // TANK FULL
  if (distance < 30) {

    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);

    digitalWrite(buzzer, LOW);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Tank Status:");
    lcd.setCursor(0, 1);
    lcd.print("FULL");

    Serial.println("Tank Full");
  }

  // TANK MEDIUM
  else if (distance >= 30 && distance <= 50) {

    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);

    digitalWrite(buzzer, LOW);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Tank Status:");
    lcd.setCursor(0, 1);
    lcd.print("MEDIUM");

    Serial.println("Tank Medium");
  }

  // TANK LOW
  else {

    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);

    digitalWrite(buzzer, HIGH);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Tank Status:");
    lcd.setCursor(0, 1);
    lcd.print("REFILL NOW!");

    Serial.println("Tank Low - Refill Required");
  }

  delay(1000);
}