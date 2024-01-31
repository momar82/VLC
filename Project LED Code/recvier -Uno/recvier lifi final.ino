//Receiver Side:
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include <SoftwareSerial.h>
#include <Keypad.h>

int x=0;
int y;

void setup()
{
  pinMode(A3, INPUT);//LCD INPUT PORT
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);


  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  //lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("   WELCOME TO    ");
  lcd.setCursor(0, 1);
  lcd.print("  VLC Project    ");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Choose the zone");
  lcd.setCursor(0,1);
  lcd.print("For VLC Connect");
  
  
}
void loop()
{
  unsigned long duration = pulseIn(A3, HIGH);
  Serial.println(duration);

  if (duration > 10000 && duration < 17000)
  {
    lcd.clear();
    x=x+1;
    y=1;
    lcd.setCursor(x, 0);
    lcd.print("Zone1:Turned ON");
    
    digitalWrite(2, HIGH);   
    

  }
  else if (duration > 20000 && duration < 27000)
  {
    lcd.clear();
    x=x+1;
    y=2;
    lcd.print("Zone2:Turned ON");
    delay(3000);
    digitalWrite(3, HIGH); 

  }
  else if (duration > 30000 && duration < 37000)
  {
    lcd.clear();
    x=x+1;
    y=3;
    lcd.setCursor(x, 0);
    lcd.print("Zone3:Turned ON");
    delay(3000);
    digitalWrite(4, HIGH);  
    digitalWrite(5, HIGH);
  }
else if (duration > 40000 && duration < 47000)
  {
    lcd.clear();

    x=x+1;
    y=4;
    lcd.setCursor(x, 0);
    lcd.print("Zone4:Turned ON");
    delay(3000);
    
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(7, LOW);
   delay(500);
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(7, LOW);
   delay(500);
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(7, LOW);
   delay(500);
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(7, LOW);
   delay(500);
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(7, LOW);
   delay(500);
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(7, LOW);
   delay(500);
  }

  else if (duration > 50000 && duration < 57000)
  {
    x=x+1;
    y=5;
    lcd.setCursor(x, 0);
    lcd.print("5");
  }
  else if (duration > 60000 && duration < 67000)
  {
    lcd.clear();
    lcd.setCursor(x, 0);
    lcd.print("ALL ZONE ON");
    
    x=x+1;
    y=6;
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(7, LOW);
   delay(500);
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(7, LOW);
   delay(500);
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(7, LOW);
   delay(500);
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(7, LOW);
   delay(500);
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(7, LOW);
   delay(500);
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)           // wait for a second
   delay(500);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  
   
  
    

  }
  else if (duration > 70000 && duration < 77000)
  {
    x=x+1;
    y=7;
    lcd.setCursor(x, 0);
    lcd.print("7");
  }
  else if (duration > 80000 && duration < 87000)
  {
    x=x+1;
    y=8;
    lcd.setCursor(x, 0);
    lcd.print("8");
  }
  else if (duration > 90000 && duration < 97000)
  {
    x=x+1;
    y=9;
    lcd.setCursor(x, 0);
    lcd.print("9");
  }
  else if (duration > 120000 && duration < 127000)
  {
    lcd.clear();
     lcd.print("A");

    
   /* if (y=="A")
   // {
     lcd.clear();
      
       x=0;
       lcd.setCursor(0, 0);
       
       
    }
   // else if (y=="B")
    {
       lcd.clear();
       x=0;
       lcd.setCursor(5, 0);
       lcd.print("Madani");

    }
     else if (y=="C")
    {
       lcd.clear();
       x=0;
       lcd.setCursor(5, 0);
       lcd.print("Shora");

    }
     else if (y=="D")
    {
       lcd.clear();
       x=0;
       lcd.setCursor(5, 0);
       lcd.print("Rani");

    }*/
    


  }
 else if (duration > 110000 && duration < 117000)
  {
    x=0;
    y=0;
    lcd.setCursor(x, 0);
    lcd.print("0");
  }
  else if (duration > 130000 && duration < 137000)
  { lcd.clear();
    x=0;
    y="A";
    lcd.setCursor(x, 0);
    lcd.print("A");
  }
  else if (duration > 140000 && duration < 147000)
  { lcd.clear();
    x=0;
    y="B";
    lcd.setCursor(x, 0);
    lcd.print("B");
  }
  else if (duration > 150000 && duration < 157000)
  { lcd.clear();
    x=0;
    y="C";
    lcd.setCursor(x, 0);
    lcd.print("C");
  }
  else if (duration > 160000 && duration < 167000)
  { lcd.clear();
    x=0;
    y="D";
    lcd.setCursor(x, 0);
    lcd.print("D");
  }


   else if (duration > 100000 && duration < 107000)
  { 
    lcd.clear();
    lcd.print("All Zones OFF");
    x=0;
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW); 
    digitalWrite(7, LOW); 
       lcd.setCursor(0, 0);
  lcd.print("   WELCOME TO    ");
  lcd.setCursor(0, 1);
  lcd.print("  VLC Project    ");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Choose the zone");
  lcd.setCursor(0,1);
  lcd.print("For VLC Connect");
    //lcd.setCursor(0, 0);
    //lcd.print("                     ");
  }
}
