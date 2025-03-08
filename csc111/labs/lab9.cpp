#include <iostream>
using namespace std;

bool isPrime(long);

int main() {
  long userNum;
  cout << "Enter a positive integer to check if prime: ";
  cin >> userNum;

  if (userNum < 0) {
    cout << "Please enter a non negative integer." << endl;
    return 0;
  }

  if (userNum == 0 || userNum == 1) {
    cout << userNum << " is neither a prime or composite number!" << endl;
    return 0;
  }

  if (isPrime(userNum))
    cout << userNum << " is prime!" << endl;
  else
    cout << userNum << " is not prime!" << endl;

  return 0;
}

bool isPrime(long n) {
  for (int i = 2; i <= n / 2; i++)
    if (n % i == 0)
      return false;
  return true;
}
