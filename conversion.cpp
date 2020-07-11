/*************************************************************************
Abdullah Alshuaibi
Lab
09-13-2017
*****************************************************************************/
#include <iostream>
using namespace std; 

int main()
{

  int cm; // the length in centimeters
  double finches; //the length in inches with a fraction
  int iinches; //the length rounded to the nearest integer
  int yards; 
  int feet; 
  int inches;
  int iiinches;
  //the length in cintimeters
  cout << "Please enter the length in cm:";
  cin >> cm;

  //convert cm to inches with fraction
  finches = cm / 2.54;

  //round the inches with fraction to the nearest integer
  iinches = (int)(finches + 0.5);

  //output the length in inches 
  cout << cm << " cm is about " << finches << " inches and rounded to " << iinches << " inches." <<endl; 


  //convert inches to yardsa, feet
  yards = iinches / 36;
  iiinches = iinches % 36;
  feet = iiinches / 12;
  inches = iiinches % 12 ;  
    // output yards, feet
  cout << iinches << " inches = " << yards << " yards, " << feet << " feet, and " << inches  << " inches." <<endl;


    cout << "Thank you for using the program. Good bye" <<endl;
  return 0;
}
