#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
for_each用法：
对范围内的每个元素应用了指定的一元函数对象，也可接收一个参数的lambda表达式。 
unaryFunctionObjectType mReturn = for_each(start_of_range,end_of_range,unaryFunctionObject); 
*/
template <typename elementType>
struct DisplayElementKeepCount
{
	int Count;

	DisplayElementKeepCount():Count(0){}

	void operator()(const elementType& element)
	{
		++ Count;
		cout << element << ' ';
	}
};

int main()
{
   vector <int> vecIntegers;
   for(int nCount = 0; nCount < 10; ++nCount)
   	   vecIntegers.push_back(nCount);

   cout << "Displaying the vector of integers:  " << endl;

   DisplayElementKeepCount<int> Functor = 
       for_each(vecIntegers.begin(), vecIntegers.end(), DisplayElementKeepCount<int> ());
   cout << endl;

   cout << Functor.Count << " elements were displayed" << endl;
   
   string Sample("for_each and strings!");
   cout << "string: " << Sample << ", length: " << Sample.length() << endl;

   cout << "String displayed using lambda: " << endl;
   int NumChars = 0;
   //for_each(Sample.begin(), Sample.end(), [&NumChars](char c){cout << c << ' '; ++NumChars;});
   //c++11
   
   cout << endl;
   cout << NumChars << " characters were displayed" << endl;
   
   return 0;
}
