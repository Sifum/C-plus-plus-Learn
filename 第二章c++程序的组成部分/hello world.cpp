#include <iostream>
//引入标准头文件，该头文件包含std::cout的定义 
int main()//c++此函数必须返回int 
{
  std::cout << "Hello world" << std::endl;
  //控制台输出，读作：stardard::see-out,<<为流插入运算符，std::endl相当于回车换行。 
  //cout位于标准(std)名称空间中,std名称空间来调用获得ISO标准批准的，并在该名称空间中声明的函数，流和工具 
  //可通过 using namespace std;cout << "Hello world" << std;简化 
  //也可using std::count;using std::endl;输出同上 
  return 0;
}
