#include <iostream>
using namespace std;

//函数定义
int DemoConsoleOutput();

int main()
{
  DemoConsoleOutput();
  //函数调用
  return 0; 
}
//定义方法
int DemoConsoleOutput()
{
  cout << "This is a simple string literal" << endl;
  cout << "Writing number five :" << 5 << endl;
  cout << "performing division 10 / 5 = " << 10 / 5 << endl;
  return 0; 
}
