#include <iostream>
#include <string>
using namespace std;

class Human
{
 private:
    int Age;
    string Name;
 public:
    Human()  //���캯��������������ͬ�ĺ��������౻ʵ����ʱ�Զ����� 
    {
      Age = 0;
	  cout << "Constructed an instance of class Human" << endl;	
    }
    void SetName(string HumansName)
    {
    	Name = HumansName;
    }
    void SetAge(int HumansAge)
    {
    	Age = HumansAge;
    }
    void IntroduceSelf()
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
  
  Human FirstWoman;
  FirstWoman.SetName("Adam");
  FirstWoman.SetAge(30);
  
  FirstMan.IntroduceSelf();
  FirstWoman.IntroduceSelf();
  return 0;
}
/*
1.���캯��Ҳ�����������ⶨ�壺
Human::Human()
{
  //constructor code here
}
2.���캯��Ҳ������
ʵ���������ص��࣬�磺
Human FirstMan("Eve");
Human FirstWoman("Minson",12); 
3.ʵ����û�в�����ʱ��Ĭ�ϵ���Ĭ��û�в����Ĺ��캯����
������Ҳ�ɲ�����Ĭ�Ϲ��캯����ֻ�д������Ĺ��캯�� 
*/ 
