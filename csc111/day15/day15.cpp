#include <algorithm>
#include <iostream>
using namespace std;

double average(double score[], int size);

int main() {
  int numberOfScores;
  double *testScore;
  double ave;

  cout << "Enter number of Scores: ";
  cin >> numberOfScores;

  testScore = new double[numberOfScores];

  cout << "Enter the " << numberOfScores << " scores separated by spaces:\n";
  double *p = testScore;
  for (int k = 0; k < numberOfScores; k++) {
    cin >> *p;
    if (*p < 0) {
      cout << "You may not use negative scores. Please restart the program.";
      exit(0);
    }
    p++;
  }

  cout << "Scores entered:\n";
  p = testScore;
  for (int j = 0; j < numberOfScores; j++) {
    cout << *p << " ";
    p++;
  }

  sort(testScore, testScore + numberOfScores);

  p = testScore;
  p++;
  ave = average(p, numberOfScores - 1);

  cout << "\nThe list of sorted scores is:\n";
  p = testScore;
  p++;
  for (int m = 0; m < numberOfScores - 1; m++) {
    cout << *p << " ";
    p++;
  }
  cout << "\nThe average is: " << ave;

  return 0;
}

double average(double a[], int size) {
  double sum = 0;
  double *p = a;
  for (int k = 0; k < size; k++) {
    sum += *p;
    p++;
  }

  return sum / size;
}
