#include <iostream>
using namespace std;

int *createArray(int);

int main() {
  int size, *ptr;
  cout << "Enter an integer: ";
  cin >> size;
  ptr = createArray(size);

  cout << "Array: " << endl;
  for (int i = 0; i < size; i++)
    cout << ptr[i] << endl;

  return 0;
}

int *createArray(int n) {
  srand(time(NULL));
  int *ptr;
  ptr = new int[n];

  for (int i = 0; i < n; i++)
    ptr[i] = rand() % 101;

  return ptr;
}
