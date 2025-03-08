#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char name[] = "Thomas Edison";
  char school[] = "BMCC";
  char final[100];

  int length;
  length = strlen(name);

  cout << "\nLength of: " << name << " = " << length << endl;

  strcpy(final, name);
  cout << "Final string " << final << endl;
  if (strcmp(final, name) == 0)
    cout << "\nBoth strings are same." << endl;
  else
    cout << "\nBoth strings are NOT the same." << endl;

  strcat(final, school);
  cout << "Final string now " << final << endl;

  if (strcmp(final, name) == 0)
    cout << "\nBoth string are same.";
  else
    cout << "\nBoth strings are NOT the same";

  return 0;
}
