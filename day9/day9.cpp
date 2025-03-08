#include <iostream>
using namespace std;

int main() {
  int numOfRows;
  cout << "Enter number of rows: ";
  cin >> numOfRows;

  for (int i = numOfRows; i > 0; i--) {
    for (int j = 0; j < i; j++)
      cout << "*";
    cout << endl;
  }

  return 0;
}
