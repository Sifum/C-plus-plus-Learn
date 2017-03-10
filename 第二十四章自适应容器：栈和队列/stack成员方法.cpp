#include <iostream>
#include <stack>
#include <vector>
using namespace std;

/*
stack��Ա������
push(); ��ջ������Ԫ�أ���stackInts.push(25); 
pop(); ɾ��ջ����Ԫ��, ��stackInts.pop(); 
empty(); ���ջ�Ƿ�Ϊ�� 
size(); ����ջ��Ԫ���� 
top(); ���ָ��ջ��Ԫ�ص����� 
*/
int main()
{
   stack<int> stackInts;

   cout << "Pushing {25, 10, -1, 5} on stack in that order: " << endl;
   stackInts.push(25);
   stackInts.push(10);
   stackInts.push(-1);
   stackInts.push(5);

   cout << "Stack contains " << stackInts.size() << " elements " << endl;
   while(stackInts.size() != 0)
   {
   	 cout << "Popping topmost element: " << stackInts.top() << endl;
   	 stackInts.pop();
   }

   if(stackInts.empty())
   	 cout << "Popping all elements empties stack!" << endl;

   return 0;
}
