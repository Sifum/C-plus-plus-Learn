#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <functional>
#include <string>
using namespace std;

/*
将元素插入到有序集合时，其将插入到正确位置。
auto iMaxInsertPos = upper_bound(listNames.begin(), listNames.end(), "Brad Pitt");
auto iMinInsertPos = lower_bound(listNames.begin(), listNames.end(), "Brad Pitt");
返回迭代器，分别指向在不破坏现有顺序的情况下，元素可插入到有序范围内的
最前位置和最后位置。 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
		cout << *iElement << endl;
}
int main()
{
   list<string> listNames;

   listNames.push_back("John Doe");
   listNames.push_back("Brad Pitt");
   listNames.push_back("Jack Nicholson");
   listNames.push_back("Sean Penn");
   listNames.push_back("Anna Hoover");
   
   cout << "The sorted contents of the list are: " << endl;
   listNames.sort();
   DisplayContents(listNames);

   cout << "The lowest index where Brad Pitt can be inserted is: " ;
   auto iMinInsertPos = lower_bound(listNames.begin(), listNames.end(), "Brad Pitt");

   cout << "The highest index where Brad Pitt can be inserted is: ";
   auto iMaxInsertPos = upper_bound(listNames.begin(), listNames.end(), "Brad Pitt");

   cout << distance(listNames.begin(), iMaxInsertPos) << endl;

   cout << endl;
   
   cout << "List after inserting brad pitt in sorted order: " << endl;
   listNames.insert(iMaxInsertPos, "Brad Pitt");

   DisplayContents(listNames);

   return 0;
}
