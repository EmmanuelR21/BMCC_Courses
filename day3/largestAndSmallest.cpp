#include <iostream>
using namespace std;

int main() {
  // take 3 int inputs from user, find which is largest, and which is smallest
  // ask user for 3 integer inputs
  // compare each value to the remaining values, and determine which is smallest
  // and largest
  int val1, val2, val3, largest, smallest;

  cout << "Please provide 3 integer inputs: ";
  cin >> val1 >> val2 >> val3;
  // if (val1 > val2) {
  //   if (val1 > val3) {
  //     largest = val1;
  //     if (val2 > val3) {
  //       smallest = val3;
  //     } else
  //       smallest = val2;
  //   }
  // } else {
  //   if (val2 > val3) {
  //     largest = val2;
  //     if (val1 > val3) {
  //       smallest = val3;
  //     } else {
  //       smallest = val1;
  //     }
  //   } else {
  //     largest = val3;
  //     smallest = val1;
  //   }
  // }

  smallest = largest = val1;
  if (val2 < smallest)
    smallest = val2;
  if (val3 < smallest)
    smallest = val3;
  if (val2 > largest)
    largest = val2;
  if (val3 > largest)
    largest = val3;

  cout << "Your largest number was: " << largest << endl;
  cout << "Your smallest number was: " << smallest << endl;

  return 0;
}
