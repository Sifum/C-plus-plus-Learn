#include <iostream>
#include <vector>
#include <list> 
using namespace std;

/*
Ҫʹ��list�࣬�������ͷ�ļ�<list>
ʵ�����﷨��
std::list <int> listIntegers; 
std::list <float> listIntegers; 
std::list <Tuna> listIntegers;
����һ��ָ��list��Ԫ�صĵ�������
std::list<int>::const_iterator iElementInSet; 
�����Ҫһ�������ĵ�������������ʹ�������޸�ֵ����÷�const�������ɽ�
const_iterator�滻Ϊiterator 
*/
int main()
{
   list<int> listIntegers;//ʵ����һ����list
   
   list<int> listWith10Integers(10);//ʵ����10��Ԫ�ص�list
   
   list<int> listWith4IntegersEach99(10, 99);//ʵ����10��Ԫ����ÿ��ֵΪ99��list
   
   list<int> listCopyAnother(listWith4IntegersEach99);//����һ���Ѵ��ڵ�list
   
   vector<int> vecIntegers(10, 2011);
   //����һ��������ֵ��ʵ����һ��list
   list<int> listContainsCopyOfAnother(vecIntegers.begin(), vecIntegers.end());
   //���֧��c++11������cbegin()��cend() 
   return 0;
}
