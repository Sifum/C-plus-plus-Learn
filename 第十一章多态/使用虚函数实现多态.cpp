#include <iostream>
#include <string>
using namespace std;

class Fish
{
public:
  virtual void Swim() 
  //ͨ���ؼ���virtual��������Ϊ�麯������ȷ�����������ø��ǰ汾�� 
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
	InputFish.Swim();//����Fish::Swim 
}

int main()
{
  Tuna MyDinner;
  Carp MyLunch;
  
  MakeFishSwim(MyDinner);//û�е���Fish::Swim() 
  
  MakeFishSwim(MyLunch);
  //����Ƕ�̬���������������Ϊ������� 
  return 0;
}


