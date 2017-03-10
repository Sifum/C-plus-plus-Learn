#include <iostream>
#include <memory> //include this to use std::unique_ptr
#include <string>
using namespace std;

/*
解除引用运算符（*）
成员选择运算符（->） 
*/
class Date
{
private:
  int Day;
  int Month;
  int Year;
  string DateInString;
public:
  Date(int InputDay, int InputMonth, int InputYear)
      :Day(InputDay), Month(InputMonth), Year(InputYear){};
  void DisplayDate()
  {
  	cout << Day << " / " << Month << " / " << Year << endl;
  }
};
int main()
{
	unique_ptr<int> pDynamicAllocInteger(new int);
	*pDynamicAllocInteger = 42;
	cout << "Integer value is: " << *pDynamicAllocInteger << endl;
	cout << "The new instance of date contains: ";
	pHoliday -> DisplayDate();
		
	return 0;
}
