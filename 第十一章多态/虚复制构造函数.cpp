#include <iostream>
#include <string>
using namespace std;

class Fish
{
public:
  virtual Fish* Clone() = 0;
  virtual void Swim() = 0;
};
class Tuna: public Fish
{
public:
  Fish* Clone()
  {
  	return new Tuna(*this);
  }
  void Swim()
  {
  	cout << "Tuna swims fast in the sea" << endl;
  }
};
class Carp: public Fish
{
   Fish* Clone()
   {
     return new Carp(*this);
   }
   void Swim()
   {
   	 cout << "Carp swims slow in the lake" << endl;
   }
};

int main()
{
  const int Array_Size = 4;
  Fish* MyFishes[Array_Size] = {NULL};
  MyFishes[0] = new Tuna();
  MyFishes[1] = new Carp();
  MyFishes[2] = new Tuna();
  MyFishes[3] = new Carp(); 
  
  Fish* MyNewFishes[Array_Size];
  for(int Index = 0; Index < Array_Size; ++Index)
    MyNewFishes[Index] = MyFishes[Index]->Clone();
  for(int Index = 0; Index < Array_Size; ++Index)
    MyNewFishes[Index]->Swim();
  for(int Index = 0; Index < Array_Size; ++Index)
  {
  	delete MyFishes[Index];
  	delete MyNewFishes[Index];
  }
  return 0;
}
/*
1.对于将被派生类覆盖的基类方法，务必将其生命为虚函数
2.纯虚函数导致类变成抽象基类，且在派生类中必须提供虚函数的实现
*/
