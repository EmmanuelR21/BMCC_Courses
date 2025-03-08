#include <cstdlib>
#include <iostream>
using namespace std;

// void Display(int[10], int);

int main() {
  int arr[10];

  for (int i = 0; i < 10; i++)
    arr[i] = rand() % 101;

  cout << "these are the vals of the array: " << endl;

  for (int i = 0; i < 10; i++)
    cout << arr[i] << endl;

  // Display(arr, 10);

  return 0;
}

// void Display(int arr[10], int s) {
//   int max = arr[0], min = arr[0];
//
//   for (int i = 0; i < s; i++)
//     if (arr[i] > max)
//       max = arr[i];
//     else if (arr[i] < min)
//       min = arr[i];
//
//   cout << "The max of the array is: " << max << endl
//        << "and the min of the array is: " << min << endl;
// }
