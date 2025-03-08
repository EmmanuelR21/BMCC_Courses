/*
-Ask user for input.
-Analyze if that input is greater or less than the current smallest
 and largest nums we have. If it is either, then replace the respective value
-once the user inputs -99, close the loop, and display the smallest and
 largest numbers
*/

#include <iostream>
using namespace std;

int main() {
  int input, max, min;
  cout << "Input a series of integers (Enter -99 to exit program): ";
  cin >> input;
  max = min = input;

  while (input != -99) {
    if (input > max)
      max = input;
    else if (input < min)
      min = input;

    cin >> input;
  }

  cout << "Greatest: " << max << endl << "Least: " << min << endl;

  return 0;
}
