#include <iostream>
#include <cstdlib>
using namespace std;

int rollDice();


int main()
{
  srand(time(0));
  int roll;
  int Sroll;
  
  roll = rollDice();
  cout<<roll<<endl;
  if(roll == 7 || roll == 11)
    cout << "=== WIN ==="<<endl;
  else if(roll == 2 || roll == 3 || roll == 12)
    cout << "=== LOSE ==="<<endl;
  else
    {
      do
	{
	  Sroll = rollDice();
	  cout << Sroll <<endl;
	}while(Sroll != roll && Sroll != 7);
      if(Sroll == 7)
	{
	  cout <<"=== LOSE ==="<<endl;
	}
      else 
	{
	  cout << "=== WIN ==="<<endl;
	}
    }
    
  return 0;
}

int rollDice()
{
 
  int Sroll;
  Sroll = (rand()%6+1) + (rand()%6+1);

  return Sroll;
}
      
