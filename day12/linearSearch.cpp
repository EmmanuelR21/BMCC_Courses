#include <iostream>
using namespace std;

int numInArray(int[], int, int);
void DisplayArray(int[], int);

int main() {
  int arr[20], sizeOfArr = 20;
  int userNum;
  srand(time(NULL));
  for (int i = 0; i < sizeOfArr; i++)
    arr[i] = rand() % 50;

  cout << "Give an integer you are looking for(1-49): ";
  cin >> userNum;

  DisplayArray(arr, sizeOfArr);

  cout << "Your number was found " << numInArray(arr, sizeOfArr, userNum)
       << " times." << endl;

  return 0;
}

int numInArray(int arr[], int s, int n) {
  int found = 0;

  for (int i = 0; i < s; i++)
    if (arr[i] == n)
      found++;
  return found;
}

void DisplayArray(int arr[], int s) {
  cout << "Array: " << endl;
  for (int i = 0; i < s; i++)
    cout << arr[i] << endl;
}
