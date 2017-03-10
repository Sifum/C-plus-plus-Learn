#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <functional>
#include <string>
using namespace std;

/*
transform语法：
对源范围内的每个元素调用指定的函数对象，有两个版本，一个接收一个函数，常用于将
字符串转换为大写或小写（tolower(),toupper()） 
string Sample("heEld OEN");
transform(Sample.begin(), Sample.end(), strLowerCaseCopy.begin(), tolower);
第二个版本接收一个二元函数：
 transform(vecIntegers1.begin(), vecIntegers1.end(), vecIntegers2.begin(), dqResultAddition.begin(), plus<int>());
*/
int main()
{
   string Sample("This is a TEST string");
   cout << "The sample string is: " << Sample << endl;

   string strLowerCaseCopy;
   strLowerCaseCopy.resize(Sample.size());

   transform(Sample.begin(), Sample.end(), strLowerCaseCopy.begin(), tolower);

   cout << "Result of 'transform' on the string with 'lower' : " << endl;
   cout << strLowerCaseCopy << endl << endl;

   vector <int> vecIntegers1, vecIntegers2;
   for(int nNum = 0; nNum < 10; ++ nNum)
   {
   	  vecIntegers1.push_back(nNum);
   	  vecIntegers2.push_back(10 - nNum);
   }

   deque <int> dqResultAddition(vecIntegers1.size());
   transform(vecIntegers1.begin(), vecIntegers1.end(), vecIntegers2.begin(), dqResultAddition.begin(), plus<int>());
   cout << "Result of 'transform' using binary function 'plus' : " << endl;
   cout << endl << "Index Vector1 + Vector2 = Result(in Deque)" << endl;
   for(size_t nIndex = 0; nIndex < vecIntegers1.size(); ++ nIndex )
   {
   	 cout << nIndex << "  \t" << vecIntegers1[nIndex] << " \t+  ";
   	 cout << vecIntegers2[nIndex] << " \t = " ;
   	 cout << dqResultAddition[nIndex] << endl;
   }

   return 0;
}
