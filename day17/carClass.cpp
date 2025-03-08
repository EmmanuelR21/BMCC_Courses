#include <iostream>
#include <string>
using namespace std;

class Car {
private:
  int yearModel;
  string make;
  int speed;

public:
  Car(int y = 2020, string m = "Lambo") {
    yearModel = y;
    make = m;
    speed = 0;
  };

  int GetYearModel();
  string GetMake();
  int GetSpeed();
  void SetYearModel(int);
  void SetSpeed(int);
  void SetMake(string);
  void Accelerate();
  void Brake();
};

int Car::GetYearModel() { return yearModel; }
string Car::GetMake() { return make; }
int Car::GetSpeed() { return speed; }
void Car::SetYearModel(int n) { yearModel = n; }
void Car::SetSpeed(int n) { speed = n; }
void Car::SetMake(string n) { make = n; }
void Car::Accelerate() { speed += 5; }
void Car::Brake() { speed -= 5; }
// Car::Car(int y) {
//   yearModel = y;
//   make = "Test";
//   speed = 1000;
// }

int main() {
  // Car bmw;
  Car bmw(2002, "Lambo");
  // bmw.SetYearModel(2002);
  // bmw.SetMake("Lambo");
  // bmw.SetSpeed(100);

  for (int i = 0; i < 5; i++) {
    bmw.Accelerate();
    cout << "Speed of your bmw: " << bmw.GetSpeed() << endl;
  }

  for (int i = 0; i < 5; i++) {
    bmw.Brake();
    cout << "Speed of your bmw: " << bmw.GetSpeed() << endl;
  }

  return 0;
}
