#include <iostream>
#include <string>
using namespace std;

/*
c++提供了以下类型转换运算符：
static_cast:
用于在相关类型的指针之间进行转换，还可显式地执行标准数据类型的类型转换 
语法：destination_type result =  cast_type <destination_type>(object_to_be_casted)
dynamic_cast：
动态类型转换在运行阶段执行类型转换。
语法：destination_type* pDest = dynamic_cast <class_type*> (pSource); 
可检查操作的结果，以判断类型转换是否成功。if(pDest) 
reinterpret_cast:
该类型转换强制编译器接受static_cast通常不允许的类型转换 
const_cast:
让程序员能够关闭对象的访问修饰符const
语法：SomeClass& refData = const_cast <SomeClass&>(mData);
SomeClass* pCastedData = const_cast <SomeClass*>(pData);
 
*/
int main()
{
	double dPi = 3.1415926;
	int Num = static_cast<int>(dPi);
    
    cout << Num << endl;
	return 0;
}
/*
c风格处理方法：
int Num2 = (int)dPi; 

1.将Derived*转换为Base*被称为向上转换；这种转换是安全的；
2.将Base*转换为Derived*被称为向下转换，除非使用dynamic_cast，否则不安全。
3.创建继承层次结构时，应尽量将函数声明为虚函数。 
*/
