#include <iostream>
using namespace std;

// passing by reference - Address
// passing by value - Copy

void ChangeVal(int &, int);

int main() {
  int x = 5, y = 7;
  cout << "x = " << x << "y = " << y << endl;
  ChangeVal(x, y);
  cout << "x = " << x << "y = " << y << endl;

  return 0;
}

void ChangeVal(int &a, int b) {
  a = 10;
  b = 15;
  cout << "A = " << a << "B = " << b << endl;
}
