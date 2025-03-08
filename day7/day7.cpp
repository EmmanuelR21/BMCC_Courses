/*
-run-check ==> Do while loop
-check-run ==> While loop
*/

/*
-loop through 1 to 10, print each number, print each number squared, print each
number cubed
*/
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int i = 1;

  // while (i <= 10) {
  //   cout << i << " ";
  //   cout << pow(i, 2) << " ";
  //   cout << pow(i, 3) << endl;
  //
  //   i++;
  // }

  // do {
  //   cout << i << " ";
  //   cout << pow(i, 2) << " ";
  //   cout << pow(i, 3) << endl;
  //
  //   i++;
  // } while (i <= 10);

  for (int j = 1; j <= 10; j++) {
    cout << j << " ";
    cout << pow(j, 2) << " ";
    cout << pow(j, 3) << endl;
  }
  return 0;
}
