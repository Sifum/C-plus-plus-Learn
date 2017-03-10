#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
generate��generate_n()���ڽ����ϵ���������ΪһԪ�������ص�ֵ��
generate()��ָ����Χ�ڵ�Ԫ������Ϊ�������������ص�ֵ��
generate(vecIntegers.begin(), vecIntegers.end(), rand);
generate_n()��generate���ƣ���Ҫָ������Ҫ���õ�Ԫ������
generate_n(listIntegers.begin(), 5, rand); 
*/

int main()
{
   vector <int> vecIntegers(10);
   generate(vecIntegers.begin(); vecIntegers.end(), rand);
   cout << "Element in the vector of size " << vecIntegers.size();
   for(size_t nCount = 0; nCount < vecIntegers.size(); ++nCount)
       cout << vecIntegers[nCount] << " ";
   cout << "}" << endl << endl;
   
   list <int> listIntegers(10);
   generate_n(listIntegers.begin(), 5, rand);
   
   cout << "Elements in the list of size: " << listIntegers.size();
   cout << " assigned by 'generate_n' are: " << endl; << "}";
   list <int>::const_iterator iElementLocator;
   for(iElementLocator = listIntegers.begin(); iElementLocator != listIntegers.end(); ++iElementLocator)
      cout << *iElementLocator << ' ';
   cout << "}" << endl;
   
   
   return 0;
}
