#include <iostream>
#include <string>
using namespace std;

/*
继承语法：
class Derived: access-specifier Base
class 派生类名:public|private|protected 基类名
public(表示派生类是一个基类)、private或protected(表示派生类有一个基类)
*/
class Fish
{
public:
   bool FreshWaterFish;
   void Swim()
   {
     if(FreshWaterFish)
        cout << "Swins in lake " << endl;
     else
        cout << "Swins in sea " << endl;
   }
};

class Tuna: public Fish
{
public:
  Tuna()
  {
  	 FreshWaterFish = false;
  }
};

class Carp: public Fish
{
public:
   Carp()
   {
   	 FreshWaterFish = true;
   }
};
int main()
{
  Carp MyLunch;
  Tuna MyDinner;
  
  cout << "Getting my food to swim" << endl;
  
  cout << "Lunch: ";
  MyLunch.Swim();
  
  cout << "Dinner: ";
  MyDinner.Swim();
  
  return 0;
}
