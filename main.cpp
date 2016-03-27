/*
 * Author: Michael J. McGrath
 * Last date modified: 
 * File name: main.cpp
 * Description: 
 */

#include <iostream>

using namespace std;

int summation(int number);

int main() {
  int n;
  cout << "Please enter an integer: " << endl;
  cin >> n;
  cout << summation(n) << endl;

 return 0;
}

int summation(int number){
  int returnValue = 0;
  for(int i = 0; i <= number; i++)
    returnValue += i;
  return returnValue;
}
