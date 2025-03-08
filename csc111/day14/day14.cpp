#include <iostream>
using namespace std;

int main() {
  int x = 10, *ptr;
  ptr = &x;

  cout << "x(Value of x) = " << x << endl;
  cout << "&x(Address of x) = " << &x << endl;
  cout << "*ptr(value of address ptr points to) = " << *ptr << endl;
  cout << "ptr(address pointing to address of x) = " << ptr << endl;
  cout << "&ptr(address of ptr) = " << &ptr << endl;

  return 0;
}
