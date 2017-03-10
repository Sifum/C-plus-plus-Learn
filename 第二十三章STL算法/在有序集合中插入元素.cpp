#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <functional>
#include <string>
using namespace std;

/*
��Ԫ�ز��뵽���򼯺�ʱ���佫���뵽��ȷλ�á�
auto iMaxInsertPos = upper_bound(listNames.begin(), listNames.end(), "Brad Pitt");
auto iMinInsertPos = lower_bound(listNames.begin(), listNames.end(), "Brad Pitt");
���ص��������ֱ�ָ���ڲ��ƻ�����˳�������£�Ԫ�ؿɲ��뵽����Χ�ڵ�
��ǰλ�ú����λ�á� 
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
