#include <iostream>
using namespace std;

int main() {
  int input, total = 0;
  cout << "Enter a number: ";
  cin >> input;
  while (input > 1) {
    if (input % 2 == 0)
      total += input;
    input--;
  }
  cout << total << endl;

  return 0;
}
