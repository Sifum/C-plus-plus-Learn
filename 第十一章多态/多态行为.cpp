#include <iostream>
#include <string>
using namespace std;

class Fish
{
public:
  void Swim()
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

void MakeFishSwim(Fish& InputFish)
{
	InputFish.Swim();//调用Fish::Swim 
}

int main()
{
  Tuna MyDinner;
  //调用 Tuna::Swim 
  MyDinner.Swim();
  //sending Tuna as Fish 
  MakeFishSwim(MyDinner);

  return 0;
}


