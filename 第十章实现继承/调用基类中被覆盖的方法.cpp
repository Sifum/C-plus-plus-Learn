#include <iostream>
#include <string>
using namespace std;

/*
���������и��ǻ���ķ���������ͨ����������������(::)
���û����еı����ǵķ��� 
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
  Tuna():Fish(false){};//Tuna�����๹�캯��,���û��๹�캯������������� 
  void Swim()
  {
    cout << "Tuna swims real fast" << endl;	
    Fish::Swim();
  }
};

//�������е�swim���������˻����е�swim����,��ͨ��
//��������������û���ı�����swim���� 
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
  
  //MyLunch.FreshWaterFish = false;���� 
  return 0;
}
