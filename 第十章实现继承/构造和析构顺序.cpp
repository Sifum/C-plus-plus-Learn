#include <iostream>
#include <string>
using namespace std;

/*
构造顺序：基类到最后的派生类 
析构顺序：最后的派生类到基类 
*/
class FishDommyMember
{
public:
  FishDommyMember()//constructor-1
  {
  	cout << "FishDommyMember constructor" << endl;
  }
  ~FishDommyMember() //destructor-4
  {
  	cout << "FishDommyMember destructor" << endl;
  }
};
class Fish
{
protected:
   FishDommyMember dummy;
public:
   Fish()//constructor-2
   {
   	 cout << "Fish constructor" << endl;
   }
   ~Fish() //destructor-3
   {
   	 cout << "Fish destructor" << endl;
   }
};
class TunaDummyMember
{
public:
  TunaDummyMember() //constructor-3
  {
  	cout << "TunaDummyMember constructor" << endl;
  }
  ~TunaDummyMember() //destructor-2
  {
  	cout << "TunaDummyMember destructor" << endl;
  }
};
class Tuna: public Fish
{
private:
  TunaDummyMember dummy;
public:
  Tuna() //constructor-4
  {
  	cout << "Tuna constructor" << endl;
  }
  ~Tuna() //destructor-1
  {
  	cout << "Tuna destructor" << endl;
  }
};
int main()
{
  Tuna MyDinner;

  return 0;
}
