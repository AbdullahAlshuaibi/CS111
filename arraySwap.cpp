#include<iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
  srand(time(0));
  const int SIZE = 10;
  int ar[SIZE];
  int temp;

  cout<<"Original    ";
  for(int i =0; i < SIZE; i++)
    {
      ar[i]= rand()%100+1;
      cout <<left<<setw(3)<<ar[i]<<"    ";
    }
  cout<<endl<<endl<<"Reverse     ";
  for(int l=0, r=SIZE-1; l<r; l++, r--)
    {
      temp = ar[l];
      ar[l]= ar[r];
      ar[r] = temp;
    }    
  for(int i=0; i<SIZE; i++)
    cout<<left<<setw(3)<< ar[i]<< "    ";  
  
    cout<<endl;
  return 0;
}
