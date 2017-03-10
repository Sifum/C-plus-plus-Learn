#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <functional>
#include <string>
using namespace std;

/*
将范围分区：
partition()将输入范围分为两个部分：一部分满足一元谓词；另一部分不满足。
*/
bool IsEven(const int& nNumber)
{
	return ((nNumber % 2) == 0);
}
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
		cout << *iElement << ' ';

	cout << "Number of element: " << Input.size() << endl;
}
int main()
{
   vector <int> vecIntegers;

   for(int nNum = 0; nNum < 10; ++nNum)
   	 vecIntegers.push_back(nNum);

   cout << "The initial contents: " << endl;
   DisplayContents(vecIntegers);

   vector <int> vecCopy(vecIntegers);

   cout << "The effect of using partition(): " << endl;
   partition(vecIntegers.begin(), vecIntegers.end(), IsEven);
   DisplayContents(vecIntegers);

   cout << "The effect of using stable_partition(): " << endl;
   stable_partition(vecCopy.begin(), vecCopy.end(), IsEven);
   DisplayContents(vecCopy);

   return 0;
}
