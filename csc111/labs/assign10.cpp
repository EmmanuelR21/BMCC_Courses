#include <iostream>
#include <string>
using namespace std;

void PrintDaysInMonth(int, int);
int GetDays(bool, int);
string GetMonth(int);

int main() {
  int ext = 0;
  int y, m;
  while (ext != 1) {
    cout << "Enter a year and month(both in # form): ";
    cin >> y >> m;

    PrintDaysInMonth(y, m);
    cout << "To exit the program, enter 1, otherwise, enter 0 to rerun program";
    cin >> ext;
  }

  return 0;
}

void PrintDaysInMonth(int y, int m) {
  bool isLeap = false;
  int days;
  if (y % 100 == 0)
    if (y % 400 == 0)
      isLeap = true;
    else
      isLeap = false;
  else if (y % 4 == 0)
    isLeap = true;

  cout << "There are " << GetDays(isLeap, m) << " days in " << GetMonth(m) << ", " << y << endl;
}

int GetDays(bool leap, int m) {
  int d = 0;

  if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    d = 31;
  else if (m == 4 || m == 6 || m == 9 || m == 11)
    d = 30;
  else if (leap)
    d = 29;
  else
    d = 28;
  return d;
}

string GetMonth(int m) {
  string month;
  switch (m) {
  case 1:
    month = "January";
    break;
  case 2:
    month = "February";
    break;
  case 3:
    month = "March";
    break;
  case 4:
    month = "April";
    break;
  case 5:
    month = "May";
    break;
  case 6:
    month = "June";
    break;
  case 7:
    month = "July";
    break;
  case 8:
    month = "August";
    break;
  case 9:
    month = "September";
    break;
  case 10:
    month = "October";
    break;
  case 11:
    month = "November";
    break;
  case 12:
    month = "December";
    break;
  }

  return month;
}
