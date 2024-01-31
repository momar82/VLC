#include "MT8870.h"
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

MT8870 DTMF;
void setup()
{
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
  
  // Print a message on both lines of the LCD.
  //lcd.setCursor(0,0);   //Set cursor to character 2 on line 0

  //Serial.begin(115200);
  //Serial.println(__FILE__);
 lcd.print("MT8870_LIB_VERSION: ");
 lcd.setCursor(0,1);
  lcd.println(MT8870_LIB_VERSION);
  DTMF.begin(2, 4, 5, 6, 7);
}
void loop()
{
  if (DTMF.available())
  {
    int raw = DTMF.readRaw();
    char ch = DTMF.read();
    lcd.clear();  
    //lcd.setCursor(2,0);
    lcd.print(raw);
    lcd.print("----");
    lcd.print(ch);
  }
}