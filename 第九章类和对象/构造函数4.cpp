#include <iostream>
#include <string>
using namespace std;

//��Ĭ��ֵ�Ĺ��캯���������в�������Ĭ��ֵʱ�����൱��Ĭ�Ϲ��캯�� 
class Human
{
 private:
    int Age;
    string Name;
 public:
    Human(string HumansName = "Minson", int HumansAge =30)
    {
      Name = HumansName;
	  Age = HumansAge;
	  cout << "Overloaded constructor creates " << Name;
	  cout << " of age " << Age << endl;	
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
  
  Human FirstWoman("Minson", 25);
  
  FirstMan.IntroduceSelf();
  FirstWoman.IntroduceSelf();

  return 0;
}
