#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

//对字符串进行不区分大小写排序的二元谓词 
class CompareStringNoCase
{
public:
	bool operator()(const string& str1, const string& str2) const
	{
		string str1LowerCase;
		str1LowerCase.resize(str1.size());
		transform(str1.begin(),str1.end(),str1LowerCase.begin(),tolower);

		string str2LowerCase;
		str2LowerCase.resize(str2.size());
		transform(str2.begin(),str2.end(),str2LowerCase.begin(),tolower);

		return (str2LowerCase < str2LowerCase);
	}
};
int main()
{
   
   
   return 0;
}
