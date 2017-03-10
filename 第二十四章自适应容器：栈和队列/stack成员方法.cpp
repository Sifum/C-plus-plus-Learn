#include <iostream>
#include <stack>
#include <vector>
using namespace std;

/*
stack成员函数：
push(); 在栈顶插入元素，如stackInts.push(25); 
pop(); 删除栈顶的元素, 如stackInts.pop(); 
empty(); 检查栈是否为空 
size(); 返回栈的元素数 
top(); 获得指向栈顶元素的引用 
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
