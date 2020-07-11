/*****************************************************************************
Abdullah Alshuaibi
CS111
10/13/2017

This program will  display the characters for the ASCII values 33 through 126.
****************************************************************************/
#include <iostream>
using namespace std;

int main ()
{

  int ascii; // characters for the ASCII
  int count = 0; // counting the col

  // for loob to display values 33 to 126
      for(ascii = 33; ascii <= 126; ascii++)
	{
	  count++;
	  if(count > 16) // 16 character on each line
	    {
	      cout <<endl; // to the next row
	      count = 1; // reset counting for next row
	    }
 
	  // show the table
	  cout << (char)ascii << " ";
	}
      cout << endl;
      
      return 0;
}
