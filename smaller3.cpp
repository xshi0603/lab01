/*                                                                                                                                                                              
Author: Xing Tao Shi                                                                                                                                                           
Course: CSCI-133                                                                                                                                                             
Instructor: Zamansky                                                                                                                                                          
Assignment: title, e.g., Lab1A                                                                                                                                           

Here, briefly, at least in one or a few sentences                                                                                                
describe what the program does.                                                                                                                                           
*/

#include <iostream>
using namespace std;

int main() {
  cout << "Enter the first number: " << endl;
  int num1 = 0;
  cin >> num1;

  cout << "Enter the second number: " << endl;
  int num2 = 0;
  cin >> num2;

  cout << "Enter the third number: " << endl;
  int num3 = 0;
  cin >> num3;

  int smaller = 0;
  if (num1 < num2) {
    smaller = num1;
  }
  else {
    smaller = num2;
  }
  if (smaller > num3) {
    smaller = num3;
  }

  cout << "The smaller of the three is " << smaller << endl;
}



