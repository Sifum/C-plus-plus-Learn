#include <iostream>
#include <vector>
#include <queue> 
#include <list>
using namespace std;

/*
ʵ����queue��
std::queue <int> qIntegers;
����������queue������Ԫ������Ϊdouble,��ʹ��std::list�洢��ЩԪ��:
std::queue< double, list<double> > qDoublesInList;
��stackһ����Ҳ��ʹ��һ��queue��ʵ����std::queque�ķ�ʽ��
std:queue<int> qCopy(qIntegers); 
*/
int main()
{
   queue<int> qIntegers;

   queue<double> qDoubles;

   queue<double, list<double> > qDoublesInList;

   queue<int> qCopy(qIntegers);

   return 0;
}
