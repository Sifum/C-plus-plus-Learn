#include <iostream>
#include <string>
using namespace std;

//˽�м̳�
/*
Car����˽�з����̳�Motor�� 
˽�м̳�ʹ��ֻ���������ʹ�û�������Ժͷ��������Ҳ����has-a��ϵ 
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
  //MyDreamCar.PumpFuel();��������� 

  return 0;
}
