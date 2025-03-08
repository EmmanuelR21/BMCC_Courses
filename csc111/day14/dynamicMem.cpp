#include <iostream>
using namespace std;

int main() {
  int size, *ptr;
  srand(time(0));

  cout << "\nArray size ";
  cin >> size;

  ptr = new int[size];

  for (int i = 0; i < size; i++) {
    ptr[i] = rand() % 100;
    cout << i << " value: " << ptr[i] << ", address: " << ptr << endl;
    ptr++;
  }

  delete[] ptr;

  return 0;
}
