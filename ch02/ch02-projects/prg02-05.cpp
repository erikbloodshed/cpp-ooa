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

  cout << "Enter the third number: ";
  int thirdNumber;
  cin >> thirdNumber;

  cout << "Enter the fourth number: ";
  int fourthNumber;
  cin >> fourthNumber;

  int sum = firstNumber + secondNumber + thirdNumber + fourthNumber;

  cout << "Sum: " << sum << endl;
  return 0;
}
