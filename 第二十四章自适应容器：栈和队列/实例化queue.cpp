#include <iostream>
#include <vector>
#include <queue> 
#include <list>
using namespace std;

/*
实例化queue：
std::queue <int> qIntegers;
创建这样的queue，即其元素类型为double,并使用std::list存储这些元素:
std::queue< double, list<double> > qDoublesInList;
与stack一样，也可使用一个queue来实例化std::queque的方式：
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
