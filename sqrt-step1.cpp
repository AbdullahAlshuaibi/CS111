#include <iostream>
using namespace std;

int main()
{

  int num;
  int top;
  int bot;

  cout << "Enter Num: ";
  cin >> num;

  for(top =1; top <= 2; top++)
    num = num / 2;

  return 0;
}
