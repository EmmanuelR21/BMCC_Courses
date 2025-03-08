#include <iostream>
using namespace std;

void getScore(int &);
void calcAverage(int[], int);
int findLowest(int[], int);

int main() {
  int arr[5], soa = 5;

  for (int i = 0; i < soa; i++)
    getScore(arr[i]);
  calcAverage(arr, soa);

  return 0;
}

void getScore(int &a) {
  int ext = 0;

  while (true) {
    cout << "Please enter a test score: " << endl;
    cin >> a;
    if (a >= 0 && a <= 100)
      break;
    else
      cout << "Only integer scores between 0 - 100 are allowed. Input rejected."
           << endl;
  }
}

void calcAverage(int a[], int s) {
  int sum = 0;
  int smallest = findLowest(a, s);
  for (int i = 0; i < s; i++) {
    sum += a[i];
  }

  cout << "Average of 4 highest scores: " << (sum - smallest) / 4.0 << endl;
}

int findLowest(int a[], int s) {
  int smallest = a[0];
  for (int i = 0; i < s; i++) {
    if (a[i] < smallest)
      smallest = a[i];
  }

  return smallest;
}
