#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
for_each接受三个参数：范围起点，范围终点，对指定范围内的每个元素调用函数
C++11引入lambda表达式，即匿名函数对象
如：
for_each(vecIntegers.begin(), becIntegers.end(), [](int& Element){cout << element << ' ';}) 
*/
template <typename elementType>
struct DisplayElement
{
  void operator() (const elementType& element) const
  {
    cout << element << ' ';
  }
};
int main()
{
   vector<int> vecIntegers;
   
   for(int nCount = 0; nCount < 10; ++nCount)
       vecIntegers.push_back(nCount);
   
   list <char> listChars;
   
   for(char nChar = 'a'; nChar < 'k'; ++nChar)
       listChars.push_back(nChar);
   
   cout << "Displaying the vector of integers: " << endl;
   
   for_each(vecIntegers.begin(), vecIntegers.end(), DisplayElement <int> ());
   
   cout << endl << endl;
   
   cout << "Displaying the list of characters: " << endl;
   
   for_each(listChars.begin(), listChars.end(), DisplayElement<char>());
   
   return 0;
}
/*
函数对象是用作函数的对象，函数对象是实现了operator()的类的对象。 
一元函数：接受一个参数的函数，如f(x)。如果一元函数返回一个布尔值，则称函数为谓词；
二元函数：接受两个参数的函数，如f(x,y)。如果二元函数返回一个布尔值，则称函数为二元谓词
*/
