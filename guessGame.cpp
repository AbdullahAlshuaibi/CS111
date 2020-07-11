/**************************************************************************
Abdullah Alshuaibi 
CS 111
10/13/2017

This program  generates a random number between 1 and 100 and asks the user to guess what the number is
**************************************************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

  srand(time(0));
  int num; // random number from computer
  int guess; // guess numbers from user

  num = rand() % 100 + 1; // getting radom number from computer
  
  // getting guess number from user
  cout << "Guess a number between 1 and 100. Enter your guess: ";
  cin >> guess;

  while(guess != num)
    {
      if(guess < num) // if guess less than the random number 
	cout <<"        Too low, try again."<<endl; // output this
      else // if guess more than the random number 
	cout <<"        Too high, try again." <<endl; // output this
      
      cout << "Enter your guess: ";
      cin >> guess;
    }
  // show this if guess is right
  cout << "You guessed it right!" <<endl <<endl;
  return 0;
}
