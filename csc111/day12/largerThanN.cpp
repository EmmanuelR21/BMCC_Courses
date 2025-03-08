#include <iostream>
using namespace std;

void DisplayNumbersLarger(int[], int, int);

int main() {
  srand(time(NULL));
  int arr[15], sizeOfArr = 15;

  for (int i = 0; i < sizeOfArr; i++)
    arr[i] = rand() % 100;

  cout << "The values of the array are: " << endl;
  for (int i = 0; i < sizeOfArr; i++)
    cout << i + 1 << ") " << arr[i] << endl;

  DisplayNumbersLarger(arr, sizeOfArr, 56);

  return 0;
}

void DisplayNumbersLarger(int arr[], int s, int n) {
  cout << endl << "The numbers larger than " << n << " are: " << endl;
  for (int i = 0; i < s; i++) {
    if (arr[i] > n)
      cout << arr[i] << endl;
  }
}
