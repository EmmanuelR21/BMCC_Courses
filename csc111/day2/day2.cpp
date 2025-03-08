#include <iostream>
using namespace std;

int main() {
  float salry, hrs, otHrs, wageRate = 20;
  int num;

  cout << "Please give your hours worked: ";
  cin >> hrs;
  if (hrs > 40) {
    otHrs = hrs - 40;
    cout << "Your salary is: " << (40 * wageRate) + (otHrs * (wageRate * 1.5))
         << endl;
  } else {
    cout << "Your salary is: " << hrs * wageRate << endl;
  }

  cout << "val of num is: " << num + 2 << endl;
  return 0;
}
