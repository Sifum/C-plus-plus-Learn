#include <iostream>
#include <string>
using namespace std;

//通过在私有成员里声明友元类和友元函数，关键字friend
//就能从外部访问类的私有数据了 
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
	//此函数是全局函数，可访问Human类的私有数据成员，如果将friend这友行注释掉，访问私有数据将出错 
}
int main()
{
  Human FirstMan("Adam", 25); 
  cout << "Accessing private member Age via friend: ";
  DisplayAge(FirstMan);
  return 0;
}
//结构不同于类：结构中的成员默认为共有的，而类成员默认是私有的
