#include <iostream>
using namespace std;

int main()
{

  int month;
  cout << "enter a month: ";
  cin >> month;

  switch(month)
    {
    case 3:
    case 4:
    case 5:cout <<"spring"<<endl;
      break;
    case 6:
    case 7:
    case 8:cout <<"summer"<<endl;
      break;
    case 9:
    case 10:
    case 11:cout <<"fall"<<endl;
      break;
    case 12:
    case 1:
    case 2:cout <<"winter"<<endl;
      break;
    default: cout <<"invalid month"<<endl;
    }
  return 0;
}
