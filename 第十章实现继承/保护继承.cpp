#include <iostream>
#include <string>
using namespace std;

//�����̳� 
/*
�����̳к�˽�м̳е�����֮����
1.��Ҳ��ʾhas-a��ϵ��
2.��Ҳ���������ܹ����ʻ�������й��кͱ�����Ա��
3.�ڼ̳в�νṹ���棬�����̳н���˽�м̳���Щ��ͬ�� 
*/ 
//��һ������Ϊ��һ�����е�˽�г�Ա����Ϊ��ϻ�ۺ�
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
���ڴ����ʹ��˽�м̳е����Σ����õ�ѡ����,�����������Ϊ������
��һ����Ա���ԣ� 
*/
