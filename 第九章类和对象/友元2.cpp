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
   friend class Utility;
public:
   Human(string InputName, int InputAge)
   {
     Name = InputName;
     Age = InputAge;
   }
};
class Utility
{
public:
   static void DisplayAge(const Human& Person)
   {
   	 cout << Person.Age << endl;
   }
};
int main()
{
  Human FirstMan("Adam", 25); 
  cout << "Accessing private member Age via friend: ";
  Utility::DisplayAge(FirstMan);
  return 0;
}
