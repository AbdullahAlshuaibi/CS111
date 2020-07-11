#include <iostream>
using namespace std;

int main()
{

  char gender;
  int age;

  cout <<"enter your gender: ";
  cin >> gender;
 
  if(gender == 'm' || gender == 'M')
    {
      cout <<"Enter your age: ";
      cin >> age;

      if(0<= age && age <=16) 
	cout <<"You need to wait " << 17-age << " more years" <<endl;

      else if(17 <= age && age <= 42)
	cout <<"The military is hiring more people like you" <<endl;

      else if(age >= 43)
	cout <<"Thank you for using the system." <<endl;
      else 
	cout <<"invalid age" <<endl;    
    }
  else if(gender == 'f' || gender == 'F')
    {
      cout <<"Thank you for using the system, but we were only looking for men." <<endl;   
    }
  else 
    cout <<"inavalid gender" <<endl;

  return 0;
}



