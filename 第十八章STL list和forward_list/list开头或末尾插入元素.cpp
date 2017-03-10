#include <iostream>
#include <vector>
#include <list> 
using namespace std;

/*
list开头插入元素：listIntegers.push_back(-1);
list末尾插入：listIntegers.push_front(2001); 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	   cout << *iElement << ' ';//c++11支持
    cout << endl;
}
int main()
{
   list<int> listIntegers;
   
   listIntegers.push_front(10);
   listIntegers.push_front(2011);
   listIntegers.push_back(-1);
   listIntegers.push_back(9999);
   
   DisplayContents(listIntegers);

   return 0;
}
