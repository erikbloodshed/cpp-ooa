#include <iostream>
#include <string>

int main()
{
  using namespace std;

  cout << "Enter the address:\n"
       << "Street-number: ";
  string streetNumber;
  cin >> streetNumber;

  cout << "Street city: ";
  string streetCity;
  cin >> streetCity;

  cout << "State zip-code: ";
  string zipCode;
  cin >> zipCode;

  string address = streetNumber + ", " + streetCity + ", " + zipCode;

  cout << "Address: " << address << endl;
  return 0;
}
