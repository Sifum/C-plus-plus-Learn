#include <iostream>
#include <vector>
#include <list> 
using namespace std;

/*
std::reverse();对元素倒序
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
   
   listIntegers.push_front(4);
   listIntegers.push_front(3);
   listIntegers.push_front(2);
   listIntegers.push_front(1);
   listIntegers.push_front(0);
   listIntegers.push_back(5);
   
   cout << "Initial contents of the list:" << endl;
   DisplayContents(listIntegers);
   
   listIntegers.reverse();
   
   cout << "Contents of the list after using reverse():" << endl;
   DisplayContents(listIntegers);

   return 0;
}
