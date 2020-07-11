/*********************************************************************
Abdullah Alshuaibi
CS111
Assignment 2
09/27/2017
*********************************************************************/
#include <iostream>
using namespace std;

int main()
{


  int c; // temperature in Celsius
  int f; // temperature in fahrenheit

  // the user will enter a temperature in C
  cout << "enter a temperature in Celsius: ";
  cin >> c;

  // the formula to convert C to F that rounded to nearest intger
  f = 1.8 * (double)c + 32 + 0.5;

  // output
  cout << c << " C = " << f << " F" <<endl;

  return 0;
}
