#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

//c++11
//通过捕获列表接受状态变量的lambda表达式
//判断一个数字能否被另一个数字整除 
int main()
{
   vector<int> vecIntegers;
   cout << "The vector contains the following sample values: ";

   for(int nCount = 25; nCount < 32; ++nCount)
   {
   	 vecIntegers.push_back(nCount);
   	 cout << nCount << ' ';
   }
   cout << endl << "Enter divisor ( > 0): ";
   int Divisor = 2;
   cin >> Divisor;

   vector<int>::iterator iElement;
   iElement = find_if(vecIntegers.begin(), vecIntegers.end(),[Divisor](int dividend){return (dividend % Divisor) == 0;});
   if(iElement != vecIntegers.end())
   {
   	 cout << "First element in vector divisible by " << Divisor;
   	 cout << ": " << *iElement << endl;
   }

   return 0;
}
/*
通用语法：
[StateVar1, StateVar2](Type& param){ //lambda code};
要在lambda表达式中修改这些状态变量，可添加变量multable,但离开表达式后即失效:
[StateVar1, StateVar2](Type& param)multable{ //lambda code};
要使得状态变量的修改在其外部也有效,应按引用传递他们：
[&StateVar1, &StateVar2](Type& param){ //lambda code};
多个输入参数,用逗号分隔：
[StateVar1, StateVar2](Type1& var1, Type2& var2){ //lambda code};
如果要向编译器明确地指定返回类型，可使用->，如下：
[StateVar1, StateVar2](Type1& var1, Type2& var2) -> returnType{ return (value or expression);};
复合语句：
[StateVar1, StateVar2](Type1& var1, Type2& var2) -> returnType{ Statement1; Statement2; return (value or expression);};
*/
