/*****************************************************************
Abdullah Alshuaibi
CS111
10/27/2017

program that will find the square root of a positive integer number
******************************************************************/
#include <iostream>
using namespace std;

int main()
{
  int num; // number the user enter
  int top; // pervect square root above number
  int bottom; // perfect square root below number
  double temp; // temperorily number
  double avg; // actual square root of number
  int Tdiff; // diffrance from top square root and square root number
  int Bdiff; // difference from bottom square root and square root number

  //get the number 
  cout <<"Enter an integer number that you want to find the square root for: ";
  cin >> num;

  while(num <= 0) // if the user enter 0 or under
    {
      cout<<"This program finds the square root of a number greater than 0 only. Enter a positive integer number: ";
      cin >> num;
    }
  // get top 
  for(top = 1; num>top*top; top++)    
    {
    }   
  bottom = top - 1; // get bottom

  // if square root is perfect
  if(top * top == num)
    {
      avg = top;
      cout << top << " is the square root of " << num <<endl;
    }
  else // if square root is not perfect
    {
      Tdiff = (top * top) - num;
      Bdiff = num - (bottom * bottom);
      
      
      if(Tdiff < Bdiff)
	{
	  cout << "Start at "<< top <<endl;
	  temp = (double)num / top; // step 2
	  avg = (temp + (double)top) /2; // step 3
	  for(int i=1; i<= 10; i++) // repeat step 2 and 3 ten times
	    { 
	      temp = num / avg;
	      avg = (temp + avg) /2;
	    }	
	}
      
      else // if Tdiff > Bdiff
	{
	  cout << "Start at " << bottom << endl;
	
	  temp = (double)num / bottom; // step 2
	  avg = (temp + (double)bottom) / 2; // step 3
	  for(int i=1; i<= 10; i++)   //repeat step 2 and 3 ten times
	    { 
	     temp = num / avg;
	     avg = (temp + avg)/2;
	    }
	}
      // output
      cout<<"The Square root of " <<num<< " is " << avg<<endl;
      cout<<"The Square of the square root is " << num << endl;
    }
  return 0;
}
  
