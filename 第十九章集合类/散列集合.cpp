#include <iostream>
#include <unordered_set>
#include <set> 
#include <string>
using namespace std;

/*
STL set��multiset�ڲ���Ԫ��ʱ�ж��⿪�������Ӧ�ý�Ƶ����ʹ��
find()�Ⱥ����������ֿ�����ֵ�õ�

std::unordered_set����ɢ�е�set����Ҫ����ͷ�ļ�<unordered_set>
std::unordered_multiset��Ҫ����ͷ�ļ�<unordered_multiset>

�÷���
unordered_set<int> usetInt;
usetInt.insert(1000); 

auto iPairThousand = usetInt.find(1000);
if(iPairThousand != usetInt.end())
  cout << *iPairThousand << endl;
  
ɢ�к�����
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
1.����ҪƵ����������ٲ��ҵ������£���Ҫʹ��std::set��std::multiset
�����������£�std::vector��std::listͨ��������
2.ʹ��multiset::count(value)ȷ���ж��ٸ�Ԫ�ذ����ض���ֵ��
set:size()��multiset::size()ָ�������������ٸ�Ԫ�� 
*/
