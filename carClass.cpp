#include <iostream>
using namespace std;

enum dirct {NORTH, EAST, SOUTH, WEST};
int total=0;
class Car
{
private:
  string make;
  string model;
  int year;
  int mileage;
  dirct dirction;
  int x;
  int y;

public:
  Car(string mk, string md, int yr);
  string getMake();
  void turnRight();
  dirct getDirction();
  void goForward(int blk);
  int getx();
  int gety();
  void turnLeft();
  string getDirct();
  string getModel();
};

Car::Car(string mk, string md, int yr)
{
  make = mk;
  model = md;
  year = yr;
  mileage = 0;
  dirction = NORTH;
  x = 0;
  y = 0;

}

string Car::getMake()
{
  return make;
}

string Car::getModel()
{
  return model;
}

void Car::turnRight()
{
  if(dirction == WEST)
    dirction = NORTH;
  else
  dirction = (dirct)(dirction+1);

}

void Car::turnLeft()
{
  if(dirction == NORTH)
    dirction = WEST;
  else
    dirction = (dirct)(dirction-1);
}

dirct Car::getDirction()
{
  return dirction;
}

void Car::goForward(int blk)
{
  
  total+= blk;
  if(dirction==NORTH)
    y+= blk;

  if(dirction==SOUTH)
    y-= blk;

  if(dirction == EAST)
    x+= blk;

  if(dirction == WEST)
    x-=blk;
}

int Car::getx()
{
  return x;
}

int Car::gety()
{
  return y;
}

string Car::getDirct()
{
  switch(dirction)
    {
    case NORTH: return "North";
    case EAST: return "East";
    case SOUTH: return "South";
    case WEST: return "West";
    }
}

int main()
{

  Car c1("Toyota", "Camry", 2017);
  cout <<c1.getMake()<<endl;

  c1.turnRight();
  cout<<c1.getDirction()<<endl;
  c1.turnRight();
  cout<<c1.getDirction()<<endl;
  c1.turnRight();
  cout<<c1.getDirction()<<endl;
  c1.turnRight();
  cout<<c1.getDirction()<<endl;

  c1.goForward(3); //(0,3)
  cout<<"("<<c1.getx()<<","<<c1.gety()<<")"<<endl;

  c1.turnRight();


  c1.goForward(5); //(5, 3)
  cout<<"("<<c1.getx()<<","<<c1.gety()<<")"<<endl;

  c1.turnRight();


  c1.goForward(7); //(5, -4)
  cout<<"("<<c1.getx()<<","<<c1.gety()<<")"<<endl;

  c1.turnRight();


  c1.goForward(6); //(-1,-4)
  cout<<"("<<c1.getx()<<","<<c1.gety()<<")"<<endl;
  
  cout <<c1.getMake()<<" "<<c1.getModel()<<" is located at "<<"("<<c1.getx()<<","<<c1.gety()<<") facing "<<c1.getDirct()<<". it has "<<total<<" miles on it"<<endl;

  Car c2("Chevy", "Corvette", 2017);
  
  c2.goForward(5);
  cout<<"("<<c2.getx()<<","<<c2.gety()<<")"<<endl;

  c2.turnLeft();

  c2.goForward(1);
  cout<<"("<<c2.getx()<<","<<c2.gety()<<")"<<endl;

  c2.turnLeft();

  c2.goForward(2);
  cout<<"("<<c2.getx()<<","<<c2.gety()<<")"<<endl;

  c2.turnLeft();

  c2.goForward(4);
  cout<<"("<<c1.getx()<<","<<c1.gety()<<")"<<endl;

  c2.turnLeft();

  c2.goForward(10);
  cout<<"("<<c2.getx()<<","<<c2.gety()<<")"<<endl;

  cout <<c2.getMake()<<" "<<c2.getModel()<<" is located at "<<"("<<c2.getx()<<","<<c2.gety()<<") facing "<<c2.getDirct()<<". it has "<<total<<" miles on it"<<endl;
  return 0;
}

