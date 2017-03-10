#include <iostream>
#include <unordered_set>
#include <set> 
#include <string>
using namespace std;

/*
STL set或multiset在插入元素时有额外开销，如果应用将频繁地使用
find()等函数，则这种开销是值得的

std::unordered_set就是散列的set，需要包含头文件<unordered_set>
std::unordered_multiset需要包含头文件<unordered_multiset>

用法：
unordered_set<int> usetInt;
usetInt.insert(1000); 

auto iPairThousand = usetInt.find(1000);
if(iPairThousand != usetInt.end())
  cout << *iPairThousand << endl;
  
散列函数：
unordered_set <int>::hasher HFn = usetInt.hash_function(); 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	cout << "Number of elements, size() = " << Input.size() << endl;
	cout << "Max bucket count = " << Input.max_bucket_count() << endl;
	cout << "Load factor: " << Input.load_factor() << endl;
	cout << "Max load factor = " << Input.max_load_factor() << endl;
	cout << "Unordered set contains: " << endl;
	
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	   cout << *iElement << ' ';
    cout << endl;
}
int main()
{
   unordered_set<int> usetInt;
   
   usetInt.insert(1000);
   usetInt.insert(-3);
   usetInt.insert(2011);
   usetInt.insert(300);
   usetInt.insert(-1000);
   usetInt.insert(989);
   usetInt.insert(-300);
   usetInt.insert(111);
   DisplayContents(usetInt);
   usetInt.insert(999);
   DisplayContents(usetInt);
   
   cout << "Enter int you want to check for existence in set: ";
   int Key = 0;
   cin >> Key;
   auto iPairThousand = usetInt.find(Key);
   
   if(iPairThousand != usetInt.end())
       cout << *iPairThousand << " found in set" << endl;
   else
      cout << Key << " not available in set" << endl;
    
   return 0;
}
/*
1.在需要频繁插入而很少查找的情形下，不要使用std::set或std::multiset
在这种情形下，std::vector和std::list通常更合适
2.使用multiset::count(value)确定有多少个元素包含特定的值；
set:size()和multiset::size()指出容器包含多少个元素 
*/
