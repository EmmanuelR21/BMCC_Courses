#include <cctype>
#include <iostream>
using namespace std;

int main() {
  int alp = 0, dig = 0, low = 0, upp = 0, spc = 0;
  char a[100];

  cout << "\nEnter a sentence: ";
  cin.getline(a, 100);

  for (int i = 0; a[i] != '\0'; i++) {
    a[i] = tolower(a[i]);

    if (isalpha(a[i]))
      alp++;
    // cout << "That's an alphabetic character.\n";
    if (isdigit(a[i]))
      dig++;
    // cout << "That's a numeric digit.\n";
    if (islower(a[i]))
      low++;
    // cout << "Th letter you entered is lowercase.\n";
    if (isupper(a[i]))
      upp++;
    // cout << "The letter you entered is uppercase.\n";
    if (isspace(a[i]))
      spc++;
    // cout << "That's a whitespace character.\n";
  }
  cout << a << endl;

  cout << "alp: " << alp << "\ndig: " << dig << "\nlow: " << low
       << "\nupp: " << upp << "\nspc: " << spc << endl;

  return 0;
}
