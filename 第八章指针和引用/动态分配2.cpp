#include <iostream> 
#include <string>
using namespace std;

int main()
{
  //动态内存分配方法：
  //1.使用new方法：Type* Pointer = new Type;
  //2.为多个元素分配内存：Type* Pointer = new Type[NumElements];
  //使用new[]，需要使用delete[]来释放:delete[] Pointer；使用new分配单个元素，使用delete来释放:delete Pointer;
  cout << "Enter your name : ";
  string Name;
  cin >> Name;
  
  int CharsNum = Name.length() + 1;
  //指定要为多少个字符分配内存 
  char* CopyName = new char[CharsNum];
  
  strcpy(CopyName, Name.c_str());
  
  cout << "Dynamically buffer contains : " << CopyName << endl;
  
  delete[] CopyName;
  
  return 0;
}
