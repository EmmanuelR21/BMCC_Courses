/*
-Take 2 user inputs, one is yearly salary,
 and the other is number of years employed.
-If the users salary is not greater than or
 equal to 50k, tell the user they do not
 qualify for the loan.
-Consider the yearly salary, and if it is >
 50k, consider the next condition:
    -if number of years employed is = 5, tell
     the user that the user qualifies for a
     loan
    -if this is not true, tell the user
     they do not qualify for a loan.
*/
#include <iostream>
using namespace std;

int main() {
  int yearlySalary, yearsEmployed;
  cout << "Input your yearly salary: ";
  cin >> yearlySalary;
  cout << "Input your years employed: ";
  cin >> yearsEmployed;

  if (yearlySalary < 50000) {
    cout << "You do not qualify for a loan." << endl;
  } else {
    if (yearsEmployed  5)
      cout << "You do not qualify for a loan!" << endl;
    else
      cout << "You qualify!" << endl;
  }

  return 0;
}
