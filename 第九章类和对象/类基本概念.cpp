#include <iostream> 
#include <string> 
using namespace std;

class Human
{
 private: //˽�����Բ������������úͷ��� 
    string Name;
	int Age;
 public:
    void SetName(string HumansName)
	{
	  Name = HumansName;
	}
	
	void SetAge(int HumansAge)
	{
	  Age = HumansAge;	
	}
	
	void InstroduceSelf()
	{
	  cout << "I am " + Name << " and am ";
	  cout << Age << " years old" << endl;	
	}
};
int main()
{
  Human FirstMan;
  FirstMan.SetName("Adam");
  FirstMan.SetAge(30);   
  
  FirstMan.InstroduceSelf();
  
  Human FirstWoman;
  FirstWoman.SetName("Minson");
  FirstWoman.SetAge(20);   
  
  FirstWoman.InstroduceSelf();
  return 0;
}
/*
ʵ���������� ʵ������
���Ժͷ������ʣ�
1.����ʷ���ʵ����.���ԣ�ʵ����.����();
2.ָ�룺����* ʵ����=new ����(); ʵ����->���ԣ�ʵ����->����(); 
  Human* Tom = new Human();
  (*Tom).IntroduceSelf();
*/
