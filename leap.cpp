#include <iostream>
using namespace std;

int main() {
  cout << "Enter year" << endl;
  int year = 0;
  cin >> year;

  bool leap = false;
    
  if (year % 4 != 0) {
    leap = false;
  }
  else if (year % 100 != 0) {
    leap = true;
  }
  else if (year % 400 != 0) {
    leap = false;
  }
  else {
    leap = true;
  }

  if (leap) {
    cout << "Leap year" << endl;
  }
  else {
    cout << "Common year" << endl;
  }
}
