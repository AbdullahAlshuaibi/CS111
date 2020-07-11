#include<iostream>
#include<iomanip>
using namespace std;
#include "myMath.h"

int main()
{
  
  int count = 0;
  int total = 0;

  for(int num= 2; num <= 1000; num++)
    {    
      if(isPrime(num) == true) 
	{
	  total= total+1;
	  count++;
	  cout << setw(3) << num <<"  ";
	  if (count >= 10)
	    {
	      cout << endl;
	      count = 0;
	    }
	}
    }    
  cout <<endl<<endl<<"There are "<<total<<" prime numbers between 2 and 1000"<<endl<<endl;
return 0;
}
