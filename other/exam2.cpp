#include <iostream>
using namespace std;

int ArraySum(int[], int);
float ArrayAvg(int[], int);
void ArrayDisplay(int[], int, int, float);

int main() {
  srand(time(NULL));
  int arr[10], arrTotal;
  float arrAvg;
  for (int i = 0; i < 10; i++)
    arr[i] = rand() % 100;
  arrAvg = ArrayAvg(arr, 10);
  arrTotal = ArraySum(arr, 10);
  ArrayDisplay(arr, 10, arrTotal, arrAvg);

  return 0;
}

int ArraySum(int a[], int s) {
  int total = 0;
  for (int i = 0; i < s; i++)
    total += a[i];
  return total;
}

float ArrayAvg(int a[], int s) {
  float sizeOfArr = s;
  int arrTotal = ArraySum(a, s);
  return (arrTotal / sizeOfArr);
}

void ArrayDisplay(int a[], int s, int t, float avg) {
  cout << "The contents of the array are : " << endl;
  for (int i = 0; i < s; i++)
    cout << a[i] << endl;
  cout << "The total of the array is : " << t << endl;
  cout << "The average of the array is : " << avg << endl;
}
