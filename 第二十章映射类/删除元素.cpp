#include <iostream>
#include <map>
#include <string>
using namespace std;

/*

*/

template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	  cout << iElement -> first << " -> " << iElement -> second << endl;
    cout << endl;
}
int main()
{
   multimap <int, string> mmapIntToString;
   
   mmapIntToString.insert(make_pair(3, "Three"));
   mmapIntToString.insert(make_pair(45, "Forty Five"));
   mmapIntToString.insert(make_pair(-1, "Minus One"));
   mmapIntToString.insert(make_pair(1000, "Thousand"));
   
   mmapIntToString.insert(make_pair(-1, "Minus One"));
   mmapIntToString.insert(make_pair(1000, "Thousand"));
   
   cout << "The multimap contains " << mmapIntToString.size();
   cout << " key-value pairs. They are: " << endl;
   
   DisplayContents(mmapIntToString);
   
   auto NumPairsErased = mmapIntToString.erase(-1);
   cout << "Erase " << NumPairsErased << " pairs with -1 as key." << endl;
   
   auto iPairLocator = mmapIntToSting.find(Key);
   if(iPairLocator != mmapIntToString.end())
   {
   	 mmapIntToString.erase(iPairLocator);
   	 cout << "Erased a pair with 45 as key using an iterator" << endl;
   }
   
   cout << "Erasing the range of pairs with 1000 as key." << endl;
   mmapIntToString.erase(mmapIntToString.lower_bound(1000), mmapIntToString.upper_bound(1000));
   
   cout << "The multimap now contains " << mmapIntToString.size();
   cout << " key-value pair(s)." << "They are: " << endl;
   DisplayContents(mmapIntToString);
   
   return 0;
}
