#include <iostream>
using namespace std;

int wordCount(char *);

int main() {
  char str[100];
  cout << "\nEnter a string: ";
  cin.getline(str, 100);

  cout << "\nNumber of words " << wordCount(str);

  return 0;
}

int wordCount(char *str) {
  int ctr = 0;
  while (*str != 0)
    str++;
  if()
}
