#include <iostream>
#include <string>
using namespace std;

/*
基类含有构造函数，实例化派生类后自动调用基类构造函数，
可用通过使用初始化列表的方法，在派生类中定义参数列表的构造函数
调用基类构造函数。 
核心：通过派生类的构造函数调用合适的基类构造函数
*/
class Fish
{
protected:
   bool FreshWaterFish;
public: 
   Fish(bool IsFreshWater):FreshWaterFish(IsFreshWater){}
   
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
  Tuna():Fish(false){};//Tuna派生类构造函数,调用基类构造函数，并传入参数 
};

class Carp: public Fish
{
public:
   Carp():Fish(true){};
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
