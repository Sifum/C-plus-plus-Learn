#include <iostream>
#include <set> 
using namespace std;

/*
容器set和容器multiset能够快速查找键，键是存储在一维容器中的值，
set和multiset之间的区别在于，前者只能存储唯一的值，后者可存储重复的值 
实例化：
std::set <int> setIntegers;
std::multiset <int> msetIntegers;

std::set <Tuna> setIntegers;
std::multiset <Tuna> msetIntegers;

迭代器：
std::set<int>::const_iterator iElementInSet;
std:multiset<int>::const_iterator iElementInMultiset;
需要一个可用于修改值或调用非const函数的迭代器，应将const_iterator替换为iterator 
*/
template <typename T>
struct SortDescending
{
	bool operator()(const T& lhs, const T& rhs)const  //定义二元排序谓词
	{
		return (lhs > rhs);
	}
};
int main()
{
   set<int> setIntegers1;
   multiset <int> msetIntegers1;
   
   set<int, SortDescending<int> > setIntegers2;//必须要空格 
   multiset<int, SortDescending<int> > msetIntegers2; //实例化set或multiset时指定排序谓词
   
   set<int> setIntegers3(setIntegers1);
   multiset<int> msetIntegers3(setIntegers1.cbegin(), setIntegers1.cend()); 
   //c++11支持 
   return 0;
}
