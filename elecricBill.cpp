/***********************************************************************
Abdullah Alshuaibi
CS111
Assignment 3
10/05/2017

This program will ask the user to enter the month and the current meter reading and the previous meter reading. If the consumption is 0-400 KWH, the cost is $8.50. If the consumption is over 400 KWH, the cost is $8.50 + 7.525 cents for each KWH over 400 in the months from (may - Sepy), in all the other month, the cost is $8.50 + 6.575 cents for each KWH over 400.   
************************************************************************/
#include <iostream>
#include <iomanip>
using namespace  std;

int main ()
{

  int month; // the month of the bill
  int cr; // current reading
  int pr; // the previous reading 
  int r; // the reading
  double a; // the amount due

  // the user will enter the month
  cout << "Enter the month: ";
  cin >> month;
  
  
  if(0>= month || month >=13) // 0 >= month >= 13
    cout <<month<<" is an invalid month"<<endl;
  
  else // 0 < month < 13
    {
      // the user will enter current and revious meter reading
      cout << "Enter the current meter reading: ";
      cin >> cr;

      cout << "Enter the previous meter reading: ";
      cin >> pr;
      
      r = cr - pr; // getting the consumption

      if(cr<0 || pr<0 || cr < pr) // cr & pr < 0 & cr < pr 
	cout << "The reading are invalid"<<endl;
      
      else // cr & pr > 0 & cr >= pr
	{
	   
	  // if the consumption between 0 and 400, the amount is 8.50
	  if(0<=r && r<=400) 
	      a = 8.50;

	  else // the consumption over 400
	    {
	      switch(month)
		{
		case 5:
		case 6:
		case 7:
		case 8:
		case 9: a = (r-400) * 0.07525 + 8.50; // the amount due if the month (May - sept)
		  break;
		default: a = (r-400) * 0.06575 + 8.50; // the amouunt due for all other months
		}
	    }
	  // showing the consumption and the amount due
	  cout << endl<< "You consumed "<< r << " and your amount due is "<<fixed<<setprecision(2)<< a <<endl<<endl;
	  
	}
    } 

  return 0;
}
