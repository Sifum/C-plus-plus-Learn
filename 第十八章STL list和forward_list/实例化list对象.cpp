#include <iostream>
#include <vector>
#include <list> 
using namespace std;

/*
要使用list类，必须包含头文件<list>
实例化语法：
std::list <int> listIntegers; 
std::list <float> listIntegers; 
std::list <Tuna> listIntegers;
声明一个指向list中元素的迭代器：
std::list<int>::const_iterator iElementInSet; 
如果需要一个这样的迭代器，即可以使用它来修改值或调用非const函数，可将
const_iterator替换为iterator 
*/
int main()
{
   list<int> listIntegers;//实例化一个空list
   
   list<int> listWith10Integers(10);//实例化10个元素的list
   
   list<int> listWith4IntegersEach99(10, 99);//实例化10个元素且每个值为99的list
   
   list<int> listCopyAnother(listWith4IntegersEach99);//复制一个已存在的list
   
   vector<int> vecIntegers(10, 2011);
   //用另一个容器的值来实例化一个list
   list<int> listContainsCopyOfAnother(vecIntegers.begin(), vecIntegers.end());
   //如果支持c++11，可用cbegin()和cend() 
   return 0;
}
