#include <iostream>
#include <set> 
using namespace std;

/*
删除STL set或multiset中的元素
setObject.erase(key);根据键删除值 
setObject.erase(iElement);接受一个迭代器作为参数
setObject.erase(iLowerBound, iUpperBound); 指定边界 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	   cout << *iElement << ' ';
    cout << endl;
}
typedef multiset <int> MSETINT;
int main()
{
   MSETINT msetIntegers;
   
   msetIntegers.insert(43);
   msetIntegers.insert(78);
   msetIntegers.insert(78);
   msetIntegers.insert(-1);
   msetIntegers.insert(124);
   
   cout << "multiset contains " << msetIntegers.size() << " elements.";
   cout << " These are: " << endl;
   
   DisplayContents(msetIntegers);
   
   cout << "Please enter a number to be erased from the set" << endl;
   int nNumberToErase = 0;
   cin >> nNumberToErase;
   
   msetIntegers.erase(nNumberToErase);
   
   cout << "multiset contains " << msetIntegers.size() << " elements.";
   cout << " These are: " << endl;
   DisplayContents(msetIntegers);
    
   return 0;
}
