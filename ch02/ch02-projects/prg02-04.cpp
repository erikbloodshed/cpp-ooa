#include <iostream>

int main()
{
  using namespace std;

  const int SecondsPerHour = 3600;
  const int SecondsPerMinute = 60;

  cout << "Enter the duration of the task:\n";
  cout << "Hours: ";
  int hours;
  cin >> hours;
  cout << "Minutes: ";
  int minutes;
  cin >> minutes;
  cout << "Seconds: ";
  int seconds;
  cin >> seconds;

  int totalSeconds = hours * SecondsPerHour + minutes * SecondsPerMinute + seconds;

  cout << "Total duration in seconds: " << totalSeconds << '\n';
  return 0;
}
