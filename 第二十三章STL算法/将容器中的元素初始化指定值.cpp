#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
fill和fill_n()用于将指定范围的内容设置为指定值；
fill()将指定范围内的元素设置为指定值：
vector <int> vecIntegers(3);
fill(vecIntegers.begin(), vecIntegers.end(), 9);
fill_n将n个元素设置为指定的值，接收的参数包括起始位置,元素数以及要设置的值
fill_n(vecIntegers.begin()+3, /*count*/ 3 , /*fill value*/ -9); 
*/

int main()
{
   vector <int> vecIntegers(3);
   
   fill(vecIntegers.begin(), vecIntegers.end(), 9);
   
   vecIntegers.resize(6);
   
   fill_n(vecIntegers.begin()+3, 3, -9);
   cout << "Contents of the vector are: " << endl;
   for(size_t nIndex = 0; nIndex < vecIntegers.size(); ++nIndex)
   {
   	 cout << "Element [" << nIndex << " ]= ";
   	 cout << vecIntegers[nIndex] << endl;
   }
   
   return 0;
}
