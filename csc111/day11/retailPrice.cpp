#include <iostream>
using namespace std;

float Calculate(float, float);

int main() {
  float wholesale, markup;
  int ext = 1;

  while (ext == 1) {
    cout << "Enter the wholesale item price: ";
    cin >> wholesale;
    cout << "Enter the markup % as a number: ";
    cin >> markup;

    cout << "The retail price is: " << Calculate(wholesale, markup) << endl;
    cout << "Enter 1 to repeat, enter 0 to close program";
    cin >> ext;
  }

  return 0;
}

float Calculate(float w, float m) {
  float total;
  total = w + (w * (m / 100));

  return total;
}
