#include <iostream>
#include <stack>
#include <vector>
using namespace std;

/*
栈是后进后出，只能从栈顶插入或删除元素。std::stack,头文件<stack> 
队列是先进先出，队尾进行插入，队头进行删除。std::queue，头文件<queue>

实例化栈：
std::stack<int> stackInts;
创建存储类（如Tuna）对象的栈：
std::stack<Tuna> stackTunas;
要创建使用不同底层容器的栈：
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
