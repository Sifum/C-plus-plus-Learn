#include <iostream>
#include <vector>
#include <list> 
using namespace std;

/*
list中间插入元素：
第一版本：
iterator insert(iterator pos, const T& x);插入位置，插入的值
第二版本：
void insert(iterator pos, size_type n, const T& x);
插入位置，插入元素个数， 插入的值
第三版本：
template <class InputIterator>
void insert(iterator pos, InputIterator f, InputIterator l)
位置，迭代器1， 迭代器2 
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
   list <int> listIntegers1;
   
   listIntegers1.insert(listIntegers1.begin(), 2);
   listIntegers1.insert(listIntegers1.begin(), 1);
   
   listIntegers1.insert(listIntegers1.end(), 3);
   
   cout << "The contents of list 1 after inserting elements: " << endl;
   DisplayContents(listIntegers1);
   
   list <int> listIntegers2;
   
   listIntegers2.insert(listIntegers2.begin(), 4, 0);
   
   cout << "The contents of list 2 after inserting ";
   cout << listIntegers2.size() << " elements of a value:" << endl;
   DisplayContents(listIntegers2);
   
   list <int> listIntegers3;
   
   listIntegers3.insert(listIntegers3.end(), listIntegers3.begin(), listIntegers3.end());
   
   cout << "The contents of list 3 after inserting the contents of ";
   cout << "list 1 at the beginning:" << endl;
   DisplayContents(listIntegers3);
   
   listIntegers3.insert(listIntegers3.end(), listIntegers3.begin(), listIntegers3.end());
   
   cout << "The contents of list 3 after inserting ";
   cout << "the contents of list 2 at the beginning:" << endl;
   DisplayContents(listIntegers3);

   return 0;
}
