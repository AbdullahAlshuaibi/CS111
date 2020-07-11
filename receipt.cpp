#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{

  string name; 
  string date; 
  string item;
  double price;
  const double TAX = 7.75;
  double sales;
  double total;


  cout << "Enter date (mm/dd/yyyy): ";
  cin >> date;
  
  cout << "enter person name: ";
  cin >> name;

  cout << "enter item name: ";
  cin>> item;

  cout << "enter price: ";
  cin >> price;


  sales = price * (TAX / 100);
  total = sales + price;

    cout << "------------------------------" <<endl<<endl;
    cout << "Your Friendly Neigbor Store" <<endl<<endl;

    cout << setw(20) << date <<endl;
    cout << setw(26) << name <<endl<<endl;


    cout << left << setw(20) << item << right << setw(10) << price <<endl;
    cout << left << setw(11) << "Sales tax" << right << setw(10) << sales <<endl;
    cout << left << setw(15) << "Total" << right << setw(10) << total <<endl<<endl;

    cout << "------------------------------" <<endl;
    cout << "Thank you for shopping with us" <<endl;


    return 0;
}
