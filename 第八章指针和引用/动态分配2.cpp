#include <iostream> 
#include <string>
using namespace std;

int main()
{
  //��̬�ڴ���䷽����
  //1.ʹ��new������Type* Pointer = new Type;
  //2.Ϊ���Ԫ�ط����ڴ棺Type* Pointer = new Type[NumElements];
  //ʹ��new[]����Ҫʹ��delete[]���ͷ�:delete[] Pointer��ʹ��new���䵥��Ԫ�أ�ʹ��delete���ͷ�:delete Pointer;
  cout << "Enter your name : ";
  string Name;
  cin >> Name;
  
  int CharsNum = Name.length() + 1;
  //ָ��ҪΪ���ٸ��ַ������ڴ� 
  char* CopyName = new char[CharsNum];
  
  strcpy(CopyName, Name.c_str());
  
  cout << "Dynamically buffer contains : " << CopyName << endl;
  
  delete[] CopyName;
  
  return 0;
}
