#include <LiquidCrystal_I2C.h>

#include <Wire.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
 
  Serial.begin(9600);

  //Use predefined PINS consts

  Wire.begin();

  lcd.begin();
  //lcd.init();   // initializing the LCD
  lcd.backlight(); // Enable or Turn On the backlight

  lcd.setCursor(0, 0);
  lcd.print("Shree"); // Start Printing
  lcd.setCursor(0, 1);
  lcd.print("Industries"); // Start Printing

  delay(1000);
}

void loop() { // do nothing here

 int stick = analogRead(A1);

int conveyer = analogRead(A0);

  lcd.begin();

  int val1 = map (stick, 0, 1024, 36, 18);


  int val2 = map (conveyer, 0, 1024, 70, 35);

  lcd.setCursor(0, 0);
  
  lcd.print("Conveyer: "); // Start Printing
  lcd.print(val2);
  lcd.setCursor(0, 1);
  lcd.print("Stick   : "); // Start Printing
  lcd.print(val1);

//delay(00);

}
