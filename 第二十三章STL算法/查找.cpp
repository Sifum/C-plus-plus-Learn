#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
algorithm��ͨ�ú�����
STL�㷨�������ࣺ�Ǳ����㷨������㷨
���ı�������Ԫ�ص�˳������ݵ��㷨��Ϊ�Ǳ����㷨
�У�count,count_if,search,search_n,find,find_if,find_end,
find_first_of,adjacent_find
�ı�����������е�Ԫ��˳������ݵ��㷨��Ϊ�����㷨
��: fill,fill_n,generate,generate_n,for_each,transform,
copy,copy_backward,remove,remove_if,remove_copy,remove_copy_if,
unique,unique_copy,replace,replace_if,sort,stable_sort,partial_sort,
partial_sort_copy,partition,stable_partition,binary_search,
lower_bound,upper_bound 
*/
//ʹ��find()��vector�в���һ����������ʹ��find_if�Լ�һ��
//��lambda���ʽ��ʾһԪν�ʲ��ҵ�һ��ż��
//find()����������Ϊ����Ԫ�أ�find_if�����������ṩһ��һԪν�ʣ�����true��false��һԪ������ 
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
