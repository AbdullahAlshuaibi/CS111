/******************************************************
CS111

HW on sequential search 
******************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

void fillArray(int ar[], int SIZE);
void printArray(const int ar[], int SIZE);
bool sequentialSearch_bool(const int a[], int s, int k);
int sequentialSearch_int(const int a[], int s, int k);
void sequentialSearch_void(const int a[], int s, int k);
int main()
{
  srand(time(0));
  int key;
  //declare constant SIZE and set it to 10
  const int SIZE = 10;
  int ar[SIZE];
  //call fillArray to fill the array
  fillArray(ar, SIZE);
  //call printArray
  printArray(ar, SIZE);
  //ask for key
  cout<<"Enter key: ";
  cin>>key;

  //call sequentialSearch_bool and tell whether the key was found
  sequentialSearch_bool(ar, SIZE, key);
  if(sequentialSearch_bool(ar, SIZE, key))
    cout<<"key was found"<<endl<<endl;
  else
    cout<<"key wasn't found"<<endl<<endl;
  //call sequentialSearch_int and tell where the key was found or say "not found" if key doesn't exist
  int index= sequentialSearch_int(ar, SIZE, key);
    if(index==-1)
      cout<<"Key wasn't found"<<endl<<endl;
    else
      cout<<"Key was found at index "<<index<<endl<<endl;
  //call sequentialSearch_void
    sequentialSearch_void(ar, SIZE, key);
  
  return 0;
}


/***********************************************************
Fill the integer array with random numbers between 0 and 100.
************************************************************/
void fillArray(int ar[], int SIZE)
{
  
  for(int i=0; i<SIZE; i++)
    {
      ar[i] = rand()%100+1;
    }
}

/**********************************************************
Print all the numbers in the array to the screen
**********************************************************/
void printArray(const int ar[], int SIZE)
{

  for(int i=0; i<SIZE; i++)
    {
      cout<<ar[i]<<" ";
    }
  cout<<endl;
}

/***********************************************************
sequential search: returns true if key exists, otherwise
returns false.

Parameters: a - integer array
            s - size of the array
            k - key
************************************************************/
bool sequentialSearch_bool(const int a[], int s, int k)
{

  for(int i=0; i<s; i++)
    {
      if(a[i]==k)
	return true;
    }
  
  return false;
}

/***********************************************************
sequential search: returns the index where key was found or -1 if not found.

Parameters: a - array
            s - size of array
            k - key
************************************************************/
int sequentialSearch_int(const int a[], int s, int k)
{

  for(int i=0; i<s; i++)
    {
      if(a[i]==k)
	return i;
    }
  return -1;
}

/***********************************************************
sequential search: void function. Show the result within this function.

Parameters: a - array
            s - size of array
            k - key
************************************************************/
void sequentialSearch_void(const int a[], int s, int k)
{
  bool found = false; //You MUST use this boolean variable

  //Do not stay in the for loop after the key was found  
  for(int i=0; i<s; i++)
    {
      if(a[i]==k)
	{
	  found = true;
	  i=s;
	}
    }

  //tell whether the key was found here
  if(found == true)
    cout<<"Key was found"<<endl<<endl;
  else
    cout<<"key wasn't found"<<endl;

}
