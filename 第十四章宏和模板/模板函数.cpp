#include <iostream>
#include <assert.h> 
#include <string>
using namespace std;

/*
ģ��������
template <parameter list>
template function | class declaration...
ģ������б�����ؼ���typename,��������ģ�����objectType
objectType��һ��ռλ������Զ���ʵ����ģ��ʱ����ʹ�ö���������滻�� 
�ɷ�Ϊģ�庯����ģ���� 
*/
/*
ģ�庯��ʹ�÷�����
template <typename objectType>
const objectType& GetMax(const objectType& value1, const objectType& value2)
{
  if(value1 > value2)
     return value1;
  else
     return value2;
}
*/
template <typename Type>
const Type& GetMax(const Type& value1, const Type& value2)
{
  if(value1 > value2)
     return value1;
  else
     return value2;
}
template <typename Type>
void DisplayComparison(const Type& value1, const Type& value2)
{
	cout << "GetMax(" << value1 << ", " << value2 << ")" << endl;
	cout << GetMax(value1, value2) << endl;
}
int main()
{
   int int1 = -101, int2 = 2011;
   DisplayComparison(int1, int2);
   
   double d1 = 3.14, d2 = 3.1416;
   DisplayComparison(d1, d2);
   
   string Name1("Jack"),Name2("John");
   DisplayComparison(Name1, Name2);
   
   return 0;
}
/*
�겻�����Ͱ�ȫ��ģ�������Ͱ�ȫ�� 
*/
