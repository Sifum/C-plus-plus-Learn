#include <iostream>
#include <string>
using namespace std;

/*
protected 访问限定符，相当于允许派生类和友元类访问它，但禁止在
继承层次结构外访问它 
*/
class Fish
{
protected:
   bool FreshWaterFish;
public:
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
  
  //MyLunch.FreshWaterFish = false;出错 
  return 0;
}
