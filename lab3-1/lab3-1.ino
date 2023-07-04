#include <LiquidCrystal_I2C.h>

#include <LiquidCrystal_I2C.h> //ประกาศ Library ของจอ I2C
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
lcd.begin();  /*LCD display initialized*/
lcd.clear();     /*Clear LCD Display*/
lcd.backlight();      /*Turn ON LCD Backlight*/
lcd.setCursor(2, 0);  /*Set cursor to Row 1*/
lcd.print("Hello World"); /*print text on LCD*/
lcd.setCursor(2, 1);  /*set cursor on row 2*/
lcd.print("Chitralada"); /*print message on LCD*/
}

void loop()
{
}
