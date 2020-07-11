/*********************************
Template written by Kazumi Slott
*********************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num; //number
  int total = 0;
  int count = 0;
  int count2 = 0;  
  int count3 = 0;
  double avg;
  char answer;

  cout <<"Do you have a number to check? y or n: ";
  cin>> answer;

  while(answer =='y' ||answer=='Y')
    { 
 //input the first number
  cout << "Enter a number: ";
  cin >> num;

 
  
     //To calculate the average number after the while loop, you need to do something here
  count++;
    total += num; 
 
     //check if the number is even or odd
     if(num % 2 == 0)
       {
	 cout <<num <<" is even"<<endl;
	 count2++;
       }
     else
       {
	 cout<<num<< " is odd" <<endl;
	 count3++;
       }

     cout <<"Do you have a number to check? y or n: ";
     cin>> answer;
    } 
  
  //show the result
  if(count == 0) //The user didn't check number for even or odd. She entered a zero for the first input.
    cout <<endl<< "\nNo numbers were checked" << endl;
  else //The user checked at least one number for even or odd. Then go ahead show the total numbers of even and odd and average number.
    {
      cout<<fixed<<setprecision(2);
      cout<<endl<< count2 <<" even numbers"<<endl;
      cout<< count3 << " odd numbers"<<endl;
      avg = (double)total / count;
      cout << "The averae is "<<avg<<endl;
      
    }
  return 0; 
} 
