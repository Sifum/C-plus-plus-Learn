#include <iostream>
#include <vector>
#include <queue> 
#include <list>
using namespace std;

/*
queue��Ա������
push(); �ڶ�β����һ��Ԫ�� ��qIntegers.push(50); 
pop();  �����׵�Ԫ��ɾ�� ��qIntegers.pop(); 
front(); ����ָ�����Ԫ�ص����� 
back();  ���ض�βԪ�ص����� 
empty(); �������Ƿ�Ϊ�ղ�����һ������ֵ 
size(); ���ض����е�Ԫ���� �� size_t nNumberElements = qIntegers.size(); 
*/
int main()
{
   queue<int> qIntegers;

   cout << "Inserting {10, 5, -1, 20} into queue" << endl;
   qIntegers.push(10);
   qIntegers.push(5);
   qIntegers.push(-1);
   qIntegers.push(20);

   cout << "Queue contains " << qIntegers.size() << " elements " << endl;
   cout << "Element at front: " << qIntegers.front() << endl;
   cout << "Element at back: " << qIntegers.back() << endl;

   while(qIntegers.size() != 0)
   {
   	 cout << "Deleting element: " << qIntegers.front() << endl;
   	 qIntegers.pop();
   }

   if(qIntegers.empty())
   	 cout << "The queue is now empty!" << endl;

   return 0;
}
