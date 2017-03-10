#include <iostream>
#include <string>
using namespace std;

/*
在派生类中覆盖基类的方法，但可通过作用域解析运算符(::)
调用基类中的被覆盖的方法 
*/
class Fish
{
private:
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
  void Swim()
  {
    cout << "Tuna swims real fast" << endl;	
    Fish::Swim();
  }
};

//派生类中的swim方法覆盖了基类中的swim方法,但通过
//作用域运算符调用基类的被覆盖swim方法 
class Carp: public Fish
{
public:
   Carp():Fish(true){};
   void Swim()
   {
   	 cout << "Carp swims real fast " << endl;
   	 Fish::Swim();
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
