/*****************************************************************************
Abdullah Alshuaibi
CS111
10/27/2017

This program will get some information from the user and will print the invoice
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

void getCustomerInfo(int& accountN, int& month, int& days, int& year, char& code, string& county);
void getItemsInfo(double &price, int &weight, char &choice, double &Tprice, int &Tweight);
double calcDiscount(int date, double Tprice);
double calcSalesTax(char code, double Tprice, double discount);
double calcShipping(int Tweight);
void outputInvoice(double Tprice, double discount, double salesTax, double shipping, char code, int accountN, int month, int days, int year, double& total, double price, int weight, string county);

int main()
{
  int accountN; // account number
  int month; // the month 
  int days; // the day 
  int year; // the year
  char code; // the county 
  double Tprice = 0; // total prices 
  int Tweight = 0; // total weight
  double discount; // discount amount
  double salesTax; // sales Tax charges 
  double shipping; // shipping charges
  double price; // price of the item
  int weight; // weight of the item
  char choice; // yes or no if the user want to add more itmes
  string county; // county full name 
  double total; // total charges

  cout<<fixed<<setprecision(2);

  getCustomerInfo(accountN, month, days, year, code, county);
  getItemsInfo(price, weight, choice, Tprice, Tweight);
  discount = calcDiscount(month, Tprice);
  salesTax = calcSalesTax(code, Tprice, discount);
  shipping = calcShipping(Tweight);
  outputInvoice(Tprice, discount, salesTax, shipping, code, accountN, month, days, year, total, price, weight, county);

  return 0;
}
/************************************************************
accountN is account number                                                                                                                                                                         
month is the mnth                                                                                                                                                                                 
days is the day                                                                                                                                                                 
year is the year                                        
code is the county
county is county full name
This function will get the acount# and the date,and the county
**************************************************************/

void getCustomerInfo(int& accountN, int& month, int& days, int& year, char& code, string& county)
{
  // ask to get customer information
  cout << "Enter the account number: ";
  cin >> accountN;
 
  cout<< "Enter the month: "; 
 cin >> month;

 cout << "Enter the days: ";
 cin >> days;

 cout << "Enter the year: ";
 cin >> year;

 cout << "Enter the county, 'S' for SAN DIEGO, 'L' for LOS ANGELES, 'O' for ORANGE: ";
  cin >> code;

  if(code == 'S') // if the user enter 'S'
    county = "SAN DIEGO";
  else if(code == 'L') // if the user enter 'L'
    county = "LOS ANGELES";
  else  // if the user enter 'O'
    county = "ORANGE";
}
/****************************************************************
price is price of the item
weight is the weight of the item
choice is if the youser want to order an item
Tprice is the total prices of the items
Tweight is the total weight of the items
This function will get the price and weght of the items
****************************************************************/
void getItemsInfo(double &price, int& weight, char &choice, double &Tprice, int &Tweight)
{
  cout <<"Do you want to order an item? Enter Y or N: ";
  cin>> choice;

  while(choice == 'Y')
    {
      cout << "Enter a price: "; // getting the price
      cin>> price;
      Tprice = Tprice + price; // calculating the total price

      cout<<"Enter a weight: "; // getting the weight 
      cin>> weight;
      Tweight = Tweight + weight; // calculating the total weight

      cout<<endl<<endl<<"Do you want to order another item? Enter Y or N: ";
      cin>>choice;
    }
}
/************************************************
month is the month of sale
Tprice is the total prices
This function will return the discount amount 
************************************************/
double calcDiscount(int month, double Tprice)
{
  double discount; // the discount amount of the total price before sales tax

  if(month>=1 && month <=5) // Jan-May
    discount = 0.05 * Tprice; // 5%
  else if(month >=6 && month <=8)  // Jun-Aug
    discount = 0.10 * Tprice; // 10%
  else if(month >=9 && month <= 12) // Sep-Dec
    discount = 0.15 * Tprice; // 15%
  
  
  return discount;
}
/*************************************************
code is the county's first letter
Tprice is the total prices 
discount is the discount amount of the total price
This function will return the sales Tax
**************************************************/
double calcSalesTax(char code,double Tprice, double discount)
{

  double salesTax; // the charges of the tax

  switch(code)
    {
    case 'O': // the tax rate of orange county 7.75%
    case 'S': salesTax = (Tprice - discount) * 7.75 /100; // the tax rate of San Diego county is 7.75%
      break;
    case 'L': salesTax = (Tprice - discount) * 8.25 /100; // the tax rate of LA county is 8.25%
    }
  return salesTax;
}
/*********************************************
Tweight is the total weight of the items
This function will return the shipping charges
**********************************************/
double calcShipping(int Tweight)
{
  double shipping; // the shipping charges

  if(Tweight<=25) // 25 pounds and under 
    shipping = 5.00; // $5

  else if(Tweight>= 26&&Tweight<= 50) // 26-50 pounds
    shipping = ((Tweight - 25) * 0.10) +  5.00; // 5$ for the first 25 punds and 10 cents/pound for pounds over 25

  else // over 50 pounds
    shipping = ((Tweight - 50) * 0.07) + 7.5; // 7.5$ for the first 50 pounds and 7 cents/pound for pounds over 50

  return shipping;
}
/*********************************************
This function will print the invoice
*********************************************/
void outputInvoice(double Tprice, double discount, double salesTax, double shipping, char code, int accountN, int month, int days, int year, double& total, double price, int weight, string county)
{

  total = (Tprice - discount) + salesTax + shipping;
  cout << endl<< left << setw(30) << "ACCOUNT NUMBER" << setw(20)<< "COUNTY"<<endl;
  cout << setw(30) << accountN << setw(20) << county << endl<<endl<< "DATE OF SALE "<< month<<"/"<<days<<"/"<<year<<endl;
  cout << endl << setw(20) << "TOTAL SALE AMOUNT: "<<"$"<< right << setw(7)<< Tprice<<endl;
  cout << left << setw(20) << "DISCOUNT: " << "$"<< right << setw(7) << discount<<endl;
  cout << left << setw(20) << "SALES TAX: "<< "$"<< right << setw(7) << salesTax<<endl;
  cout << left << setw(20) << "SHIPPING: " << "$"<< right << setw(7) << shipping<<endl;
  cout << left << setw(20) << "TOTAL DUE: "<< "$"<< right << setw(7) << total<<endl<<endl;
}
