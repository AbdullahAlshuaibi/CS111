/******************************************
Abdullah Alshuaibi 
CS111
Asignment 6
11/8/2017

This program will give menu where the user can enter 5 numbers and print them, double them, getting the highest number, average, search for number, and show paragraph, set them in order largest to smallest
*******************************************/
#include <iostream>
using namespace std;

void fillArray(int ar[ ], int SIZE);
void printArray(const int ar[ ], int SIZE);
double findAvg(const int ar[ ], int SIZE);
int findHighest(const int ar[ ], int SIZE);
void doubleArray(int ar[ ], int SIZE);
void selectionSort(int ar[ ], int SIZE);
int sequentialSearch(int ar[], int SIZE, int key);
void showBarGraph(int ar[ ], int SIZE);

int main()
{

  const int SIZE = 5; // size of array
  int ar[SIZE]; // delcraring array
  int choice; // number of menu
  int key; // the number want user to search
do
  {
    cout<<"=================="<<endl<<"1: fill the array"<<endl<<"2: print the array"<<endl<<"3: calculate the average"<<endl<<"4: show the highest number"<<endl<<"5: double each number"<<endl<<"6: selection sor in descending order"<<endl<<"7: sequential search"<<endl<< "8: show bar graph"<<endl<<"9: quit"<<endl<<"=================="<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;
    cout<<endl;
    
    switch(choice)
      {
      case 1: fillArray(ar, SIZE);
	break;
      case 2: printArray(ar, SIZE);
	break;
      case 3: cout<< "The average number is "<< findAvg(ar, SIZE)<<endl<<endl;
	break; 
      case 4: cout<< "The highest number is "<< findHighest(ar, SIZE)<<endl<<endl;
	break;
      case 5: doubleArray(ar, SIZE);
	break;
      case 6: selectionSort(ar, SIZE);
	break;
      case 7: cout<<endl<<"Enter the key: ";
	cin>> key;
	if(sequentialSearch(ar, SIZE, key) == -1)
	  cout<<endl<<key<< " was not found."<<endl;
	else 
	  cout<<endl<<key<<" was found at index "<< sequentialSearch(ar, SIZE, key)<<endl;
	break;
      case 8: showBarGraph(ar, SIZE);
	break; 
      case 9: cout<<endl<<"Thank you for using our system"<<endl;
	break;
      default: cout<<"invalid choice"<<endl<<endl;
      }
  
  }while(choice != 9); // if choice = 9. ends program
 
 
 return 0;
}

/**********************************
ar is array
SIZE is number of slots
This function will fill the array with numbers
**********************************/
void fillArray(int ar[ ], int SIZE)
{

  for(int i=0; i<SIZE; i++)
    {
      cout << "Enter a number: ";
      cin >>ar[i];
    }
  cout<<endl;
}

/**********************************
ar is the array
SIZE is the numbers of slots
This function will return the average number
***********************************/
double findAvg(const int ar[ ], int SIZE)
{
  int total =0;
  for(int i=0; i<SIZE; i++)
    total +=ar[i];
  
  return (double)total/SIZE;
}
/**********************************
This function will return the highest number
**********************************/
int findHighest(const int ar[ ], int SIZE)
{
  int highestIndex = 0;
  for(int i=1; i < SIZE; i++)
    if(ar[i] > ar[highestIndex])
      highestIndex = i;
  
  return ar[highestIndex];
}
/**********************************
This function will double the numbers
**********************************/
void doubleArray(int ar[ ], int SIZE)
{

  for(int i=0; i < SIZE; i++)
    ar[i] = ar[i] * 2;
}
/**********************************
This function will make numbers from largest to smallest
**********************************/
void selectionSort(int ar[ ], int SIZE)
{
  int smalIndx; //the index of smallest value
  int temp; //temporary variable that holds the smallest value

  //  last is the last index in unsorted portion
  for(int last=SIZE-1; last>=1; last--)
    {
      smalIndx = 0; //assume the first item is the smallest
      //find the smallest in unsorted portion ([0..last])
      for(int i = 1; i<= last; i++)
        {
          if(ar[i] < ar[smalIndx]) //The current item is smaller
            smalIndx = i;
        }

      //swap the smallest with the last item in the unsorted portion
      temp = ar[smalIndx];
      ar[smalIndx] = ar[last];
      ar[last] = temp;
    }
  cout<<endl;
}
/**************************************
key is the number the user want to search
This function will return the number if found
***************************************/
int sequentialSearch(int ar[], int SIZE, int key)
{
  for(int i=0; i<SIZE; i++)
    {
      if(ar[i]==key)
	return i;
    }
  return -1;
}
/**********************************
This function will show stars for each 10
*************************************/
void showBarGraph(int ar[ ], int SIZE)
{
  for(int i= 0; i<SIZE; i++)
    {
      cout<<"Slot "<<i<<": ";
      for(int ii=1; ii<=(ar[i]/10); ii++)
	{
	  cout<<"*";
	}
      cout<<endl; 
    }
  cout<<endl;
}
/**************************************
This function will print the numbers
***************************************/
void printArray(const int ar[ ], int SIZE)
{
  cout<<endl<<"The numbers in the array are ";
  for(int i=0; i<SIZE; i++)
    {
      cout<<ar[i]<<" ";
    }
  cout<<endl<<endl;
}
