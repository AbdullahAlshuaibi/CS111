/*****************************************************************************
Abdullah Alshuaibi
CS111
Lab
09/11/2017

This program will ask the user's information and the radius of a circle. Then the program will calculate the area and circumference of the circle and display them along with user's information.
*****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
  int age; //the age of the user
  double gpa;  // the gpa
  char gender; // gender of the user
  string name; // the name of the user
  int radius; // radius value
  const double PI = 3.14;  
  double area; // the area valus
  double circumference; // the circum value

  cout << "enter your name:"; 
  cin >> name; 

  cout << "enter age:"; 
  cin >> age; 

  cout << "enter gender:";
  cin >> gender;


  cout << "enter gpa:"; 
  cin >> gpa;

  cout << "enter radius:";
    cin >> radius; 
    // operation 
    cout << "hello " << name <<endl;
    cout << "your age is " << age <<endl;
    cout << "your gpa is " << gpa <<endl;
    cout << "your gender is " << gender << endl;
 
    area = PI * radius * radius;
    cout << "the area is " <<area<<endl;

    circumference = PI * radius * 2;
    cout << "the circumference is " <<circumference<<endl;


    return 0;
}


 
