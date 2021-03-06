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
   map <int, string> mapIntToString;
   
   mapIntToString.insert(make_pair(3, "Three"));
   mapIntToString.insert(make_pair(45, "Forty Five"));
   mapIntToString.insert(make_pair(-1, "Minus One"));
   mapIntToString.insert(make_pair(1000, "Thousand"));
   
   cout << "The multimap contains " << mapIntToString.size();
   cout << " key-value pairs. They are: " << endl;
   
   DisplayContents(mapIntToString);
   
   cout << "Enter the key you wish to find: ";
   int Key = 0;
   cin >> Key;
   
   auto iPairFound = mapIntToSting.find(Key);
   if(iPairFound != mapIntToString.end())
   {
   	 cout << "Key " << iPairFound -> first << " points to Value: ";
   	 cout << iPairFound -> second << endl;
   }
   else
     cout << "Sorry, pair with key " << Key << " not in map" << endl;
   
   return 0;
}
