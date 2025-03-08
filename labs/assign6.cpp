#include <iostream>
using namespace std;

int main() {
  int prev = 0, curr = 1, temp;

  while (curr <= 1000) {
    if (prev == 0)
      cout << prev << endl;
    cout << curr << endl;
    temp = curr;
    curr += prev;
    prev = temp;
  }

  return 0;
}
