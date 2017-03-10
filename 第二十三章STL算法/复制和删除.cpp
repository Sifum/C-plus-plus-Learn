#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <functional>
#include <string>
using namespace std;

/*
复制函数：
copy() 沿向前的方向将源范围的内容赋给目标范围 
copy_if() 仅在指定的一元谓词返回true时才复制元素 
copy_backward() 沿向后的方向将源范围的内容赋给目标范围
删除：
remove() 将容器中与指定值匹配的元素删除
remove_if 使用一个一元谓词，并将容器中满足该谓词的元素删除  
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
