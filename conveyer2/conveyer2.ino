#include <TimerOne.h> 
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

 

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
 
 
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
    
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
