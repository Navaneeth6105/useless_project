#include <Keypad.h>

const byte ROWS = 4;   
const byte COLS = 4;   
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6};  
byte colPins[COLS] = {5, 4, 3, 2};   

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

long num1 = 0;
long num2 = 0;
bool calculatorrun=false;
char operation = '\0';
bool isSecondNum = false;

void setup() {
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  Serial.println("Enter numbers and operations:");

}

void loop() {
  char key = keypad.getKey();
  if(key){
    calculator(key);
  }
}


int calculator(char key){
    if (key >= '0' && key <= '9') {
      if (!isSecondNum) {
        num1 = num1 * 10 + (key - '0');
        digitalWrite(10,LOW);
        digitalWrite(11,HIGH);
        digitalWrite(12,LOW);
        Serial.println(num1);
      } else {
        num2 = num2 * 10 + (key - '0'); 
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
        digitalWrite(12,LOW);
        Serial.println(num2);

      }
    }
    else if (key == 'A' || key == 'B' || key == 'C' || key == 'D') {
      if (key == 'A') operation = '+';
      else if (key == 'B') operation = '-';
      else if (key == 'C') operation = '*';
      else if (key == 'D') operation = '/';

      isSecondNum = true; 
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      Serial.println(operation);
    }
    else if (key == '#') {
      float result = 0;
      if (operation == '+') result = num1 + num2;
      else if (operation == '-') result = num1 - num2;
      else if (operation == '*') result = num1 * num2;
      else if (operation == '/') {
        if (num2 != 0) result = (float)num1 / num2;
        else {
          digitalWrite(10,HIGH);
          digitalWrite(11,HIGH);
          digitalWrite(12,LOW);
          Serial.println("Error: Division by zero");
          num1 = 0;
          num2 = 0;
          operation = '\0';
          isSecondNum = false;
          return 1;
        }
      }
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
      Serial.println(result);
      num1 = 0;
      num2 = 0;
      operation = '\0';
      isSecondNum = false;
      return 1;
    }
    else if (key == '*') {
      num1 = 0;
      num2 = 0;
      operation = '\0';
      isSecondNum = false;
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
      return 1;
    }
}
