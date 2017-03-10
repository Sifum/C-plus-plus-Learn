#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
algorithm：通用函数库
STL算法分两大类：非变序算法与变序算法
不改变容器中元素的顺序和内容的算法称为非变序算法
有：count,count_if,search,search_n,find,find_if,find_end,
find_first_of,adjacent_find
改变其操作的序列的元素顺序或内容的算法称为变序算法
有: fill,fill_n,generate,generate_n,for_each,transform,
copy,copy_backward,remove,remove_if,remove_copy,remove_copy_if,
unique,unique_copy,replace,replace_if,sort,stable_sort,partial_sort,
partial_sort_copy,partition,stable_partition,binary_search,
lower_bound,upper_bound 
*/
//使用find()在vector中查找一个整数，并使用find_if以及一个
//用lambda表达式表示一元谓词查找第一个偶数
//find()第三个参数为查找元素，find_if第三个参数提供一个一元谓词（返回true或false的一元函数） 
int main()
{
   vector <int> vecIntegers;
   
   for(int SampleValue = -9; SampleValue < 10; ++SampleValue)
      vecIntegers.push_back(SampleValue);
   
   cout << "Enter number to find in collection: ";
   int NumToFind = 0;
   cin >> NumToFind;
   
   auto iElementFound = find(vecIntegers.cbegin(), vecIntegers.cend(), NumToFind);
   
   if(iElementFound != vecIntegers.cend())
      cout << "Result: Value " << *iElementFound << " Found!" << endl;
   else
      cout << "Result: No element contains value " << NumToFind << endl;
   
   auto iEvenNumber = find_if(vecIntegers.cbegin(), vecIntegers.cend(), [](int element){return(element % 2) == 0;});
   
   if(iEvenNumber != vecIntegers.cend())
   {
     cout << "Number " << *iEvenNumber << " found at position [" ;
	 cout << distance(vecIntegers.cbegin(), iEvenNumber);
	 cout << "]" << endl;
   }

   return 0;
}
