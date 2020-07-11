/*********************************************************************
Abdullah Alshuaibi
CS111
Assignment 2
09/27/2017

this program will ask the user to enter the time in hours and minutes
and then it will output the angle of the hour and minute hands.
*********************************************************************/
#include <iostream>
using namespace std;

int main()
{

  int h; // hours
  int m; // minutes 
  double hd; // the angle of hour hand
  double md; // the angle of minute hand

  // the user will be asked to enter the hour and minutes
  cout << "Enter hours: ";
  cin >> h;
  cout << "Enter minutes: ";
  cin >> m;

  // getting he angle of hour and minute hands
  hd = 0.5 * (60 * h + m);
  md = 6 * m;

  // output
  cout << "The angle of the hour hand is: " << hd <<endl;
  cout << "The angle of the minute hand is: " << md <<endl;

  return 0;
}
