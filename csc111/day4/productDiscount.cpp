// user gives an input, which is # of units that must be greater than 0
// the product sells for $99 each unit
// based on quantity, the product total price will be discounted:
//      * (10-19) -> 20%
//      * (20-49) -> 30%
//      * (50-99) -> 40%
//      * (100+) -> 50%
// return the total after discount

#include <iostream>
using namespace std;

int main() {
  int units;
  float total;

  cout << "Input the # of units purchased(greater than 0): ";
  cin >> units;
  if (units <= 0) {
    cout << "Only input an amount greater than 0!" << endl;
    return 1;
  }

  if (units >= 99)
    total = units * 99 * 0.5;
  else if (units < units > 49)
    total = units * 99 * 0.6;
  else if (units > 19)
    total = units * 99 * 0.7;
  else if (units > 9)
    total = units * 99 * 0.8;
  else
    total = units * 99;

  cout << "Your total is: " << total << endl;
  return 0;
}
