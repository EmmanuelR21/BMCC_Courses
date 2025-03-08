#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char first[15], middle[15], last[15];
  char final[50];

  cout << "Your first name: ";
  cin.getline(first, 15);
  cout << "\nYour last name: ";
  cin.getline(last, 15);
  cout << "\nYour middle name(Press Enter if n/a): ";
  cin.getline(middle, 15);

  strcpy(final, last);
  strcat(final, ", ");
  strcat(final, first);
  strcat(final, " ");
  strcat(final, middle);

  cout << "Final: " << final << endl;
  // for (int i = 0; final[i] != '\0'; i++)
  //   cout << final[i];
  cout << endl;

  return 0;
}
