#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int i[10];

  for (int x = 0; x < 10; x++) {
    i[x] = rand() % 100;
  }

  for (int x = 0; x < 10; x++) {
    cout << i[x] << endl;
  }

  return 0;
}
