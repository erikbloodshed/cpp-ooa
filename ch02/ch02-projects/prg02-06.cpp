#include <iostream>

int main()
{
  using namespace std;

  cout << "Enter the side of the square: ";
  int side;
  cin >> side;

  int perimeter = 4 * side;
  int area = side * side;

  cout << "Perimeter: " << perimeter << endl;
  cout << "Area     : " << area << endl;
  return 0;
}
