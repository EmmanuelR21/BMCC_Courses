#include <algorithm>
#include <iostream>
using namespace std;

struct DATA {
  string name;
  double score;
};

double average(DATA a[], int size);
void sort(DATA a[], int size);

int main() {
  int numberOfStudents;
  DATA *studentData;
  double ave;

  cout << "Enter number of Students: ";
  cin >> numberOfStudents;
  studentData = new DATA[numberOfStudents];

  cout << "Enter the " << numberOfStudents
       << " name-score pairs separated by spaces:\n";
  DATA *p = studentData;
  for (int k = 0; k < numberOfStudents; k++) {
    cout << "Enter name and score: ";
    cin >> p->name;
    cin >> p->score;
    if (p->score < 0) {
      cout << "You may not use negative scores. Please restart the program.";
      exit(0);
    }
    p++;
  }

  cout << "Data entered:\n";
  p = studentData;
  for (int j = 0; j < numberOfStudents; j++) {
    cout << "\n" << p->name << " " << p->score;
    p++;
  }

  sort(studentData, numberOfStudents);

  ave = average(studentData, numberOfStudents);

  cout << "\nThe list of students sorted by scores is:\n";
  p = studentData;
  for (int m = 0; m < numberOfStudents; m++) {
    cout << p->name << " " << p->score << endl;
    p++;
  }
  cout << "\nThe average is: " << ave;

  return 0;
}

double average(DATA a[], int size) {
  double sum = 0;
  DATA *p = a;
  for (int k = 0; k < size; k++) {
    sum += p->score;
    p++;
  }

  return sum / size;
}

void sort(DATA a[], int number) {
  for (int k = number - 1; k >= 1; k--) {
    DATA *maxPointer = a;
    for (DATA *p = a + 1; p != a + k + 1; p++)
      if (p->score > maxPointer->score)
        maxPointer = p;
    swap(*maxPointer, *(a + k));
  }
}
