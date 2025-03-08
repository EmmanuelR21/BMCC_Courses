#include <iostream>
using namespace std;

int square(int);
float square(float);

int main() {
  cout << "Square of 2 = " << square(2) << endl;
  cout << "Square of 3.5 = " << square(3.5) << endl;
  return 0;
}

int square(int x) { return (x * x); }
float square(float y) { return (y * y); }
