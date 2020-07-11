#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
  char ch;
  string name; 
  string date; 
  string item;
  double price;
  const double TAX = 7.75;
  double sales;
  double total;

  cout<<"This program will take some info. please press enter to cintinue"<<endl;
  cin.get(ch);

  cout << "Enter date (mm/dd/yyyy): ";
  cin >> date;
  
  cin.ignore(1000, '\n');
  
  cout << "enter person name: ";
  getline(cin, name); 


  cout << "enter item name: ";
  getline(cin, item);

  cout << "enter price: ";
  cin >> price;


  sales = price * (TAX / 100);
  total = sales + price;

    cout << "------------------------------" <<endl<<endl;
    cout << " \"Your Friendly Neigbor Store\"" <<endl<<endl;

    cout << setw(30) << date <<endl;
    cout << setw(30) << name <<endl<<endl;


    cout << left << setw(20) << item << right << setw(10) << price <<endl;
    cout << left << setw(11) << "Sales tax" << right << setw(19) << fixed <<setprecision(2) << sales <<endl;
    cout << left << setw(15) << "Total" << right << setw(15) << total <<endl<<endl;

    cout << "------------------------------" <<endl;
    cout << "Thank you for shopping with us" <<endl;


    return 0;
}
