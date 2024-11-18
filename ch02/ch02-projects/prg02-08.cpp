#include <iostream>

int main()
{
  using namespace std;

  cout << "Enter the first number: ";
  int firstNumber;
  cin >> firstNumber;

  cout << "Enter the second number: ";
  int secondNumber;
  cin >> secondNumber;

  int sum = firstNumber + secondNumber;

  cout << "Sum: " << sum << endl;
  return 0;
}
