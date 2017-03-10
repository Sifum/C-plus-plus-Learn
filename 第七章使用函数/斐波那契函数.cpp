#include <iostream> 
using namespace std;
//递归函数,斐波那契数列

int Fibonacci(int FibIndex)
{
   if(FibIndex < 2)
      return FibIndex;
   else
      return Fibonacci(FibIndex - 1) + Fibonacci(FibIndex - 2);
}
int main()
{
    cout << "Enter 0-based index of desired Fibonacci Number: ";
    int Index = 0;
    cin >> Index;
    
    cout << "Fibonacci number is : " << Fibonacci(Index) << endl;
    
    return 0;
}
