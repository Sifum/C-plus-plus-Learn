#include <iostream>
#include <string>
using namespace std;

//operator()�ö�������������Ϊ���������
//��������Ҳ��Ϊoperator()����������CDisplayҲ��Ϊ���������functor 
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
	//mDisplayFuncObject.operator()("Display this string!");ͬ�� 
	mDisplayFuncObject("Display this string!");
       
	return 0;
}
