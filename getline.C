#include <iostream>
using namespace std;

int main()
{
  string maiden, major;
  cout << "Enter your mother's maiden name :";
  cin >> maiden;  
  cout << "maiden name :" << maiden << ":" << endl; 

  //cin.ignore();
  cin.ignore(1000, '\n');  
  cout << "Enter your major :";
  getline(cin, major); //. reads in _ _\n
 
  cout << ">" << major <<"<" << endl;

  return 0;
}
