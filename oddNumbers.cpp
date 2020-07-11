#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num;

  cout <<setw(10)<<"Number"<<setw(10)<<"Double"<<setw(10)<<"Triple"<<endl;

  for(int num = 99; num > 0; num-=2)

    cout <<setw(10)<< num <<setw(10)<< num * 2 <<setw(10)<< num * 3 <<endl;
  
  return 0;
}
