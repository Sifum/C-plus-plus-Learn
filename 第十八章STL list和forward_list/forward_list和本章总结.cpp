#include <iostream>
#include <vector>
#include <list> 
#include <string>
#include <forward_list> //c++11支持 
using namespace std;

/*
std::list双向链表
std::forward_list单向链表，即只允许沿一个方向遍历，必须包含头文件<forward_list> 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	   cout << *iElement << ' ';//C++11支持 
    cout << endl;
}
int main()
{
   forward_list<int> flistIntegers;
   flistIntegers.push_front(0);
   flistIntegers.push_front(2);
   flistIntegers.push_front(2);
   flistIntegers.push_front(4);
   flistIntegers.push_front(3);
   flistIntegers.push_front(1);
   
   cout << "Contents of forward_list: " << endl;
   DisplayContents(flistIntegers);
   
   flistIntegers.remove(2); //删除了值为2的所有元素 
   flistIntegers.sort();
   cout << "Contents after removing 2 and sorting: " << endl;
   DisplayContents(flistIntegers);
   
   return 0;
}
/*
1.如果需要频繁地插入或删除元素（尤其是在中间插入或删除时），应使用list
2.就像其他STL容器类一样，总是可以使用std::size()来确定list包含多少元素
3.像其他STL容器类一样，可使用方法list::clear()清空list
4.无需频繁在两端插入或删除元素，且不用在中间插入或删除元素，请不要使用
list，vector和deque的速度要快得多
*/
