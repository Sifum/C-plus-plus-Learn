#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <functional>
#include <string>
using namespace std;

/*
���ƺ�����
copy() ����ǰ�ķ���Դ��Χ�����ݸ���Ŀ�귶Χ 
copy_if() ����ָ����һԪν�ʷ���trueʱ�Ÿ���Ԫ�� 
copy_backward() �����ķ���Դ��Χ�����ݸ���Ŀ�귶Χ
ɾ����
remove() ����������ָ��ֵƥ���Ԫ��ɾ��
remove_if ʹ��һ��һԪν�ʣ����������������ν�ʵ�Ԫ��ɾ��  
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
		cout << *iElement << ' ';
    cout << " | numbers of elements: " << Input.size() << endl;
}
int main()
{
   list <int> listIntegers;
   for(int nCount = 0; nCount < 10; ++nCount)
   	 listIntegers.push_back(nCount);

   cout << "Source(list) contains: " << endl;
   DisplayContents(listIntegers);

   vector <int> vecIntegers(listIntegers.size()*2);

   auto iLastPos = copy(listIntegers.begin(), listIntegers.end(), vecIntegers.begin());

   copy_if(listIntegers.begin(), listIntegers.end(), iLastPos, [](int element){return ((element % 2 ) == 1);});

   cout << "Destination (vector) after copy and copy_if: " << endl;
   DisplayContents(vecIntegers);

   auto iNewEnd = remove(vecIntegers.begin(), vecIntegers.end(), 0);
   vecIntegers.erase(iNewEnd, vecIntegers.end());

   iNewEnd = remove_if(vecIntegers.begin(), vecIntegers.end(), [](int element){return ((element % 2 ) == 1);});
   
   vecIntegers.erase(iNewEnd, vecIntegers.end());

   cout << "Destination (vector) after remove,remove_if,erase : " << endl;
   DisplayContents(vecIntegers);

   return 0;
}
