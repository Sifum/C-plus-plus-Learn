#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

//使用二元函数将两个范围相乘 
template <typename elementType>
class Multiply
{
public:
   elementType operator()(const elementType& elem1, const elementType& elem2)
   {
   	  return (elem1 * elem2);
   }
};
int main()
{
   vector <int> vecMultiplicand, vecMultiplier;
   
   for(int nCount1 = 0; nCount1 < 10; ++nCount1)
      vecMultiplicand.push_back(nCount1);
   
   for(int nCount2 = 100; nCount2 < 110; ++nCount2)
      vecMultiplier.push_back(nCount2);
   
   vector <int> vecResult;
   
   vecResult.resize(10);
   transform(vecMultiplicand.begin(),vecMultiplicand.end(),vecMultiplier.begin(),vecResult.begin(),Multiply<int>());

   cout << "The contents of the first vector are: " << endl;
   for(size_t nIndex1 = 0; nIndex1 < vecMultiplier.size(); ++nIndex1)
   	   cout << vecMultiplier[nIndex1] << ' ';
   cout << endl << endl;

   cout << "The result of the multiplication is: " << endl;
   for(size_t nIndex = 0; nIndex < vecResult.size(); ++nIndex)
   	cout << vecResult[nIndex] << ' ';
   
   return 0;
}
