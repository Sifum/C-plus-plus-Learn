#include <iostream>
#include <string>
using namespace std;

/*
protected �����޶������൱���������������Ԫ�������������ֹ��
�̳в�νṹ������� 
*/
class Fish
{
protected:
   bool FreshWaterFish;
public:
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
  Tuna()
  {
  	 FreshWaterFish = false;
  }
};

class Carp: public Fish
{
public:
   Carp()
   {
   	 FreshWaterFish = true;
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
