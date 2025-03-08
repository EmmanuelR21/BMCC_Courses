#include <cstdlib>
#include <iostream>
using namespace std;
//chap 7: 18 - 20

void DisplayArray(int[], int);
int FindLarge(int[], int);
int FindSmall(int[], int);
int ArrayTotal(int[], int);

int main() {
  int x[10], total;
  srand(time(NULL));

  for (int i = 0; i < 10; i++)
    x[i] = rand() % 100;

  DisplayArray(x, 10);
  cout << "The largest in the array is: " << FindLarge(x, 10) << endl;
  cout << "The largest in the array is: " << FindSmall(x, 10) << endl;
  total = ArrayTotal(x, 10);

  cout << "\nArray Total = " << total << endl;

  return 0;
}

void DisplayArray(int a[], int s) {
  for (int i = 0; i < s; i++)
    cout << a[i] << endl;
}

int FindLarge(int a[], int s) {
  int large = a[0];
  for (int i = 0; i < s; i++) {
    if (a[i] > large)
      large = a[i];
  }

  return large;
}

int FindSmall(int a[], int s) {
  int small = a[0];
  for (int i = 0; i < s; i++) {
    if (a[i] < small)
      small = a[i];
  }

  return small;
}

int ArrayTotal(int a[], int s) {
  int t = 0;
  for (int i = 0; i < s; i++)
    t += a[i];

  return t;
}
