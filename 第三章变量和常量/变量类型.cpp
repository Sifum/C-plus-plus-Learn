#include <iostream>
using namespace std;

int main()
{
  bool Always = false;
  bool AlwaysOn = (Always == false);
  float Number =  22 / 7;
  char Str = 's';
  //ע��charֻ����һ���ַ�����������<string>ͷ�ļ���ſ���string���Ͷ����ַ��� 

  cout << Str << AlwaysOn << " number: " << Number << endl;
}
/*
�������ͣ�POD(plain old data)
bool true|false
char 256���ַ�ֵ
int(16λ) -32768~32767
int(32λ) -2147483648~2147483647
unsigned int(16λ) 0~65535
unsigned int(32λ) 0~4294967295
short int -32768~32767
unsigned short int  0~65535
long int -2147483648~2147483647
float 1.2e-38~3.4e38
double 2.2e-308~1.8e308
//2��16�η���65536
//2��8�η���256
//2��7�η���128
//���1�ֽ���8λ��ʾ���ݣ��޷��������ɴ�0~256���з��ŵĻ�����һλ������ʾ���ţ�-127~127 
*/ 

