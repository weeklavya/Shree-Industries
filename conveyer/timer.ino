void timer()
{
 
    lcd.setCursor(0, 0);
    lcd.print("STICK   : "); // Start Printing

    lcd.setCursor(8, 0);
    lcd.print("        "); // Start Printing

    lcd.setCursor(8, 0);
    lcd.print(sensorValue1); // Start Printing


    lcd.setCursor(0, 1);
    lcd.print("Conveyor : "); // Start Printing

    lcd.setCursor(8, 1);
    lcd.print("        "); // Start Printing

    lcd.setCursor(8, 1);
    lcd.print(sensorValue2 ); // Start Printing


}
