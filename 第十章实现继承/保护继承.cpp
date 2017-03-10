#include <iostream>
#include <string>
using namespace std;

//保护继承 
/*
保护继承和私有继承的相似之处：
1.它也表示has-a关系；
2.它也让派生类能够访问基类的所有公有和保护成员；
3.在继承层次结构外面，保护继承将与私有继承有些不同。 
*/ 
//将一个类作为另一个类中的私有成员被称为组合或聚合
/*
class Car
{
private:
   Motor HeartOfCar;
}
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
class Car: protected Motor
{
public:
  void Move()
  {
  	SwitchIgnition();
  	PumpFuel();
  	FireCylinder();
  }
};
class SuperCar: protected Car
{
public:
  void Move()
  {
    SwitchIgnition();
  	PumpFuel();
  	FireCylinder();
  	FireCylinder();
  }
};
int main()
{
  SuperCar MyDreamCar;
  MyDreamCar.Move();

  return 0;
}
/*
对于大多数使用私有继承的情形，更好的选择是,将基类对象作为派生类
的一个成员属性， 
*/
