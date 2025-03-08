// Generally in classes:
//
// variables should be private
// functions should be public
//
//

#include <iostream>
using namespace std;

class Student {
private:
  string name;
  double gpa;

public:
  string GetName();
  double GetGpa();

  void SetName(string);
  void SetGpa(double);
};

int main() {
  cout << "hi";
  Student Bob;

  Bob.SetGpa(4.5);
  return 0;
}
