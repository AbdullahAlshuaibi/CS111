/***********************************
Abdullah Alshuaibi
CS111
10/27/2017

This program will calculate the persentage of winning and losing in craps game
******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int rollDice();
bool playGame();

int main()
{

  int game; // games numbers the user want to play
  int roll; // the number of roll dice 
  bool WorL; // user win or lose
  int win = 0; // times of winning 
  int lose = 0; // times of lossing losing
  double Pwin; // persentage of winning
  double Plose; // persentage of losing 

  cout<< fixed<< setprecision(3);
srand(time(0));

// get how many game 
 cout << "How many games do you want to play?: ";
 cin >> game;
 
 // play as many the user want to play
 for(int i = 1; i <= game; i++)
   { 
 roll= rollDice();
 WorL = playGame();
 if(WorL == true) // if he win
   win++;
 else // if he lose
   lose++;   
   }
 Pwin = (((double)win) / game) * 100; //calculating the persentage of winning 
 Plose = (((double)lose) / game) * 100; // calculatting the persentage of lossing

 cout<<"     win %    lose %" <<endl << "    "<< Pwin << "    "<<Plose<<endl; // output


return 0;
 }
/********************************************
roll is the sum of rolling two dice
This function will return the sum of to dices
*********************************************/
int rollDice()
{

  int roll;
  roll = (rand()%6+1) + (rand()%6+1);

  return roll;
}
/***********************************************
Froll is the first roll
Sroll is not the first roll
WotL is if win or lose
This function will return if the user win or lose
*************************************************/
bool playGame()
{
  int Froll; 
  int Sroll; 
  bool WorL; 
  Froll = rollDice();
  
  if(Froll == 7 || Froll == 11)
    WorL = true;
  else if(Froll == 2 || Froll == 3 || Froll == 12)
    WorL = false;  
  else
    {
      do
 	{
 	  Sroll = rollDice();
 	}while(Sroll != Froll && Sroll != 7);
      if(Sroll == 7)
 	{
	  WorL = false;
 	}
      else 
 	{
 	  WorL = true;
	}
    }
  return WorL;
}

 
