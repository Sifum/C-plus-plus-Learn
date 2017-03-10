#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
fill��fill_n()���ڽ�ָ����Χ����������Ϊָ��ֵ��
fill()��ָ����Χ�ڵ�Ԫ������Ϊָ��ֵ��
vector <int> vecIntegers(3);
fill(vecIntegers.begin(), vecIntegers.end(), 9);
fill_n��n��Ԫ������Ϊָ����ֵ�����յĲ���������ʼλ��,Ԫ�����Լ�Ҫ���õ�ֵ
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
