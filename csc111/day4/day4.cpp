#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter 2 #'s";
  cin >> a >> b;
  if (a > b)
    cout << a << " is bigger";
  else
    cout << b << " is bigger";
  return 0;
}
