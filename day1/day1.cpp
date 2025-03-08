#include <iostream>

using namespace std;

int main() {
  // receives 2 int input from user
  // prints out the summation
  int firstVal, secondVal;
  cout << "Please provide your two values\nFirst Value: ";
  cin >> firstVal;
  cout << "Now provide a second: ";
  cin >> secondVal;
  cout << "The sum of your two values is: " << firstVal + secondVal << "\n";
  return 0;
}
