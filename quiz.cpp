#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int n1;
  int n2;
  int q;
  int i;
 int count =0;
  int answer;
 int count1 =0;

 cout << "How many questions do you want to solve: ";
 cin >> q;

 srand(time(0));

 for(i=1;i<=q;i++)
   {
     n1 = rand()%10;
     n2 = rand()%10;

     cout << n1 <<" + " << n2 <<" = ";
     cin>> answer;

     if(n1 + n2 == answer)
       {       
	 cout<< "Good job"<<endl;
	 count++;
       }
     else 
       {      
	 cout << "Correct anser is " << n1 + n2 <<endl;
	 count1++;
       }
   }

 cout << "You answered " <<count<< " questions correctly  and " << count1 << " questions incorrectly."<<endl;

 return 0;
} 

