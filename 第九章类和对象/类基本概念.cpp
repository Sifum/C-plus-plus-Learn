#include <iostream> 
#include <string> 
using namespace std;

class Human
{
 private: //私有属性不能在类外设置和访问 
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
实例化：类名 实例名；
属性和方法访问：
1.点访问法：实例名.属性；实例名.方法();
2.指针：类名* 实例名=new 类名(); 实例名->属性；实例名->方法(); 
  Human* Tom = new Human();
  (*Tom).IntroduceSelf();
*/
