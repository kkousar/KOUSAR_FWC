#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);//arduino pins connected to LCD
int n1,n2;     //initializing input variables
int sum;       //initializing sum variable
void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  
  Serial.begin(9600);

  
  //diplaying in serial monitor
  Serial.println("Enter two numbers:");  
  while (Serial.available() == 0)    {}
  //taking first input through serial monitor
  n1= Serial.parseInt();                 
 
  //taking second input through serial monitor
  while (Serial.available() == 0)   {}  
  n2 = Serial.parseInt();

  //required sum
  sum=n1+n2;

  //printing on LCD
  lcd.print("the sum is");
  lcd.setCursor(1,7);
  lcd.print(sum);                     
}
void loop(){
    
  }
