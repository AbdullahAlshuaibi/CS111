#include <iostream>
using namespace std;

int main()
{
  bool pass;
  char grade;
  pass = false;

  cout << "enter the grade in uppercase: ";
  cin >> grade;

  if(grade == 'A'||grade == 'B')
    {
      cout << "good job" <<endl;
      pass = true;
    }
  else if(grade == 'C')
    {    
      cout << "OK" <<endl;
      pass = true;    
}
  else if(grade == 'F'||grade =='D')
    cout << "Work Harder" <<endl;

  else 
    cout << "Invalid grade" <<endl;





  if(pass == true)
    cout << "Congratulations! You passed the class." <<endl;


  return 0;
}
