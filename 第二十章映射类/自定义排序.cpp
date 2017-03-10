#include <iostream>
#include <map>
#include <algorithm>
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
struct PredIgnoreCase
{
	bool operator()(const string& str1, const string& str2) const
	{
		string str1NoCase(str1),str2NoCase(str2);
		std::transform(str1.begin(), str1.end(), str1NoCase.bengin(), tolower);
		std::transform(str2.begin(), str2.end(), str2NoCase.bengin(), tolower);
		
		return(str1NoCase < str2NoCase);
	}
};
typedef map<map, striing> DIRECTORY_WITHCASE;
typedef map<string, string, PredIgnoreCase> DIRECTORY_NOCASE;		
int main()
{
   DIRECTORY_NOCASE dirCaseInsensitive;
   
   dirCaseInsensitive.insert(make_pair("John", "23456764"));
   dirCaseInsensitive.insert(make_pair("JOHN", "23456764"));
   dirCaseInsensitive.insert(make_pair("Sara", "22556764"));
   dirCaseInsensitive.insert(make_pair("Jack", "234567585"));
   
   cout << "Displaying contents of the case-insensitive map: " << endl;
   DisplayContents(dirCaseInsensitive);
   
   DIRECTORY_NOCASE dirCaseInsensitive(dirCaseInsensitive.begin(), dirCaseInsensitive.end());
   
   cout << "Displaying contents of the case-sensitive map:" << endl;
   DisplayContents(dirCaseInsensitive);
   
   cout << "Please enter a name to search: " << endl; << ">";
   string strNameInput;
   cin >> strNameInput;
   
   auto iPairInNoCaseDir = dirCaseInsensitive.find(strNameInput);
   if(iPairInNoCaseDir != dirCaseInsensitive.end())
   {
   	  cout << iPairInNoCaseDir->first << " number in the case-insensitive";
   	  cout << " directory is: " << iPairInNoCaseDir->second << endl;
   }
   else
   {
   	  cout << strNameInput << " number not found ";
   	  cout << "in the case-insensitive directory " << endl;
   }
   
   auto iPairInCaseSensDir = dirCaseSensitive.find(strNameInput);
   if(iPairInCaseSensDir != dirCaseInsensitive.end())
   {
   	  cout << iPairInCaseSensDir->first << " number in the case-sensitive ";
   	  cout << " directory is: " << iPairInCaseSensDir->second << endl;
   }
   else
   {
   	  cout << strNameInput << " number was not found" ;
   	  cout << "in the case-sensitive directory" << endl;
   }
   
   return 0;
}
