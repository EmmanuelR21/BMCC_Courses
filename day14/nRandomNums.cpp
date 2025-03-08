#include <iostream>
using namespace std;

int *getRandom(int);

int main() {
  int userInput, *ptr;
  cout << "Input numbers you want in array: ";
  cin >> userInput;

  ptr = getRandom(userInput);
  cout << "Array: " << endl;
  for (int i = 0; i < userInput; i++)
    cout << ptr[i] << endl;

  return 0;
}

int *getRandom(int n) {
  srand(time(NULL));
  int *ptr = new int[n];

  for (int i = 0; i < n; i++)
    ptr[i] = rand() % 100;

  return ptr;
}
