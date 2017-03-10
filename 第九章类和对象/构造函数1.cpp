#include <iostream>
#include <string>
using namespace std;

class Human
{
 private:
    int Age;
    string Name;
 public:
    Human()  //构造函数，是与类名相同的函数，在类被实例化时自动调用 
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
1.构造函数也可在类声明外定义：
Human::Human()
{
  //constructor code here
}
2.构造函数也可重载
实例化有重载的类，如：
Human FirstMan("Eve");
Human FirstWoman("Minson",12); 
3.实例化没有参数的时候默认调用默认没有参数的构造函数，
在类中也可不存在默认构造函数，只有带参数的构造函数 
*/ 
