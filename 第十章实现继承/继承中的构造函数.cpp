#include <iostream>
#include <string>
using namespace std;

/*
���ຬ�й��캯����ʵ������������Զ����û��๹�캯����
����ͨ��ʹ�ó�ʼ���б�ķ��������������ж�������б�Ĺ��캯��
���û��๹�캯���� 
���ģ�ͨ��������Ĺ��캯�����ú��ʵĻ��๹�캯��
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
  Tuna():Fish(false){};//Tuna�����๹�캯��,���û��๹�캯������������� 
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
  
  //MyLunch.FreshWaterFish = false;���� 
  return 0;
}
