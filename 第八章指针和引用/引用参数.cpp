#include <iostream> 
using namespace std;

/*通过引用参数接受一个要计算其平方的数字，并通过该参数返回结果 
如果不给参数Number声明应用（&），结果将无法返回到调用函数main()
因为将使用Number的本地拷贝执行运算，而函数结束时该拷贝将被销毁。
通过使用引用，可确保函数对main()中定义的Number所在的内存单元进行操作 
*/
void ReturnSquare(int& Number)
{
  Number *= Number;	
}
int main()
{
  cout << "Enter a number you wish to square: ";
  int Number = 0;
  cin >> Number;
  
  ReturnSquare(Number);
  cout << "Square is: " << Number << endl; 
  
  return 0;
}

