#include <iostream>
#include <map>
#include <string>
using namespace std;

/*
map��multimap�Ǽ�-ֵ��������֧�ָ��ݼ����в��ң�ǰ��ֻ�ܴ洢Ψһ
�ļ��������ܹ��洢�ظ��ļ���
ʵ������
map<keyType, valueType, predicate=std::less <keyType> > mapObject;
multimap<keyType, valueType, predicate=std::less <keyType> > mmapObject;
������������ʡ���磺
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
   //c++11֧�ֵĻ���ʹ��cbegin()��cend()
    
   map<int, string, ReverseSort<int> > mapIntToString4(mapIntToString1.begin(), mapIntToString1.end());
   multimap<int, string, ReverseSort<int> > mmapIntToString4(mapIntToString1.begin(), mapIntToString1.end());
   return 0;
}
