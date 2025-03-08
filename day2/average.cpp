#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float input1, input2, input3, numOfInt;

  cout << "Please give 3 integer inputs: ";
  cin >> input1 >> input2 >> input3;

  cout << "The average of your inputs is: "
       << (input1 + input2 + input3) / 3 << endl;

  return 0;
}
