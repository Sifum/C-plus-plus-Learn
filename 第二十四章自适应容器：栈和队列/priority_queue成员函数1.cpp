#include <iostream>
#include <vector>
#include <queue> 
#include <list>
using namespace std;

/*
priority_queue的成员函数：
push(); 在优先级队列中插入一个元素 
pop(); 删除队首元素，即最大的元素 
top(); 返回指向队列中最大元素(即队首元素)的引用 
empty(); 检查优先级队列 
size();  返回优先级队列中的元素个数 
*/
int main()
{
   priority_queue <int> pqIntegers;

   cout << "Inserting {10, 5, -1, 20} into the priority_queue" << endl;
   pqIntegers.push(10);
   pqIntegers.push(5);
   pqIntegers.push(-1);
   pqIntegers.push(20);

   cout << "Deleting the " << pqIntegers.size() << " elements" << endl;
   while(!pqIntegers.empty())
   {
   	 cout << "Deleting topmost element: " << pqIntegers.top() << endl;
   	 pqIntegers.pop();
   } 
   
   return 0;
}
