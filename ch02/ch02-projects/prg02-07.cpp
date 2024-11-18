#include <iostream>
#include <string>

int main()
{
  using namespace std;

  cout << "Enter your first name: ";
  string firstName;
  cin >> firstName;

  cout << "Enter your last name: ";
  string lastName;
  cin >> lastName;

  string fullName = lastName + ", " + firstName;

  cout << "Your full name is: " << fullName << endl;
  return 0;
}
