#include <iostream>
#include <vector>
#include <list> 
using namespace std;

/*
list��ͷ����Ԫ�أ�listIntegers.push_back(-1);
listĩβ���룺listIntegers.push_front(2001); 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	   cout << *iElement << ' ';//c++11֧��
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
