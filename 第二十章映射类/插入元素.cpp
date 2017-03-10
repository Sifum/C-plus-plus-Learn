#include <iostream>
#include <map>
#include <string>
using namespace std;

/*

*/

typedef map<int, string> MAP_INT_STRING;
typedef multimap<int, string> MMAP_INT_STRING;

template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	  cout << iElement -> first << " -> " << iElement -> second << endl;
    cout << endl;
}
int main()
{
   MAP_INT_STRING mapIntToString;
   
   mapIntToString.insert(MAP_INT_STRING::value_type(3, "Three"));
   
   mapIntToString.insert(make_pair(-1, "Minus One"));
   
   mapIntToString.insert(pair<int, string>(1000, "One Thousand"));
   
   mapIntToString[1000000] = "One Million";
   
   cout << "The map contains " << mapIntToString.size();
   cout << " key-value pairs. They are: " << endl;
   DisplayContents(mapIntToString);
   
   MMAP_INT_STRING mmapIntToString(mapIntToString.cbegin(); mapIntToString.cend());
   
   mmapIntToString.insert(make_pair(1000, "Thousand"));
   
   cout << endl << "The multimap contains " << mmapIntToString.size();
   cout << " key-value pairs. They are: " << endl;
   cout << "The elements in the multimap are: " << endl;
   DisplayContents(mmapIntToString);
   
   cout << "The number of pairs in the multimap with 1000 as their key: " << mmapIntToString.count(1000) << endl;
   
   return 0;
}
