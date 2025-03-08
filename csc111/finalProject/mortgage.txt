#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Mortgage {
private:
  double loan;
  double rate;
  int years;
  int months;
  double CalculateTerm() {
    double yearsAndMonths = years + (months / 12.0);
    return pow((1 + (rate / 12)), (12 * yearsAndMonths));
  }
  void PrintYear(double &prin, int y, int m = 12) {
    double yrPrin = 0, yrInt = 0, mInt = rate / 12, mPay = GetMonthlyPayment();
    for (int i = 0; i < m; i++) {
      yrPrin += mPay - (prin * mInt);
      yrInt += prin * mInt;
      prin -= mPay - (prin * mInt);
    }
    printf(" %4d | $%-12.2f| $%-13.2f| $%-14.2f\n", y, yrInt, yrPrin, prin);
    yrPrin = 0;
    yrInt = 0;
  }

public:
  void SetLoan(double);
  void SetRate(double);
  void SetYears(int, int);
  double GetLoan();
  double GetRate();
  int GetYears();
  double GetMonthlyPayment();
  void GetAnnAmortizationSchedule();
};

void Mortgage::SetLoan(double l) {
  if (l < 0)
    printf("Invalid loan value! Please use only positive numbers\n");
  else
    loan = l;
}
void Mortgage::SetRate(double r) {
  if (r <= 0)
    printf("Invalid rate value! Please use only positive numbers\n");
  else
    rate = r / 100;
}
void Mortgage::SetYears(int y, int m = 0) {
  if (y <= 0)
    printf("Invalid # of years! Please use only positive numbers.\n");
  else if (m < 0 || m > 11)
    printf("Invalid # of months! Please enter only inegers from 0 - 11.\n");
  else {
    years = y;
    months = m;
  }
}
double Mortgage::GetLoan() { return loan; }
double Mortgage::GetRate() { return rate; }
int Mortgage::GetYears() { return years; }
double Mortgage::GetMonthlyPayment() {
  double monthlyPayment =
      (loan * (rate / 12) * CalculateTerm()) / (CalculateTerm() - 1);
  return monthlyPayment;
}
void Mortgage::GetAnnAmortizationSchedule() {
  double prin = loan;
  printf(" Year |   Interest   |   Principal   | Ending Balance\n");
  cout << "-----------------------------------------------------" << endl;
  for (int j = 0; j < years; j++)
    PrintYear(prin, (j + 1));
  if (months != 0)
    PrintYear(prin, years + 1, months);
}

int main() {
  Mortgage Emmanuel;
  Emmanuel.SetLoan(200000);
  Emmanuel.SetRate(3);
  Emmanuel.SetYears(15);

  printf("Your loan is: $%.2f\n", Emmanuel.GetLoan());
  printf("Your rate is: %.3f%\n", Emmanuel.GetRate());
  printf("Your years to pay is: %d\n\n", Emmanuel.GetYears());
  cout << "Monthly payment: " << Emmanuel.GetMonthlyPayment() << endl;
  Emmanuel.GetAnnAmortizationSchedule();

  return 0;
}
