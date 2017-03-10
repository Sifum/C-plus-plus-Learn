#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;

/*
deque是一个动态数组类，与vector类似，支持在数组开头和结尾插入或删除元素
deque <int> dpIntegers; 需要包含头文件<deque> 
vector:push_back,pop_back
deque还有push_front,pop_front 
*/
int main()
{
   deque <int> dpIntegers;
   dpIntegers.push_back(3);
   dpIntegers.push_back(4);
   dpIntegers.push_back(5);
   
   dpIntegers.push_front(2);
   dpIntegers.push_front(1);
   dpIntegers.push_front(0);
   
   cout << "The contents of the deque after inserting elements ";
   cout << "at the top and bottom are: " << endl;
   
   for(size_t nCount = 0; nCount < dpIntegers.size(); ++nCount)
   {
   	 cout << "Element [" << nCount << "] = ";
   	 cout << dpIntegers[nCount] << endl;
   }
   cout << endl;
   
   dpIntegers.pop_front();
   dpIntegers.pop_back();
   
   cout << "The contents of the deque after erasing an element ";
   cout << "form the top and bottom are: " << endl;
   
   for(auto iElementLocator = dpIntegers.begin(); iElementLocator != dpIntegers.end(); ++iElementLocator)
   {
   	 size_t Offset = distance(dpIntegers.begin(), iElementLocator);
   	 cout << "Element [" << Offset << "] = " << *iElementLocator << endl;
   }
   
   return 0;
}
/*
在不知道需要存储多少个元素时，务必使用动态数组vector或deque;
vector一端扩容，deque可在两端扩容； 
*/
