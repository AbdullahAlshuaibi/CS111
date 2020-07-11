/*****************************************************************************
Template prepared by K. Slott
11-22-2017

This program will read email addresses from email.dat and extract the username and department for each person.

email.dat  (userName.dep@csusm.edu) 
-------------
kslott.cs@csusm.edu
wu.cs@csusm.edu
puha.math@csusm.edu
price.phy@csusm.edu
harrison.eng@csusm.edu
******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string email;
  ifstream fin;
  //add more variables as you need them
  string username;
  string dep;

  fin.open("email.dat");

  if(!fin)
    cout << "The input file doesn't exist" << endl;
  else //the input file exists
    {
      fin>>email;

      while(fin)
	{
	  //extract the username and department and cout them.
	  username = email.substr(0, email.find('.'));
	  dep = email.substr(email.find('.')+1, email.find('@')-email.find('.')-1);
	  cout<<username<<" at "<<dep<<endl;


	  fin>>email;
	}

      fin.close();
    }

  return 0;
}





