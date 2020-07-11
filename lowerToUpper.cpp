/***************************************************************************
Abdullah Alshuaibi
CS111 
Assignment 2
09/27/2017
****************************************************************************/
#include <iostream>
using namespace std;

int main()
{

  char Lletter; // lowercase letter
  char Uletter; // uppercase letter

  //what the user will enter
  cout << "enter a lowercase letter: ";
  cin >> Lletter;

  // output
  Uletter = Lletter - 32;

  cout << "The uppercase is " << Uletter << "." <<endl;


  return 0;
}
