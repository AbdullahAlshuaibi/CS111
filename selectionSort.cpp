#include <iostream>
#include <cstdlib>
using namespace std;
void selectionSort(int array[], int N);
int main()
{
  srand(time(0));
  const int SIZE = 10;
   //declare an array using SIZE
  
  int ar[SIZE];
  
  for(int i=0; i<10; i++) //fill the array with 10 random numbers between 0 and 100
    {
      ar[i]= rand()%100+1;
      cout << ar[i]<< " ";
    } 
  cout<< endl;

  selectionSort(ar, SIZE); //call selectionSort


    for(int i=0; i<SIZE; i++)
      {
	cout <<ar[i]<< " ";
      }   //print the array
    cout<<endl;
  return 0;
}


//change this function so it will sort the numbers in decending order: largest down to smallest
void selectionSort(int array[], int N) 
{
  int smalIndx; //the index of the largest value
  int temp; //temporary variable that holds the largest value

  //  last is the last index in unsorted portion
  for(int last=N-1; last>=1; last--) 
    {
      smalIndx = 0; //assume the first item is the largest
      //find the largest in unsorted portion ([0..last])
      for(int i = 1; i<= last; i++) 
	{
	  if(array[i] < array[smalIndx]) //The current item is larger 
	    smalIndx = i;
	}

      //swap the largest with the last item in the unsorted portion
      temp = array[smalIndx]; 
      array[smalIndx] = array[last]; 
      array[last] = temp;
    } 
}
