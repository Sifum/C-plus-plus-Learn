#include <iostream> 
using namespace std;

int main()
{
  cout << "hellob \
  world!" << endl;
  cout << "hello"
  "world" << endl;
  //两种分行字符串表示方法 
  
  cout << "Enter a number: ";
  int InputNum = 0;
  cin >> InputNum;
  
  int Half = InputNum >> 1; //右移运算符，得到变量值除以2的n次方后的值，此处n为1 
  int Double = InputNum << 1;  //左移运算符，乘以。 
  int Quarter = InputNum >> 2;//此处n为2 
  int Quadruple = InputNum << 2;
  
  cout << "Half: " << Half << endl; 
  cout << "Double: " << Double << endl;
  cout << "Quarter: " << Quarter << endl;
  cout << "Quadruple: " << Quadruple << endl;
  
  cout << "use sizeof get the length:" << endl;
  int MyNum[100] = {0}; //将100项数组的值都定义为0 
  cout << "Length of MyNum[100]: " << sizeof(MyNum) << endl;
  cout << "Length of MyNum[0]: " << sizeof(MyNum[0]) << endl;
  return 0;
}
//注：++variable 优于 variable-- 
