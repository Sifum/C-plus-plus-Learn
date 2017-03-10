#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
使用函数对象存储状态
 
*/
template <typename elementType>
struct DisplayElementKeepCount
{
	int Count;
	
	DisplayElementKeepCount():Count(0){};
	
	void operator()(const elementType& element)
	{
        ++Count;
        cout << element << ' ';
	}
};
int main()
{
   vector <int> vecIntegers;
   for(int nCount = 0; nCount < 10; ++nCount)
      vecIntegers.push_back(nCount);
   cout << "Displaing the vector of integers: " << endl;
   
   DisplayElementKeepCount<int> Result;
   Result = for_each(vecIntegers.begin(), vecIntegers.end(), DisplayElementKeepCount<int>());
   //函数对象 
   cout << endl << endl;
   
   cout << Result.Count << "elements were displayed! " << endl; 
   
   return 0;
}
