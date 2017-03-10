#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <functional>
#include <string>
using namespace std;

/*
ÅÅÐò£º
sort(vecIntegers.begin(), vecIntegers.end(), [](int ihs, int rsh){return (ihs > rhs);}); 
É¾³ý£º
vecIntegers.erase(iNewEnd, vecIntegers.end()); 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(), iElement != Input.cend(), ++iElement)
		cout << *iElement << endl;
}
int main()
{
   vector<string> vecNames;
   vecNames.push_back("John Doe");
   vecNames.push_back("Jack Nicholson");
   vecNames.push_back("Sean Penn");
   vecNames.push_back("Anna Hoover");
   vecNames.push_back("Jack Nicholson");

   cout << "The initial contents of the vector are: " << endl;
   DisplayContents(vecNames);

   cout << "The sorted vector contains names in the order: " << endl;
   sort(vecNames.begin(), vecNames.end());
   DisplayContents(vecNames);

   cout << "Search for John Doe using binary_search: " << endl;
   bool bElementFound = binary_search(vecNames.begin(), vecNames.end(), "John Doe");
   
   if(bElementFound)
   	  cout << "Result: John Doe was found in the vector!" << endl;
   else
   	  cout << "Element not found " << endl;

   auto iNewEnd = unique(vecNames.begin(), vecNames.end());
   vecNames.erase(iNewEnd, vecNames.end());

   cout << "The contents of the vector after using unique: " << endl;
   DisplayContents(vecNames);

   return 0;
}
