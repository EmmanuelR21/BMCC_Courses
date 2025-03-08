#include <iostream>
using namespace std;

float averageOfArray(int *, int);
void bubbleSort(int *, int);

int main() {
  int size, *ptr, score, i = 0;

  cout << "How large would you like your array: ";
  cin >> size;

  ptr = new int[size];

  cout << "Enter the scores: ";
  while (i < size) {
    cin >> score;
    if (score < 0) {
      cout << "Scores cannot be negative!" << endl;
      continue;
    }
    ptr[i] = score;
    i++;
  }

  cout << "Array: " << endl;
  for (int i = 0; i < size; i++)
    cout << ptr[i] << endl;

  bubbleSort(ptr, size);
  cout << "Array sorted: " << endl;
  for (int i = 0; i < size; i++)
    cout << ptr[i] << endl;

  cout << "The average of Array: " << averageOfArray(ptr, size) << endl;

  return 0;
}

void bubbleSort(int *arr, int n) {
  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
}

float averageOfArray(int *arr, int n) {
  float sum = 0;
  for (int i = 0; i < n; i++)
    sum += arr[i];

  return (sum / n);
}
