#include <iostream>

int main()
{
  using namespace std;

  const double TaxRate = 0.09;

  cout << "Enter the sale amount: ";
  double sales;
  cin >> sales;

  double tax = sales * TaxRate;
  double amountDue = sales + tax;

  cout << "Sale amount: " << sales << '\n';
  cout << "Tax amount: " << tax << '\n';
  cout << "Total amount due: " << amountDue << endl;
  return 0;
}
