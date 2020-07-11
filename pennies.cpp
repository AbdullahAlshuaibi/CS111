/****************************************************************************
Abdullah Alshuaibi
CS111
10/13/2017

this program wil  calculates how much a person would earn over a period of time if his or her salary is one penny the first day and two pennies the second day, and continues to double each day. 
****************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{

  int days; // the days the user worked
  double s = 0.005; // salary until the day
  double total = 0; // total salary of all days 
do 
  {
    // getting number of days must be more than 0
    cout << "Enter the number of days you worked: ";
    cin >> days;
  }while(days <= 0);

 for(int i = 1; i <= days; i++) // loob to get the number of days
   {
     cout << right << setw(7) << i; // show space before day
     s = s * 2; // calculate salary per day
     total = total + s; // calculate total salary 
     cout << setw(12) << s <<endl; // show space before salary
   }
 // show total salary
 cout << endl << "Total" << right << setw(14) << total << endl << endl;
  return 0; 
}
