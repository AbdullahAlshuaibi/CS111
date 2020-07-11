/******************************************************************************
Abdullah Alshuaibi
CS111
10/13/2017

This program  will read an unknown number of ages. (0 is a valid age used for a baby.) The user will enter a negative number if there are no more ages to enter. The program will output the average age, the number of minors (less than 18), the number of adults (18 and above) and the youngest and oldest ages.
*****************************************************************************/
#include <iostream>
using namespace std;

int main()
{

  int age; // agees enterd by the user
  int youngest = 999; // the yungest age
  int oldest = -999; // the oldest age
  int count1 = 0; // count minors
  int count2 = 0; // count adults
  double avg; // the average ages
  int total = 0; // the sum of all ages

  // getting the age from user
  cout << "Enter an age: ";
  cin >> age;

  // whil loob that makes ages >= 0
  while(age >= 0)
    {
      if(age < 18) // age less than 18
	{
	  count1++;
	}	
      else // if age is 18 or more  
	{
	  count2++;
	} 

      if(age < youngest) // getting the youngest age 
	youngest = age;
	
 
      if(age > oldest) // getting the oldest age
	oldest = age;
	
    
      total = total + age; // getting total ages
    
  cout << "Enter an age: ";
  cin >> age;
    }

  avg = (double)total / (count1 + count2); // getting avg
     
  if(count1 == 0 && count2 == 0) // if no ages enterd 
    cout << endl << "No ages were entered"<<endl << endl;
  else // if 1 age or more entered 
    {
      // show output
      cout << endl << avg << " (average)" << endl << count1 << " (minors)" << endl << count2 << " (adults)" << endl << oldest << " (oldest)" << endl << youngest << " (youngest)" << endl << endl;;
    }
  return 0; 
}
