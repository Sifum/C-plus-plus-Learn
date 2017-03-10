#include <iostream>
#include <string>
using namespace std;

/*
在派生类中隐藏基类的方法
*/
class Fish
{
public: 
   void Swim()
   {
     cout << "Fish swims...!" << endl;
   }
   
   void Swim(bool FreshWaterFish)
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
  void Swim()
  {
    cout << "Tuna swims real fast" << endl;	
  }
};

int main()
{
  Tuna MyDinner;
  
  cout << "Getting my food to swim" << endl;
  
  //MyDinner.Swim(false);//编译出错，Fish::Swim(bool)被Tuna:Swim()覆盖 
  MyDinner.Swim();

  return 0;
}
/*
解决方法：
1.使用作用域运算符
   MyDinner.Fish::Swim();
2. 在Tuna类中，使用关键字using解除对Fish::Swim()的隐藏
class Tuna: public Fish
{
public:
   using Fish::Swim;
   void Swim()
   {
     cout << "Tuna swims real fast" << endl;
   }
}
3.在Tuna类中，覆盖Fish::Swim()的所有重载版本（如果需要，可通过
Tuna::Fish(...)调用方法Fish::Swim()）
class Tuna: public Fish
{
public:
  void Swim(bool FreshWaterFish)
  {
    Fish::Swim(FreshWaterFish);
  }
  void Swim()
  {
  	cout << "Tuna swims real fast" << endl;
  }
}
*/
