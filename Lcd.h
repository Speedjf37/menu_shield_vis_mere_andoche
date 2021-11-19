
#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
const byte rowsLCD      = 2;     // Nb rows  LCD
const byte columnsLCD   = 16;    // Nb colum LCD

//const byte ARROW        = 0;
//const byte iArrow[8]    = { B00000, B00100, B00110, B11111, B00110, B00100, B00000, B00000 };
const uint8_t C_ARROW        = 0;
const uint8_t iArrow[8]    = { B00000, B00100, B00110, B11111, B00110, B00100, B00000, B00000 };
//const byte customBackslash[8] = {  0b00000,  0b10000,  0b01000,  0b00100,  0b00010,  0b00001,  0b00000,  0b00000};
const uint8_t C_BackSlash   = 7;
const uint8_t customBackslash[8] = {  0b00000,  0b10000,  0b01000,  0b00100,  0b00010,  0b00001,  0b00000,  0b00000};


/*-----( Declare Variables )-----*/
int lcd_key       = 0;
int adc_key_in    = 0;
int adc_key_prev  = 0;


SetupLcd()
{
    lcd.begin(columnsLCD, rowsLCD);
    lcd.createChar(C_ARROW, iArrow);
    lcd.createChar(C_BackSlash, customBackslash);
}
