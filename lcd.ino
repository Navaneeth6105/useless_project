#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
bool a,b,c,p,q,r;
String num1,num2,result,opr,error;
void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(6,OUTPUT);
  lcd.begin(16, 2);
}

void loop() {
  a=digitalRead(7);
  b=digitalRead(8);
  c=digitalRead(9);
  display();
  getbright();

}

void display(){
  if(a==0&&b==0&&c==1){
    lcd.setCursor(0, 0);
    lcd.print("ENTER THE NUMBERS");
    lcd.setCursor(0,1);
    lcd.print("                ");
  }
  else if(a==0&&b==1&c==0){
    if (Serial.available() > 0) {
      num1=Serial.readStringUntil(" ");
      num1.remove(num1.length() - 2);
      lcd.setCursor(0,1);
      lcd.print("                ");
      lcd.setCursor(0,1);
      lcd.print(num1);
    }}
    else if(a==0&&b==1&c==1){
      if (Serial.available() > 0) {
        opr=Serial.readStringUntil(" ");
        opr.remove(opr.length() - 2);
        lcd.setCursor(0,1);
        lcd.print("                ");
        lcd.setCursor(0,1);
        lcd.print(opr);
      }
    }
    else if(a==1&&b==0&c==0){
      if (Serial.available() > 0) {
        num2=Serial.readStringUntil(" ");
        num2.remove(num2.length() - 2);
        lcd.setCursor(0,1);
        lcd.print("                ");
        lcd.setCursor(0,1);
        lcd.print(num2);

      }
    }
    else if(a==1&&b==0&c==1){
      if (Serial.available() > 0) {
        result=Serial.readStringUntil(" ");
        lcd.setCursor(0,1);
        lcd.print("                ");
        lcd.setCursor(0,0);
        lcd.print("                ");
        lcd.setCursor(0,0);
        lcd.print("RESULT IS...");
        lcd.setCursor(0,1);
        result.remove(result.length() - 2);
        result = reverseString(result);
        result=num1+opr+num2+" = "+result;
        lcd.print(result);
      }
    }
    else if(a==1&&b==1&c==0){
      if (Serial.available() > 0) {
        error=Serial.readStringUntil(" ");
        lcd.setCursor(0,1);
        lcd.print("                ");
        lcd.setCursor(0,1);
        lcd.print("..ERROR......");
      }
    }
}
void getbright(){
  if(analogRead(A0)>400){p=true;}
  else{ p=false;}
  if(analogRead(A1)>400){q=true;}
  else{ q=false;}
  if(analogRead(A2)>400){r=true;}
  else{ r=false;}
  if(p==0&&q==0&&r==0){
    analogWrite(6,0);
  }
  else if(p==0&&q==0&&r==1){
    analogWrite(6,15);
  }
  else if(p==0&&q==1&&r==0){
    analogWrite(6,35);
  }
  else if(p==0&&q==1&&r==1){
    analogWrite(6,45);
  }
  else if(p==1&&q==0&&r==0){
    analogWrite(6,80);
  }
  else if(p==1&&q==0&&r==1){
    analogWrite(6,120);
  }
  else if(p==1&&q==1&&r==0){
    analogWrite(6,180);
  }
  else if(p==1&&q==1&&r==1){
    analogWrite(6,255);
  }
}

String reverseString(String str) {
  int len = str.length();
  for (int i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
  return str;
}
