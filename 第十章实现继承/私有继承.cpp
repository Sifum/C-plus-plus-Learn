#include <iostream>
#include <string>
using namespace std;

//私有继承
/*
Car类以私有方法继承Motor类 
私有继承使得只有子类才能使用基类的属性和方法，因此也被称has-a关系 
*/ 
class Motor
{
public:
  void SwitchIgnition()
  {
  	cout << "Ignition ON" << endl;
  }
  void PumpFuel()
  {
  	cout << "Fuel in cylinders" << endl;
  }
  void FireCylinder()
  {
  	cout << "Vroooom" << endl;
  }
};
class Car: public Motor
{
public:
  void Move()
  {
  	SwitchIgnition();
  	PumpFuel();
  	FireCylinder();
  }
};
int main()
{
  Car MyDreamCar;
  MyDreamCar.Move();
  //MyDreamCar.PumpFuel();将编译错误 

  return 0;
}
