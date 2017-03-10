#include <iostream>
#include <string>
using namespace std;

//不能实例化的基类被称为抽象基类，这样的基类只有一个用途，
//那就是从它派生出其他类。
//要创建抽象基类，可声明纯虚函数 
class Fish
{
public:
  virtual void Swim() = 0;//抽象基类常被称为ABC 
};
class Tuna: public Fish
{
public:
  void Swim()
  {
  	cout << "Tuna swims fast in the sea!" << endl;
  }
};
class Carp: public Fish
{
	void Swim()
	{
		cout << "Carp swims slow in the lake!" << endl;
	}
};
void MakeFishSwim(Fish& inputFish)
{
	inputFish.Swim();
}

int main()
{
  Carp MyLunch;
  Tuna MyDinner;
  
  MakeFishSwim(MyLunch);
  MakeFishSwim(MyDinner);
   
  return 0;
}


