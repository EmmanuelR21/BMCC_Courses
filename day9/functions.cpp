#include <iostream>
using namespace std;

void Display();
int Total();

int main() {
  cout << "From main" << endl;
  // for (int i = 0; i < 10; i++)
  //   Display();
  //
  // cout << "From main, again" << endl;

  cout << Total();

  return 0;
}

void Display() { cout << "From Display"; }

int Total() {
  // any start and end point
  int sum = 0;
  for (int i = 0; i < 10; i++)
    sum += (i + 1);
  return sum;
}
