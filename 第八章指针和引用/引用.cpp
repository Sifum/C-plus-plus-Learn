#include <iostream> 
using namespace std;

//���ø�ʽ��VarType& ReferenceVariable = Original 
/*
hex��ʾ֮���������16���Ʒ�ʽ���
oct��ʾ֮���������8���Ʒ�ʽ���
dec��ʾ֮���������10���Ʒ�ʽ���
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

