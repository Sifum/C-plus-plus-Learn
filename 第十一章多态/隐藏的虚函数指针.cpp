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
  //���Կ���ͬ�����࣬������һ�������麯����������ռ�ռ䲻һ�� 
  return 0;
}


