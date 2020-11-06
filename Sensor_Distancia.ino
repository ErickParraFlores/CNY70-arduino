#include <LiquidCrystal.h>


 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 void setup() {
 pinMode(A0,INPUT);
 lcd.begin(16, 2);
 Serial.begin(9600);
 
}

void loop() {
  float v;
  float x1;
  float x2;
  float i=.0146;
  float j=.5322;
  float k=3.8889;
  delay(200);
  v=analogRead(A0);
  v=v*(5.0/1023.0);
  lcd.setCursor(2,0);
  lcd.print("El Voltaje :");
  lcd.setCursor(13,0);
  lcd.print(v);
  lcd.setCursor(18,0);
  lcd.print("V");
  
  
  k=k-v;
  x1 = (j + sqrt( (j*j) - (4 * i * k) ) ) / (2.0 * i);
  x2 = (j - sqrt( (j*j) - (4 * i * k) ) ) / (2.0 * i);
   lcd.setCursor(2,1);
   lcd.print("La Distancia :");
   lcd.setCursor(15,1);
   lcd.print(x2);
   lcd.setCursor(21,1);
   lcd.print("mm");
   

   lcd.scrollDisplayLeft();
    
 }
