#include <iostream>
#include <string>
using namespace std;

class Fish
{
public:
  virtual void Swim() 
  //通过关键字virtual，声明其为虚函数，可确保编译器调用覆盖版本。 
  {
  	cout << "Fish swims!" << endl;
  }
};
class Tuna: public Fish
{
public:
  void Swim()
  {
  	cout << "Tuna swims!" << endl;
  }
};
class Carp: public Fish
{
public:
  void Swim()
  {
  	cout << "Carp swims!" << endl;
  }
};

void MakeFishSwim(Fish& InputFish)
{
	InputFish.Swim();//调用Fish::Swim 
}

int main()
{
  Tuna MyDinner;
  Carp MyLunch;
  
  MakeFishSwim(MyDinner);//没有调用Fish::Swim() 
  
  MakeFishSwim(MyLunch);
  //这就是多态，将派生类对象视为基类对象 
  return 0;
}


