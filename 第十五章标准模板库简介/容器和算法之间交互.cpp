#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h> 
#include <string>
using namespace std;

//使用迭代器在容器和算法之间交互 
int main()
{
   vector <int> vecIntegerArray; //容器 
   vecIntegerArray.push_back(50);
   vecIntegerArray.push_back(2991);
   vecIntegerArray.push_back(23);
   vecIntegerArray.push_back(9999);
   
   cout << "The contents of the vector are: " << endl;
   
   vector <int> ::iterator iArrayWalker = vecIntegerArray.begin();
   
   while(iArrayWalker != vecIntegerArray.end())
   {
   	  cout << *iArrayWalker << endl;
      ++ iArrayWalker;
   }
   
   vector <int>::iterator iElement = find(vecIntegerArray.begin(),vecIntegerArray.end(),2991);
   
   if(iElement != vecIntegerArray.end())
   {
   	 int Position = distance(vecIntegerArray.begin(), iElement);//算法 
   	 cout << "Value " << *iElement;
   	 cout << " found in the vector at position: " << Position << endl;
   }
   
   return 0;
}
/*
STL顺序容器包括：
std::vector 操作与动态数组一样，在最后插入数据 
std::deque  与vector类似，允许在开头插入或删除元素 
std::list  与双向链表一样，可在任何位置添加或删除对象 
std::forward_list  单向链表，只能沿一个方向遍历 

STL关联容器包括：
std::set 存储不同的值，在插入时进行排序，容器的复杂度为对数
std::unordered_set 存储不同的值，在插入时进行排序，复杂度为常数
std::map 存储键-值对，并根据唯一的键排序，复杂度为对数
std::unordered_map  存储键-值对，并根据唯一的键排序，复杂度为对数，c++11新增
std::multiset 与set相似，但允许存储多个值相同的项，即值不需要是唯一的
std::unordered_multiset 与unordered_set相似，但允许存储多个值相同的项，即值不需要是唯一的，c++11新增 
std::multimap 与map类似，但不要求键是唯一的
std::unordered_multimap 与unordered_map类似，但不要求键是唯一的。c++11新增 

容器适配器：是顺序容器和关联容器的变种，用于满足特定的需求
std::stack 以LIFO的方法存储元素 
std::queue 以FIFO的方式存储元素 
std::priority_queue  以特定顺序存储元素，因为优先级最高的元素总是位于队列开头 
 
STL算法：
std::find 在集合中查找值 
std::find_if  根据用户指定的谓词在集合中查找值 
std::reverse  反转集合中元素的排列顺序 
std::remove_if 根据用户定义的谓词将元素从集合中删除 
std::transform  使用用户定义的变换函数对容器中的元素进行转换

迭代器：
最简单的迭代器是指针；
STL中的迭代器是模板类，这种模板类能够对STL容器进行操作
分为两大类：输入迭代器，输出迭代器
进一步分为三类：前向迭代器，双向迭代器，随机访问迭代器 
*/
