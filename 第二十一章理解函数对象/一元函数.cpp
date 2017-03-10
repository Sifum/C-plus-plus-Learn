#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
for_each����������������Χ��㣬��Χ�յ㣬��ָ����Χ�ڵ�ÿ��Ԫ�ص��ú���
C++11����lambda���ʽ����������������
�磺
for_each(vecIntegers.begin(), becIntegers.end(), [](int& Element){cout << element << ' ';}) 
*/
template <typename elementType>
struct DisplayElement
{
  void operator() (const elementType& element) const
  {
    cout << element << ' ';
  }
};
int main()
{
   vector<int> vecIntegers;
   
   for(int nCount = 0; nCount < 10; ++nCount)
       vecIntegers.push_back(nCount);
   
   list <char> listChars;
   
   for(char nChar = 'a'; nChar < 'k'; ++nChar)
       listChars.push_back(nChar);
   
   cout << "Displaying the vector of integers: " << endl;
   
   for_each(vecIntegers.begin(), vecIntegers.end(), DisplayElement <int> ());
   
   cout << endl << endl;
   
   cout << "Displaying the list of characters: " << endl;
   
   for_each(listChars.begin(), listChars.end(), DisplayElement<char>());
   
   return 0;
}
/*
�������������������Ķ��󣬺���������ʵ����operator()����Ķ��� 
һԪ����������һ�������ĺ�������f(x)�����һԪ��������һ������ֵ����ƺ���Ϊν�ʣ�
��Ԫ�������������������ĺ�������f(x,y)�������Ԫ��������һ������ֵ����ƺ���Ϊ��Ԫν��
*/
