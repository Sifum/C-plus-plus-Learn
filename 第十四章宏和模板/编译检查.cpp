#include <iostream>
#include <assert.h> 
#include <string>
using namespace std;

//c++11����׶μ�� 
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
���ʹ��ģ����ʵ��ͨ�ø�����ʹ��ģ�岻�Ǻꡣ
��дģ�庯����ģ����ʱ�������˾�����ʹ��const 
*/
