#include <iostream>
#include <stack>
#include <vector>
using namespace std;

/*
ջ�Ǻ�������ֻ�ܴ�ջ�������ɾ��Ԫ�ء�std::stack,ͷ�ļ�<stack> 
�������Ƚ��ȳ�����β���в��룬��ͷ����ɾ����std::queue��ͷ�ļ�<queue>

ʵ����ջ��
std::stack<int> stackInts;
�����洢�ࣨ��Tuna�������ջ��
std::stack<Tuna> stackTunas;
Ҫ����ʹ�ò�ͬ�ײ�������ջ��
std::stack<double, vector<double> > stackDoublesInVector; 
*/
int main()
{
   stack<int> stackInts;

   stack<double> stackDoubles;

   stack<double, vector <double> > stackDoublesInVector;

   stack<int> stackIntsCopy(stackInts); 

   return 0;
}
