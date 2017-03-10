#include <iostream>
using namespace std;

int main()
{
  bool Always = false;
  bool AlwaysOn = (Always == false);
  float Number =  22 / 7;
  char Str = 's';
  //注意char只保留一个字符，而定义了<string>头文件后才可用string类型定义字符串 

  cout << Str << AlwaysOn << " number: " << Number << endl;
}
/*
变量类型：POD(plain old data)
bool true|false
char 256个字符值
int(16位) -32768~32767
int(32位) -2147483648~2147483647
unsigned int(16位) 0~65535
unsigned int(32位) 0~4294967295
short int -32768~32767
unsigned short int  0~65535
long int -2147483648~2147483647
float 1.2e-38~3.4e38
double 2.2e-308~1.8e308
//2的16次方：65536
//2的8次方：256
//2的7次方：128
//如果1字节用8位表示数据，无符号整数可存0~256，有符号的话，第一位用来表示符号，-127~127 
*/ 

