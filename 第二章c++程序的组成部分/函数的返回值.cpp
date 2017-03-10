#include <iostream>
using namespace std;

//int DemoConsoleOutput();声明可以省略，如果省略，则函数定义要先于int main 
//定义方法
int DemoConsoleOutput()
{
  cout << "This is a simple string literal" << endl;
  cout << "Writing number five :" << 5 << endl;
  cout << "performing division 10 / 5 = " << 10 / 5 << endl;
  return 0; 
}
int main()
{
  return DemoConsoleOutput();
}
