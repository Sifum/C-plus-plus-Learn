#include <iostream> 
using namespace std;

int main()
{
  //动态内存分配方法：
  //1.使用new方法：Type* Pointer = new Type;
  //2.为多个元素分配内存：Type* Pointer = new Type[NumElements];
  //使用new[]，需要使用delete[]来释放:delete[] Pointer；使用new分配单个元素，使用delete来释放:delete Pointer;
  int* pAge = new int;
  
  cout << "Enter your dog's age : ";
  cin >> *pAge;
  
  cout << "Age " << *pAge << " is stored at " << hex << pAge << endl;
  
  delete pAge;
   
  return 0; 
}
