#include <TimerOne.h>
#include <LiquidCrystal_I2C.h>

#include <Wire.h>

LiquidCrystal_I2C lcd(0x3F, 20, 4);

//https://www.instructables.com/id/Control-Nema-Stepper-Motor-With-Arduino-and-Micro-/

#define Pulse1 9

#define Dir1 8

 

int sensorPin1 = A0;    // select the input pin for the potentiometer

int sensorValue1 = 0;  // variable to store the value coming from the sensor

int sensorPin2 = A1;    // select the input pin for the potentiometer

int sensorValue2 = 0;  // variable to store the value coming from the sensor


long delay_Micros = 100; // Set value

long currentMicros = 0; long previousMicros = 0;

volatile unsigned long sample1 = 0, sample2 = 0;

int val = 0;
void setup()

{
  
  pinMode(Pulse1, OUTPUT);

  pinMode(Dir1, OUTPUT);


  digitalWrite(Dir1, LOW);
 
Wire.begin();

lcd.begin();
//lcd.init();   // initializing the LCD
  lcd.backlight(); // Enable or Turn On the backlight 
  lcd.print(" Shree"); // Start Printing

 

    
}

void loop()

{

  currentMicros = micros();
  sensorValue1 = analogRead(sensorPin1);

  sensorValue2 = analogRead(sensorPin2);

 int val=map (sensorValue1,0,1024,400,1000);
  if (currentMicros - previousMicros >= delay_Micros)

  {

    previousMicros = currentMicros;

    digitalWrite(Pulse1, HIGH);

    delayMicroseconds(val ); //Set Value

    digitalWrite(Pulse1, LOW);

  }
 




}
