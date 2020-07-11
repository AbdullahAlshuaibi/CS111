#include <iostream>
using namespace std;

void showProgInfo();
int getNum();
int findLargest(int num1, int num2, int num3);
void printResult(int num1, int num2, int num3, int largest);
int main()
{
  int num1;
  int num2;
  int num3;
  int largest;

  showProgInfo();

  num1 = getNum();
  num2 = getNum();
  num3 = getNum();
  largest = findLargest(num1, num2, num3);

  printResult(num1, num2, num3, largest);

  return 0;
}

void showProgInfo()
{
  cout <<"*****************************************************"<<endl;
  cout <<"This program will ask you to enter 3 numbers and find the largest."<<endl;
  cout <<"*****************************************************"<<endl;
}

int getNum()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  return num;
}

int findLargest(int num1,int num2,int num3)
{
  int largest;

  if(num1 > num2)
    largest = num1;
  else
    largest = num2;

  if(num3 > largest)
    largest = num3;
  return largest;
}

void printResult(int num1, int num2, int num3, int largest)
{
  cout << "The largest number among " << num1 <<", "<< num2<< " and "<< num3<<" is "<<largest<<endl;
}
