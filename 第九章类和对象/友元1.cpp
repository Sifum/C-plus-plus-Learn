#include <iostream>
#include <string>
using namespace std;

//ͨ����˽�г�Ա��������Ԫ�����Ԫ�������ؼ���friend
//���ܴ��ⲿ�������˽�������� 
class Human
{
private: 
   string Name;
   int Age;
   friend void DisplayAge(const Human& Person);
public:
   Human(string InputName, int InputAge)
   {
     Name = InputName;
     Age = InputAge;
   }
};
void DisplayAge(const Human& Person)
{
	cout << Person.Age << endl;
	//�˺�����ȫ�ֺ������ɷ���Human���˽�����ݳ�Ա�������friend������ע�͵�������˽�����ݽ����� 
}
int main()
{
  Human FirstMan("Adam", 25); 
  cout << "Accessing private member Age via friend: ";
  DisplayAge(FirstMan);
  return 0;
}
//�ṹ��ͬ���ࣺ�ṹ�еĳ�ԱĬ��Ϊ���еģ������ԱĬ����˽�е�
