#include <iostream>
using namespace std;

int main() {
  int n1, n2;

  for (int choice = 1; choice == 1;) {
    cout << "\nEnter 2 numbers: ";
    cin >> n1 >> n2;
    cout << "sum = " << n1 + n2 << endl;
    cout << "Enter 0 to exit, 1 to repeat";
    cin >> choice;
  }

  return 0;
}
