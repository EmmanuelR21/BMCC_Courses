#include <iostream>
using namespace std;

int binarySearch(int[], int, int);

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  cout << "The array: " << endl;
  for (int i = 0; i < 10; i++)
    cout << arr[i] << endl;

  int pos = binarySearch(arr, 10, 5);
  cout << "The value 5 is located @: " << pos << endl;

  return 0;
}

int binarySearch(int a[], int s, int n) {
  int first = 0, last = s - 1, middle, position = -1;
  bool found = false;

  while (!found && first <= last) {
    middle = (first + last) / 2;
    cout << "middle is: " << middle << endl;
    if (a[middle] == n) {
      found = true;
      position = middle;
    } else if (a[middle] > n)
      last = middle - 1;
    else
      first = middle + 1;
  }

  return position;
}
