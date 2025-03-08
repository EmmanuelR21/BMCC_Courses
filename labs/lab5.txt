#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
  int num = rand() % 1000, userGuess = -1;

  cout << "Try to guess the random integer value(0-999): ";
  while (userGuess != num) {
    cin >> userGuess;
    if (userGuess > num)
      cout << "Too high, try again!" << endl;
    else if (userGuess < num)
      cout << "Too low, try again!" << endl;
  }

  cout << "You guessed correct!" << endl;

  return 0;
}
