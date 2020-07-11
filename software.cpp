/***********************************************************************
Abdullah Alshuaibi
CS111
Assignment 3
10/05/2017

This program will get the quntity of purchase from the user and then it will output the price before discount and the discount amount, and the total due.
************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

  int date; // the today's date
  string company; // the company's name
  int q; // the quantity the user want to purchase.
  double price; // price before discount
  double discount; // the amount of discount
  double total; // total due


  // date, company's name, and the quantity
  cout << "Enter today's date (mm/dd/yy): ";
  cin >> date;

  cin.ignore(1000, '\n');

  cout << "Enter the company's name: ";
  getline(cin, company);

  cout << "Enter the quantity you would like to purchase: ";
  cin >> q;

  // fixing to 2 decimal and getting the price
  cout <<fixed<<setprecision(2);

  price = 99 * q;

 
  if(q<0) // quantity must be < 0 for getting invalid quantity
    cout <<endl<<"Invalid quantity"<<endl<<endl;

  else if(q==0) // quantity must be = 0 for getting this message 

    cout <<endl<<"Hope you decide to buy our software in the future." <<endl<<endl;
   
  else // quantity > 0
    {        
      if(q <= 9)
	{
	  discount = 0;
	}
      else if(q <= 19)
	{
	  discount = price * 0.20; // getting the discount for %20
	} 
      else if(q <= 49)
	{
	  discount = price * 0.30; // getting the discount for %30
	}
      else if(q <= 99)
	{
	  discount = price * 0.40; // getting the discount for %40
	}
      else
	discount = price * 0.50; // geet the discount for %50 when q>=100
    
    
  total = price - discount; 

  // showing the labels and the prices
  cout <<endl<<"Invoice for "<<company<<endl<<endl;

 cout <<left<<setw(30)<<"Price before discount"<<right<<setw(1)<<"$"<<setw(10)<<price<<endl;
 cout <<left<<setw(30)<<"Discount"<<right<<setw(1)<<"$"<<setw(10)<<discount<<endl;
 cout <<left<<setw(30)<<"Total Due"<<right<<setw(1)<<"$"<<setw(10)<<total<<endl<<endl;
    }
  return 0;
}
