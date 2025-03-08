/*
-Ask user for mobile service package they own.
-Ask user for amount of gigabytes used
-Given the package and amount of gig's used, calculate cost:
    -If package A -> $39.99/month, limit: 4 GB, $10/gig extra
    -If package B -> $59.99/month, limit: 8 GB, $5/gig extra
    -If package C -> $69.99/month, Unlimited GB
*/

#include <iostream>
using namespace std;

int main() {
  char msp;
  int gb;
  float total;

  cout << "Which is your mobile service package?(A, B, C): ";
  cin >> msp;
  cout << "How many gigabytes did you use?: ";
  cin >> gb;

  switch (msp) {
  case 'A':
    total = 39.99;
    if (gb > 4)
      total += (10 * (gb - 4));
    break;
  case 'B':
    total = 59.99;
    if (gb > 8)
      total += (5 * (gb - 8));
    break;
  case 'C':
    total = 69.99;
    break;
  default:
    cout << "Please input an actual mobile service plan!" << endl;
    return 1;
  }

  cout << total << endl;
  return 0;
}
