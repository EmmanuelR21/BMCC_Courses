#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // double userCost, tax, total;
  //
  // cout << "Input the cost of your items: ";
  // cin >> userCost;
  // tax = 0.1 * userCost;
  // total = userCost + tax;
  // cout << "Item Cost: " << "$" << userCost << endl;
  // cout << "Tax " << "$" << tax << endl;
  // cout << "Total " << "$" << fixed << setprecision(2) << total << endl;
  // return 0;

  double cost, tax, total;
  cout << "\nEnter cost";
  cin >> cost;
  tax = cost * 0.1;
  total = cost + tax;
  cout << "\nTotal =" << setprecision(10) << total << endl;

  return 0;

}
