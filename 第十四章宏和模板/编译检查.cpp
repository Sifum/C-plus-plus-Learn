#include <iostream>
#include <assert.h> 
#include <string>
using namespace std;

//c++11编译阶段检查 
class EveryThingButInt
{
public:
  EveryThingButInt()
  {
  	static_assert(sizeof(T) != sizeof(int), "No int please!");
  }
};
int main()
{
   EveryThingButInt<int> test;  
   return 0;
}
/*
务必使用模板来实现通用概念，务必使用模板不是宏。
编写模板函数和模板类时，别忘了尽可能使用const 
*/
