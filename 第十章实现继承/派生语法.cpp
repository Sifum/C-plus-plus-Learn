#include <iostream>
#include <string>
using namespace std;

/*
�̳��﷨��
class Derived: access-specifier Base
class ��������:public|private|protected ������
public(��ʾ��������һ������)��private��protected(��ʾ��������һ������)
*/
class Fish
{
public:
   bool FreshWaterFish;
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
  
  return 0;
}
