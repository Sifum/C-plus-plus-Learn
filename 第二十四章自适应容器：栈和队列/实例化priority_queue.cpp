#include <iostream>
#include <vector>
#include <queue> 
#include <list>
using namespace std;

/*
STL priority_queue是一个模版类，也必须包含头文件<queue>
priority_queue与queue的不同之处在于，包含最大值（或二元谓词认为是最大值）
的元素位于队首，且只能在队首执行操作。
实例化方法：
std::priority_queue <int> pqIntegers;
创建一个这样的priority_queue,即其元素类型为double，且按小到大的顺序存储在
std::deque中：
priority_queue <int, deque<int>, greater<int> > pqIntegers_Inverse;
与stack一样，也可使用一个priority_queue来实例化另一个priority_queue：
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
