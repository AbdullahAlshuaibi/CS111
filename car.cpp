#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
  ifstream fin;
  ofstream fout;

  fin.open("car.dat");

    if(!fin)
      {
	cout<<"Cannot open the car file"<<endl;
      }
    else
      {
	int num;
	int num1;
	string name;
	int totalm = 0;
	int totalg =0;
	int count =0;
	double totalMPG = 0.0;
	double MPG;


	fout.open("result.dat");
	
	fin >> name;
	    fout<<left<<setw(20)<<"Model Name"<<setw(20)<<"Miles Driven"<<setw(20)<<"Gallons of Gas Used"<<right<<setw(20)<<"MPG"<<endl;
	  while(fin)
	    {
	      count++;

	      fin >> num;
	      fin >> num1;
	      MPG = (double)num/num1;
	      fout <<left<<setw(20)<<name<<right<<setw(20)<<num<<setw(20)<<num1<<setw(20)<<fixed<<setprecision(2)<<MPG<<endl;
	      totalm += num;
	      totalg += num1; 
	      totalMPG += MPG;
	      fin >> name;
	    }
	if(count != 0)
	  {

	    fout<<endl<<"Total Miles Driven: "<<totalm<< " miles"<<endl;
	    fout<<"Total Gallons of Gas Used: "<< totalg<< " gallons"<<endl;
	    fout<<"Averagr MPG: "<<totalMPG /(double)count<<" miles per gallon"<<endl;
	  } 
	else
	  {
	    fout<<"No cars were in the input file."<<endl;
	  }

	
      }

  return 0;
}
