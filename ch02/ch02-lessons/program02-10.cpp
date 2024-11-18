/****************************************************************
 * Using some special characters in strings
 ****************************************************************/
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello\n";
  cout << "Hi\tfriends." << endl;
  cout << "Buenos dias  \bamigos." << endl; // two space after dias
  cout << "Hello\rBonjour mes amis." << endl;
  cout << "This is a single quote\'." << endl;
  cout << "This is a double quote\"." << endl;
  cout << "This is how to print a backslash \\.";
  return 0;
}
