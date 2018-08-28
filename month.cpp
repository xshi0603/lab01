#include <iostream>
using namespace std;

int main() {
  cout << "Enter year" << endl;
  int year = 0;
  cin >> year;

  cout << "Enter month" << endl;
  int month = 0;
  cin >> month;

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

  if (month == 1) {
    cout << "31 days" << endl;
  }
  else if (month == 2) {
    if (leap) {
      cout << "29 days" << endl;
    }
    else {
      cout << "28 days" << endl;
    }
  }
  else if (month == 3) {
    cout << "31 days" << endl;
  }
  else if (month == 4) {
    cout << "30 days" << endl;
  }
  else if (month == 5) {
    cout << "31 days" << endl;
  }
  else if (month == 6) {
    cout << "30 days" << endl;
  }
  else if (month == 7) {
    cout << "31 days" << endl;
  }
  else if (month == 8) {
    cout << "31 days" << endl;
  }
  else if (month == 9) {
    cout << "30 days" << endl;
  }
  else if (month == 10) {
    cout << "31 days" << endl;
  }
  else if (month == 11) {
    cout << "30 days" << endl;
  }
  else {
    cout << "31 days" << endl;
  }

}
