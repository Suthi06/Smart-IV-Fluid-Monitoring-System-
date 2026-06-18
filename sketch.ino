#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define POT_PIN 34
#define BUZZER 25
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  Serial.begin(115200);
  lcd.init();
  lcd.backlight();
  pinMode(BUZZER, OUTPUT);
}
void loop() {
  int sensor = analogRead(POT_PIN);
  int volume = map(sensor, 0, 4095, 0, 500);
  lcd.setCursor(0, 0);
  lcd.print("Volume:");
  lcd.print(volume);
  lcd.print("ml   ");
  lcd.setCursor(0, 1);
  if (volume < 100) {
    lcd.print("LOW FLUID!    ");
    tone(BUZZER, 1000);
  } else {
    lcd.print("Fluid Normal  ");
    noTone(BUZZER);
  }
  Serial.print("Volume: ");
  Serial.println(volume);
  delay(500);
}
