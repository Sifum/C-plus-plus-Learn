#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
search()用于在一个序列中查找另一个序列
search_n()用于在容器中查找n个相邻的指定值； 
*/
template <typename T>
void DisplayContens(const T& Input)
{
	for(auto iElement = Input.cbegin(), iElement != Input.cend(), ++iElement)
	    cout << *iElement << ' ';
    cout << endl;
}
int main()
{
   vector <int> vecIntegers;
   for(int nNum = -9; nNum < 10; ++nNum)
   	 vecIntegers.push_back(nNum);

   vecIntegers.push_back(9);
   vecIntegers.push_back(9);

   list <int> listIntegers;
   for(int nNum = -4; nNum < 5; ++nNum)
   	 listIntegers.push_back(nNum);

   cout << "The contents of the sample vector are: " << endl;
   DisplayContens(vecIntegers);

   cout << "The contents of the sample list are: " << endl;
   DisplayContens(listIntegers);

   cout << "search() for the contents of list in vector: " << endl;
   auto iRange = search(vecIntegers.begin(), vecIntegers.end(), listIntegers.begin(), listIntegers.end());

   if(iRange != vecIntegers.end())
   {
   	 cout << "Sequence in list found in vector at position:" ;
   	 cout << distance(vecIntegers.begin(), iRange) << endl;
   }

   cout << "Search {9,9,9} in vector using search_n(): " << endl;
   auto iPartialRange = search_n(vecIntegers.begin(), vecIntegers.end(), 3, 9);

   if(iPartialRange != vecIntegers.end())
   {
   	  cout << "Sequence{9,9,9} found in vector at position: ";
   	  cout << distance(vecIntegers.begin(), iPartialRange) << endl;
   }

   return 0;
}
