#include <iostream>
#include <vector>
#include <queue> 
#include <list>
using namespace std;

/*
STL priority_queue��һ��ģ���࣬Ҳ�������ͷ�ļ�<queue>
priority_queue��queue�Ĳ�֮ͬ�����ڣ��������ֵ�����Ԫν����Ϊ�����ֵ��
��Ԫ��λ�ڶ��ף���ֻ���ڶ���ִ�в�����
ʵ����������
std::priority_queue <int> pqIntegers;
����һ��������priority_queue,����Ԫ������Ϊdouble���Ұ�С�����˳��洢��
std::deque�У�
priority_queue <int, deque<int>, greater<int> > pqIntegers_Inverse;
��stackһ����Ҳ��ʹ��һ��priority_queue��ʵ������һ��priority_queue��
std::priority_queue<int> pqCopy(pqIntegers); 
*/
int main()
{
   priority_queue <int> pqIntegers;

   priority_queue <double> pqDoubles;

   priority_queue <int, deque<int>, greater<int> > pqIntegers_Inverse;

   priority_queue <int> pqCopy(pqIntegers);
   
   return 0;
}
