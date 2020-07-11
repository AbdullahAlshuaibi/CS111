#include <iostream>
using namespace std;

int main()
{

 int Num1;
 int Num2;
 int Num3;
 int Num4;
 int largest;

 cout <<"enter 4 numbers: " <<endl;
 cout <<"Number 1 = ";
 cin >>Num1;

 cout <<"Number 2 = ";
 cin >>Num2;

 cout <<"Number 3 = ";
 cin >>Num3;

 cout <<"Number 4 = ";
 cin >>Num4;
 
 //***********************

 if(Num1>Num2)
   largest = Num1;
 
 else
   largest = Num2;
  

 if(Num3>largest)
   largest = Num3;

 if(Num4>largest)
   largest = Num4;

 cout << "largest = " << largest <<endl; 

 return 0;
 }
