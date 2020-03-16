#include <LiquidCrystal.h>
#define trigPin 13
#define echoPin 12
#define ledmer 11
#define ledkun 10
#define ledijo 9
#define berisik 8
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledmer, OUTPUT);
  pinMode(ledkun, OUTPUT);
  pinMode(ledijo, OUTPUT);
  pinMode(berisik, OUTPUT);

  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("ALFINWASHERE");
  delay(2000);
  lcd.clear();

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  // 1 - 49.9 cm LED Merah
  if ((distance >= 1) && (distance <= 49.9)) {
  digitalWrite(ledmer, HIGH);
  digitalWrite(berisik, HIGH);
  delay(50); 
  digitalWrite(berisik, LOW); 
  }
  else {
   digitalWrite(ledmer, LOW);
  }

  // 50 - 99.9 cm LED Kuning
  if ((distance >= 50) && (distance <= 99.9))
  { 
    digitalWrite(ledkun, HIGH);
      digitalWrite(berisik, HIGH);
  delay(100); 
  digitalWrite(berisik, LOW); 
  }
  else {
    digitalWrite(ledkun, LOW);
  }

  // 100 - 150 cm LED Hijau
  if ((distance >= 100) && (distance <= 150))
  { 
    digitalWrite(ledijo, HIGH);
      digitalWrite(berisik, HIGH);
  delay(150); 
  digitalWrite(berisik, LOW); 
  }
  else {
    digitalWrite(ledijo, LOW);
  }
  
  Serial.print(distance);
  Serial.println(" cm");

  lcd.setCursor(0,0);
  lcd.print(" JARAK (CM) ");
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.print(" cm"); 
  delay(500);
}
