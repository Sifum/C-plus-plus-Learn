#include <iostream> 
using namespace std;

int main()
{
  cout << "hellob \
  world!" << endl;
  cout << "hello"
  "world" << endl;
  //���ַ����ַ�����ʾ���� 
  
  cout << "Enter a number: ";
  int InputNum = 0;
  cin >> InputNum;
  
  int Half = InputNum >> 1; //������������õ�����ֵ����2��n�η����ֵ���˴�nΪ1 
  int Double = InputNum << 1;  //��������������ԡ� 
  int Quarter = InputNum >> 2;//�˴�nΪ2 
  int Quadruple = InputNum << 2;
  
  cout << "Half: " << Half << endl; 
  cout << "Double: " << Double << endl;
  cout << "Quarter: " << Quarter << endl;
  cout << "Quadruple: " << Quadruple << endl;
  
  cout << "use sizeof get the length:" << endl;
  int MyNum[100] = {0}; //��100�������ֵ������Ϊ0 
  cout << "Length of MyNum[100]: " << sizeof(MyNum) << endl;
  cout << "Length of MyNum[0]: " << sizeof(MyNum[0]) << endl;
  return 0;
}
//ע��++variable ���� variable-- 
