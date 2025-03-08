#include <iostream>
using namespace std;

int calculate(int, int, char);
void input();
void display(int);

int main() {
  int ext = 1;
  while (ext == 1) {
    input();
    cout << "Enter 1 to repeat the process, enter any other integer to close "
            "program."
         << endl;
    cin >> ext;
  }
  return 0;
}

void input() {
  int num1, num2;
  char operand;

  cout << "Enter 2 integer inputs: ";
  cin >> num1 >> num2;
  cout << "Enter the operation you would like to perform(+,-,*,/,%): ";
  cin >> operand;

  display(calculate(num1, num2, operand));
}

int calculate(int num1, int num2, char operand) {
  int result = 0;

  switch (operand) {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 == 0) {
      cout << "Invalid input! Cannot divide by 0" << endl;
      break;
    }
    result = num1 / num2;
    break;
  case '%':
    result = num1 % num2;
    break;
  }

  return result;
}

void display(int r) { cout << "Your result is: " << r << endl; }
