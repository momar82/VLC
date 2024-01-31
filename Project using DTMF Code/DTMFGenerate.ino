#include "dtmfgen.h"
#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

//byte rowPins[ROWS] = {A2, A3, A4, A5}; //connect to the row pinouts of the keypad
byte rowPins[ROWS] = {A5, A4, A3, A2}; //connect to the row pinouts of the keypad
//byte colPins[COLS] = {8, 9, A0, A1}; //connect to the column pinouts of the keypad
byte colPins[COLS] = {A1,A0,8,9}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

// Create new instance of DTMF generator.
DTMFGenerator dtmf;

unsigned char key = '0';
unsigned char ledPin = 13;

void setup() 
{
  pinMode(ledPin, OUTPUT); 
}

void loop() 
{
  char customKey = customKeypad.getKey(); 
  if (customKey){
    // Generate DTMF tone with 100ms duration.
    digitalWrite(ledPin, HIGH);
    dtmf.generate(customKey, 200);
    
    digitalWrite(ledPin, LOW);
    delay(500); 
  }
}
