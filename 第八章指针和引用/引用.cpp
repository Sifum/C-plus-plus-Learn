#include <iostream> 
using namespace std;

//引用格式：VarType& ReferenceVariable = Original 
/*
hex表示之后的数字以16进制方式输出
oct表示之后的数字以8进制方式输出
dec表示之后的数字以10进制方式输出
*/
int main()
{
  int Original = 30;
  cout << "Original = " << Original << endl;
  cout << "Original is at address: " << hex << &Original << endl;
  
  int& Ref = Original;
  
  cout << "Ref is at address: " << hex << &Ref << endl;
  
  int& Ref2 = Ref;
  cout << "Ref2 is at address: " << hex << &Ref << endl;
  
  cout << "Ref2 gets value, Refs = " << dec << Ref2 << endl;
  
  return 0;
}

