#include <iostream>
#include <assert.h> 
#include <string>
using namespace std;

/*
���壺#define identifier value 
�����ΰ�����
#ifndf name
#define someting
#endif 
*/ 
#define SQUARE(x)((x) * (x))
//�꺯������ע����һ�㺯�������� 
int main()
{
   cout << SQUARE(5) << endl;
   
   assert(SQUARE(5) != 25); //����ֱ�����Ϣ 
   
   return 0;
}
/*
�����ܲ�Ҫ�Լ���д�꺯��
������ʹ��const�����������Ǻ곣��
�����ڴ����д���ʹ��assert()�������ڷ��а汾�н������� 
*/
