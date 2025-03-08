#include <iostream>
using namespace std;

void bubbleSort(int[], int);
void swap(int &, int &);

int main() {
  srand(time(NULL));
  int arr[10];
  for (int i = 0; i < 10; i++)
    arr[i] = rand() % 21;

  cout << "Array before sort: " << endl;
  for (int i = 0; i < 10; i++)
    cout << arr[i] << endl;

  bubbleSort(arr, 10);

  cout << "Array after sort: " << endl;
  for (int i = 0; i < 10; i++)
    cout << arr[i] << endl;

  return 0;
}

void bubbleSort(int a[], int s) {
  int maxElement, index;
  for (maxElement = s - 1; maxElement > 0; maxElement--)
    for (index = 0; index < maxElement; index++) {
      if (a[index] > a[index + 1])
        swap(a[index], a[index + 1]);
    }
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}
