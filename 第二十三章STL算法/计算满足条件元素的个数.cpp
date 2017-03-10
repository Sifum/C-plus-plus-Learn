#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
std::count和count_if()计算给定范围的元素数；
count第三个参数为查找元素 
count_if第三个参数为一元谓词（可以是函数对象，也可以是lambda表达式）
返回匹配元素的个数 
*/
template <typename elementType>
bool IsEven(const elementType& number)
{
	return ((number % 2) == 0);
}
int main()
{
   vector <int> vecIntegers;

   cout << "Populating a vector<int> with values from -9 to 9" << endl;
   for(int nNum = -9; nNum < 10; ++nNum)
   	 vecIntegers.push_back(nNum);

   size_t nNumZeroes = count(vecIntegers.begin(), vecIntegers.end(), 0);
   cout << "Number of instance of '0' : " << nNumZeroes << endl << endl;

   size_t nNumEvenElements = count_if(vecIntegers.begin(), vecIntegers.end(), IsEven <int>);

   cout << "Number of even element: " << nNumEvenElements << endl;
   cout << "Number of odd elements: ";
   cout << vecIntegers.size() - nNumEvenElements << endl;

   return 0;
}
