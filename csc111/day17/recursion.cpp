#include <iostream>
using namespace std;

int factorial(int);

int main() {
  int n;

  cout << "\nEnter a number to calculate factorial: ";
  cin >> n;

  cout << n << "! = " << factorial(n) << endl;

  return 0;
}

int factorial(int n) {
  if (n == 0)
    return 1;
  else
    return n * factorial(n - 1);
}
