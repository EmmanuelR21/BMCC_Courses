#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  long i, factorial = 1;
  cout << "Please input a #: ";
  cin >> i;
  if (i < 0) {
    cout << "Invalid input!" << endl;
    return 0;
  }

  while (i > 1) {
    factorial *= i;
    i--;
  }

  cout << fixed << factorial << endl;

  return 0;
}
