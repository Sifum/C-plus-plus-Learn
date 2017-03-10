#include <iostream>
#include <map>
#include <string>
using namespace std;

/*
map和multimap是键-值对容器，支持根据键进行查找，前者只能存储唯一
的键，后者能够存储重复的键；
实例化：
map<keyType, valueType, predicate=std::less <keyType> > mapObject;
multimap<keyType, valueType, predicate=std::less <keyType> > mmapObject;
第三个参数能省略如：
std::map<int, string> mapIntToString;
std::multimap<int, string> mmapIntToString; 
*/
template <typename KeyType>
struct ReverseSort
{
	bool operator()(const KeyType& key1, const KeyType& key2)
	{
		return (key1 > key2);
	}
};

int main()
{
   map<int, string> mapIntToString1;
   multimap<int, string> mmapIntToString1;
   
   map<int, string> mapIntToString2(mapIntToString1);  
   multimap<int, string> mmapIntToString2(mmapIntToString1);
   
   map<int, string> mapIntToString3(mapIntToString1.begin(), mapIntToString1.end());
   multimap<int, string> mmapIntToString3(mmapIntToString1.begin(), mmapIntToString1.end());
   //c++11支持的话，使用cbegin()和cend()
    
   map<int, string, ReverseSort<int> > mapIntToString4(mapIntToString1.begin(), mapIntToString1.end());
   multimap<int, string, ReverseSort<int> > mmapIntToString4(mapIntToString1.begin(), mapIntToString1.end());
   return 0;
}
