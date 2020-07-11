/*****************************************************************
Abdullah Alshuaibi
CS111
Assignment 6
11-8-17

This program will get output 3 test scores for each student with average
*****************************************************************/ 
#include <iostream>
#include <iomanip>
using namespace std;




const int TEST= 3; //test number
const int STU= 5; // students number
void showTable(const int ar[][TEST]);
void fillArray(int ar[][TEST]);

int main()
{
  int ar[STU][TEST]; //array 

  fillArray(ar);
  showTable(ar); 
  

  return 0;
}
/***********************************
This function will fill the array with test scores for each student 
************************************/
void fillArray(int ar[][TEST])
{

  for(int test=0; test < TEST; test++)
    {
      cout<<"Enter scores for TEST #"<<test+1<<endl;
      for(int stu= 0; stu < STU; stu++)
	{
	  cout<<"Studen #"<<stu+1<<": ";
	    cin >>ar[stu][test];
	}
      cout<<endl;
    }
}
/*********************************
This function will show the scores for each student as table
**********************************/
void showTable(const int ar[][TEST])
{
  int totalTest; //total scores for each test
  int totalStu; //total scores for each student
  double avgTest; // average scores for each test
  double avgStu; //average score for each student
  
  //Show the lables for the table
  cout << setw(10) << "Test#" << setw(10) << "Stu 1" << setw(10) << "Stu 2" << setw(10) << "Stu 3" 
       << setw(10) << "Stu 4" << setw(10) << "Stu 5" << setw(10) << "Average" << endl;

  //Show the table using a nested for loop here
  for(int test=0; test<TEST; test++)
    {
      totalTest=0;
      cout<<setw(10)<< test+1;
      for(int stu=0; stu<STU; stu++)
	{
	  cout<<setw(10)<<ar[stu][test];
     
	  totalTest= totalTest+ ar[stu][test];
	}
      avgTest= (double)totalTest/STU;
      cout<<fixed<<setprecision(1)<<setw(10)<<avgTest<<endl;
    }
  cout<<setw(10) <<"Average";
  for(int stu=0; stu<STU; stu++)
    {
      totalStu=0;
      for(int test=0; test < TEST; test++)
	{
	  totalStu += ar[stu][test];
	}
      avgStu = (double)totalStu/TEST;
      cout<<setw(10)<<avgStu;
    }
  cout<<endl;  
}
