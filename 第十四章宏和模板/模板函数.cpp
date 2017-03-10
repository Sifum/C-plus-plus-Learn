#include <iostream>
#include <assert.h> 
#include <string>
using namespace std;

/*
模板声明：
template <parameter list>
template function | class declaration...
模板参数列表包含关键字typename,它定义了模板参数objectType
objectType是一个占位符，针对对象实例化模板时，将使用对象的类型替换它 
可分为模板函数和模板类 
*/
/*
模板函数使用方法：
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
宏不是类型安全，模板是类型安全的 
*/
