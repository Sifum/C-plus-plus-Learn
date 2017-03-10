#include <iostream>
using namespace std;

int main()
{
   cout << sizeof(int) << endl;
   //确定变量长度
   
   auto Number = true;
   //auto类型变量推断功能，让编辑器决定其类型，但使用auto时必须对变量进行初始化
   //C++11中有效 
   cout << "Length of Number is "<< Number << endl;
   
   typedef unsigned int UN_NUM;
   UN_NUM PosNumber = 4523;
   
   cout << "UN_NUM type: " << PosNumber << endl;
   
   return 0; 
}

