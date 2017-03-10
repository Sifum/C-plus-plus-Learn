#include <iostream>
#include <vector>
#include <list> 
using namespace std;

/*
对元素进行排序 
*/
bool SortPredicate_Descending(const int& lsh, const int& rsh)
{
	return (lsh > rsh);
}
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
   
   listIntegers.push_front(444);
   listIntegers.push_front(2011);
   listIntegers.push_front(-1);
   listIntegers.push_front(0);
   listIntegers.push_back(-5);
   
   cout << "Initial contents of the list:" << endl;
   DisplayContents(listIntegers);
   
   listIntegers.sort();
   
   cout << "Order of elements after sort():" << endl;
   DisplayContents(listIntegers);
   
   listIntegers.sort(SortPredicate_Descending);
   cout << "Order of elements after sort() with a predicate:" << endl;
   DisplayContents(listIntegers);

   return 0;
}
