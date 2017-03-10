#include <iostream>
#include <string>
using namespace std;

/*
�������������ػ���ķ���
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
  
  //MyDinner.Swim(false);//�������Fish::Swim(bool)��Tuna:Swim()���� 
  MyDinner.Swim();

  return 0;
}
/*
���������
1.ʹ�������������
   MyDinner.Fish::Swim();
2. ��Tuna���У�ʹ�ùؼ���using�����Fish::Swim()������
class Tuna: public Fish
{
public:
   using Fish::Swim;
   void Swim()
   {
     cout << "Tuna swims real fast" << endl;
   }
}
3.��Tuna���У�����Fish::Swim()���������ذ汾�������Ҫ����ͨ��
Tuna::Fish(...)���÷���Fish::Swim()��
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
