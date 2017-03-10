#include <iostream>
#include <string>
using namespace std;

//operator()让对象像函数，被称为函数运算符
//这个运算符也称为operator()函数，对象CDisplay也称为函数对象或functor 
class CDisplay
{
public:
  void operator () (string Input) const
  {
  	cout << Input << endl;
  }
};
int main()
{
	CDisplay mDisplayFuncObject;
	//mDisplayFuncObject.operator()("Display this string!");同下 
	mDisplayFuncObject("Display this string!");
       
	return 0;
}
