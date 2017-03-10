#include <iostream>
#include <vector>
#include <list> 
using namespace std;

/*
删除list中的元素：
一个接收一个迭代器参数并删除迭代器指向的元素；
另一个接收两个迭代器参数并删除指定范围内的所有元素 
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
   list <int> listIntegers;
   
   listIntegers.push_back(4);
   listIntegers.push_front(3);
   listIntegers.push_back(5);
   
   auto iValue2 = listIntegers.insert(listIntegers.begin(), 2);
   
   cout << "Initial contents of the list:" << endl;
   DisplayContents(listIntegers);
   
   listIntegers.erase(listIntegers.begin(), iValue2);
   cout << "Contents after erasing a range of elements:" << endl;
   DisplayContents(listIntegers);
   
   cout << "After erasing element " << *iValue2 << ":" << endl;
   listIntegers.erase(iValue2);
   DisplayContents(listIntegers);
   
   listIntegers.erase(listIntegers.begin(), listIntegers.end());
   cout << "Number of elements after erasing range: ";
   cout << listIntegers.size() << endl;

   return 0;
}
