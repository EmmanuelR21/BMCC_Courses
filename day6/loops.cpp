#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter an integer: ";
  cin >> num;

  while (num > 0) {
    cout << num << endl;
    num--;
  }

  return 0;
}
