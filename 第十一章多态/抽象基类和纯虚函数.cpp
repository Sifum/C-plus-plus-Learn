#include <iostream>
#include <string>
using namespace std;

//����ʵ�����Ļ��౻��Ϊ������࣬�����Ļ���ֻ��һ����;��
//�Ǿ��Ǵ��������������ࡣ
//Ҫ����������࣬���������麯�� 
class Fish
{
public:
  virtual void Swim() = 0;//������ೣ����ΪABC 
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


