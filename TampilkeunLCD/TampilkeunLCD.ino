#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define MERAH 8 
#define KUNING 13
#define HIJAU 9

void setup() {
  lcd.begin(16, 2);
  pinMode(MERAH, OUTPUT);
  pinMode(KUNING, OUTPUT);
  pinMode(HIJAU, OUTPUT);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("SELAMAT DATANG!");
  delay(500);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("Arduino LCD");
  delay(500);
  lcd.clear();

  // MERAH
  lcd.setCursor(0,0);
  lcd.print("LED MERAH"); 
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("ON");
  digitalWrite(MERAH, HIGH);
  delay(2000);
  digitalWrite(MERAH, LOW); 
  lcd.clear(); 

  // HIJAU
  lcd.setCursor(0,0);
  lcd.print("LED HIJAU");
  delay(500); 
  lcd.setCursor(0,1);
  lcd.print("ON");
  digitalWrite(HIJAU, HIGH);
  delay(2000); 
  digitalWrite(HIJAU, LOW);
  lcd.clear();
  
  // KUNING
  lcd.setCursor(0,0);
  lcd.print("LED KUNING"); 
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("ON");
  digitalWrite(KUNING, HIGH);
  delay(2000); 
  digitalWrite(KUNING, LOW);
  lcd.clear();  
}
