#include <iostream>
using namespace std;

// nested conditional - Conditional nested within another condition

int main() {
  int userInput;
  cout << "Input a number: ";
  cin >> userInput;
  if (userInput == 0)
    cout << "0 is neither even or odd!" << endl;
  else if (userInput % 2 == 0)
    cout << "Your number was even!" << endl;
  else
    cout << "Your number was odd!" << endl;

  return 0;
}
