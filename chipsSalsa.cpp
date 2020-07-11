/****************************************
Abdullah Alshuaibi 
CS111
Assignemnt 6
11/08/2017

The program should prompt the user to enter the number of jars sold for each type. Once this sales data has been entered, the program should produce a report that displays sales for each salsa type, total sales, and the names of the highest selling and lowest selling products. 
*****************************************/
#include <iostream>
#include <iomanip>
using namespace std;

void fillJarsSoldArray(string ar[ ], int array[ ]);
void printSales(string ar[ ],int array[ ]);
int getTotal(int array[ ]);
void getHighestLowestSelling(int array[ ], int& largest2, int& lowest2);

int main()
{

  string ar[5]= {"mild", "medium", "sweet", "hot", "zesty"}; // the array for the salsa names
  int array[5]; // array for sales numbers
  int largest2; // highest selling
  int lowest2; // lowest selling

  fillJarsSoldArray(ar, array);
  printSales(ar, array);

  cout<<"The total number of jars sold is "<< getTotal(array)<<endl;
  getHighestLowestSelling(array, largest2, lowest2);
  cout<<"The highest selling type is "<<ar[largest2]<<endl;
  cout<<"The lowest selling type is "<<ar[lowest2]<<endl;

  return 0;
}
/******************************************
ar is array for salsa names
array is array for sales number
This function will fill the arraies
******************************************/
void fillJarsSoldArray(string ar[ ], int array[ ])
{

  for(int i=0; i<5; i++)
    {
      do
	{
	  cout<<"Enter the number of jars sold for "<<ar[i]<<": ";
	  cin >> array[i];
	}while(array[i]<0); // the sales should larger than 
      cout<<endl;
    }
  cout<<endl;
} 
/*****************************************
This function will displays sales for each salsa type
*****************************************/
void printSales(string ar[ ], int array[ ])
{

  for(int i=0; i<5; i++) 
    cout <<left<<setw(12)<<ar[i]<<right<<setw(4)<<array[i]<<endl;
} 
/****************************************
This function will return the total sales
*****************************************/
int getTotal(int array[ ])
{

  int total=0;
  for(int i=0; i<5; i++) //calculate the total by combining the sales
    {
      total += array[i];
    }
  return total;
}
/*****************************************
array is for array sales
largest2 is the largest sale salsa
lowest2 is smalest slae slalsa
*****************************************/
void getHighestLowestSelling(int array[ ], int& largest2, int& lowest2)
{
  int largest = -1;
  for(int i=0; i<5; i++) 
    {
      if(array[i] > largest)
	{
	  largest = array[i];
	  largest2= i;
	}	
    }
 int lowest= 999;
  for(int ii= 0; ii<5; ii++)
    {
      if(array[ii] < lowest)
	{
	  lowest = array[ii];
	  lowest2 = ii;
	}
    }
}
