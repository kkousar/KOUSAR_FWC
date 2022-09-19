#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);//arduino pins connected to LCD
int n1,n2;     //initializing input variables
int sum;       //initializing sum variable
void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);

  //required sum
  sum=10+10;

  //printing on LCD
  lcd.print("the sum is");
  lcd.setCursor(1,7);
  lcd.print(sum);                     
}
void loop(){
    
  }
