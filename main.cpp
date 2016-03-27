/*
 * Author: Michael J. McGrath
 * Last date modified: 
 * File name: main.cpp
 * Description: 
 */

#include <iostream>

using namespace std;

int summation(int number);
int factorial(int number);

int main() {
  int n;
  cout << "Please enter an integer: " << endl;
  cin >> n;
  cout << "Summation: " <<  summation(n) << endl;
  cout << "Factorial: " <<  factorial(n) << endl;
  
  return 0;
}

int summation(int number){
  if(number == 0)
    return 0;

  int temp;
  temp = number + summation(number - 1);
  return temp;
}

int factorial(int number){
  if(number == 1)
    return 1;
  
  int temp;
  temp = number * factorial(number - 1);
  return temp;
}
