#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
二元谓词对应的lambda表达式
返回true或false，可帮助决策的二元函数被称为二元谓词
这种谓词可用于std::sort等排序算法中，这些算法对容器中的两个
值调用二元谓词，以确定将哪个放在前面。 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
		cout << *iElement << endl;
}
int main()
{
   vector <string> vecNames;

   vecNames.push_back("jim");
   vecNames.push_back("Jack");
   vecNames.push_back("Sam");
   vecNames.push_back("Anna");

   cout << "The names in vector in order of insertion: " << endl;
   DisplayContents(vecNames);

   cout << "Names after sorting using default std::less<>: " << endl;
   sort(vecNames.begin(), vecNames.end());
   DisplayContents(vecNames);

   cout << "Names after sorting using predicate that ignores case: " << endl;
   sort(vecNames.begin(), vecNames.end(), [](const string& str1, const string& str2) -> bool
   {
   	string str1LowerCase;
   	str1LowerCase.resize(str1.size());
   	transform(str1.begin(), str1.end(), str1LowerCase.begin(), tolower);

   	string str2LowerCase;
   	str2LowerCase.resize(str2.size());
   	transform(str2.begin(), str2.end(), str2LowerCase.begin(), tolower);

   	return (str1LowerCase < str2LowerCase);
   }
   );
   DisplayContents(vecNames);

   return 0;
}
