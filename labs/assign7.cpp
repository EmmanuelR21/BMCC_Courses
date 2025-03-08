#include <iomanip>
#include <iostream>
using namespace std;

float Celsius(float);

int main() {
  cout << "Fahrenheit into Celsius(0F-20F): " << endl;
  for (float i = 0; i < 21; i++) {
    cout << i << "F = " << setprecision(4) << Celsius(i) << "C" << endl;
  }
  return 0;
}

float Celsius(float f) { return (5.0 / 9.0) * (f - 32); }
