#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double val = 3.148976;
  cout << val << endl;

  // cout << setprecision(4) << val << endl;
  // cout << setprecision(2) << val << endl;

  // cout << setw(10) << val << endl;
  // cout << setw(5) << val << endl;

  cout << setfill('*') << setw(15) << val << endl;
  cout << setfill('*') << setw(20) << val << endl;

  return 0;
}
