#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
һԪν�ʣ��ж�һ�������Ƿ�Ϊ��һ�������������� 
*/
template <typename numberType>
struct IsMultiple
{
	numberType Divisor;
	
	IsMultiple(const numberType& divisor)
	{
		Divisor = divisor;
	}
	
	bool operator() (const numberType& element) const //���캯�� 
	{
		return ((element % Divisor) == 0);
	}
};
int main()
{
   vector <int> vecIntegers;
   cout << "The vector contais the following sample values: ";
   
   for(int nCount = 25; nCount < 32; ++nCount)
   {
   	  vecIntegers.push_back(nCount);
   	  cout << nCount << ' ';
   }
   cout << endl << "Enter divisor( > 0): ";
   int Divisor =  2;
   cin >> Divisor;
   
   auto iElement = find_if(vecIntegers.begin(), vecIntegers.end(), IsMultiple<int>(Divisor));
   //֧��c++11����֧����Ҫ��auto����int* 
   if(iElement != vecIntegers.end())
   {
   	 cout << "First element in vector divisible by " << Divisor ; 
   	 cout << ": " << *iElement << endl;
   }
   
   return 0;
}
