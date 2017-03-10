#include <iostream>
#include <string>
using namespace std;

class SimpleClass
{
   int a,b;
public:
  void FuncDoSomething(){}
};
class Base
{
	int a,b;
public:
  virtual void FuncDoSomething(){}
};

int main()
{
  cout << "sizeof(SimpleClass) = " << sizeof(SimpleClass) << endl;
  cout << "sizeof(Base) = " << sizeof(Base) << endl;
  //可以看出同样的类，其中有一个具有虚函数，导致所占空间不一样 
  return 0;
}


