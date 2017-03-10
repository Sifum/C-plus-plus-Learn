#include <iostream>
#include <vector>
#include <queue> 
#include <list>
using namespace std;

/*
queue成员函数：
push(); 在队尾插入一个元素 如qIntegers.push(50); 
pop();  将队首的元素删除 如qIntegers.pop(); 
front(); 返回指向队首元素的引用 
back();  返回队尾元素的引用 
empty(); 检查队列是否为空并返回一个布尔值 
size(); 返回队列中的元素数 如 size_t nNumberElements = qIntegers.size(); 
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
