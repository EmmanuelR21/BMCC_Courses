#include <iostream>

using namespace std;

int main() {
  float celsius;
  float fahrenheit;

  cout << "Please provide a temperature in celsius: ";
  cin >> celsius;
  fahrenheit = (9.0 / 5.0) * celsius + 32;
  cout << "Your temperature in fahrenheit is: " << fahrenheit << endl;

  return 0;
}
