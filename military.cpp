#include <iostream>
using namespace std;

int main()
{

  int age;

  cout <<"Enter your age: ";
  cin >> age;


  if(0<= age && age <=16)
    cout <<"You need to wait " << 17-age << " more years" <<endl;

  else if(17 <= age && age <= 42)
    cout <<"The military is hiring more people like you" <<endl;

  else if(age >= 43)
    cout <<"Thank you for using the system." <<endl;

  else
    cout <<"inavalid age" <<endl;

  return 0;
}
