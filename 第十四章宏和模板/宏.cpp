#include <iostream>
#include <assert.h> 
#include <string>
using namespace std;

/*
定义：#define identifier value 
避免多次包含：
#ifndf name
#define someting
#endif 
*/ 
#define SQUARE(x)((x) * (x))
//宏函数定义注意与一般函数的区别 
int main()
{
   cout << SQUARE(5) << endl;
   
   assert(SQUARE(5) != 25); //会出现报错信息 
   
   return 0;
}
/*
尽可能不要自己编写宏函数
尽可能使用const变量，而不是宏常量
可以在代码中大量使用assert()，它们在发行版本中将被禁用 
*/
