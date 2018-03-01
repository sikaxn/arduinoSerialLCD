//LCD display.
//Nathan zhou
//Nathan_zhou@outlook.com
//Under GNU license

#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int row = 0;
int column = 0;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // initialize the serial communications:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  lcd.setCursor(0, 0);
  digitalWrite(8,HIGH);
}

void loop() {
  /*
  digitalWrite(8,HIGH);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Happy Birthday!");
  lcd.setCursor(0,1);
  lcd.print("^-^");
  delay(2000);  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Amy is the best!");
  lcd.setCursor(0,1);
  lcd.print("Hahaha!");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("CHALLENGE");
  lcd.setCursor(0,1);
  lcd.print("Change words ");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Change words ");
  lcd.setCursor(0,1);
  lcd.print("on this screen");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("HAVEFUN!");
  lcd.setCursor(0,1);
  lcd.print("--NATHAN");
  delay(2000);
   lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" ");
  lcd.setCursor(0,1);
  lcd.print(" ");
  delay(2000);
  //begin Mcode
  digitalWrite(8,LOW);
  delay(5000);
  //wait timmer
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(2000);
  //mcode 2
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(700);
  
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(700);
  
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(700);
  
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  
  delay(2000);
  //morse3
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(700);

  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(700);

  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(5000);
  digitalWrite(8,HIGH);
  lcd.setCursor(0,0);
  lcd.print("CODEC");
  lcd.setCursor(0,1);
  lcd.print("GUESS!");
  delay(500);lcd.clear();delay(500);
  */
  
  /*
   * 
   * This following code is for you to explorer.
   *
    */
  // when characters arrive over the serial port...
  row = 0;
  column = 0;
  if (Serial.available() > 1) {
    digitalWrite(8,HIGH);
    delay(100);
         lcd.clear();
          while (Serial.available() > 0) {
            Serial.print("go \n ");
            if(column > 15){
              Serial.print("more than 16, the row is");
              Serial.print(row);
              if(row = 01){
                row = 1;
                lcd.setCursor(0,1);
                Serial.print("indent");
                column = 0;
                row = 1;
              }
              else{
                lcd.setCursor(0,0);
                column = 0;
              }
            }
            lcd.write(Serial.read());
            column++;
            Serial.print(column);
            }
     
  }
  
}




