#include <iostream> 
using namespace std;

int main()
{
  //��̬�ڴ���䷽����
  //1.ʹ��new������Type* Pointer = new Type;
  //2.Ϊ���Ԫ�ط����ڴ棺Type* Pointer = new Type[NumElements];
  //ʹ��new[]����Ҫʹ��delete[]���ͷ�:delete[] Pointer��ʹ��new���䵥��Ԫ�أ�ʹ��delete���ͷ�:delete Pointer;
  int* pAge = new int;
  
  cout << "Enter your dog's age : ";
  cin >> *pAge;
  
  cout << "Age " << *pAge << " is stored at " << hex << pAge << endl;
  
  delete pAge;
   
  return 0; 
}
