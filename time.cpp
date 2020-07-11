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

  int s; // time in seconds
  int h; // time in hours
  int m; // time in minutes
  int ss; // times in seondes in output
  
  // get the seconds from the user
  cout << "Enter the time in seconds: ";
  cin >> s;
  
  // convert seconds to hr min and seconds
  h = s / 3600;
  m = (s / 60) % 60;
  ss = s % 60;
  
  // output
  cout << h << " hours " << m << " minutes " << ss << " seconds" <<endl;

  return 0;
}
