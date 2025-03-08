#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  string add;
  double gpa;

public:
  Student() {
    name = "";
    add = "mog";
    gpa = 4.0;
  }

  void setName();
};

Student::Student(string n, string a, double g) {
  name = n;
  add = a;
  gpa = g;
};

int main() {
  cout << "hi" << endl;

  return 0;
}
