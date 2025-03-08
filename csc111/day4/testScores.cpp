#include <iostream>
using namespace std;

int main() {
  float score1, score2, score3, avg;

  cout << "Input 3 test scores(range: 0-100): ";
  cin >> score1 >> score2 >> score3;
  avg = (score1 + score2 + score3) / 3;
  if (avg >= 90)
    cout << "You got an A!" << endl;
  else if (avg >= 80)
    cout << "You got a B!" << endl;
  else if (avg >= 70)
    cout << "You got a C!" << endl;
  else if (avg >= 60)
    cout << "You got a D!" << endl;
  else
    cout << "You got a F!" << endl;

  return 0;
}
