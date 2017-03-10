#include <iostream> 
using namespace std;

//引用运算符(&)和解除引用运算符(*)，也叫间接运算符
int main()
{
  int age = 10;
  const double PI = 3.14;
  int* SameAge = NULL;//指针初始化记得指向NULL，否则未初始化的指针会指向任何地址 
  SameAge = &age;
  
  cout << "address of age at : " << &age << endl;
  cout << "address of PI at : " << &PI << endl;
  cout << "address of SameAge at : " << SameAge << endl;
  cout << "value of  SameAge is : " << *SameAge << endl;
  cout << "address of SameAge is the same with that of age." << endl;
  
  int* AnotherAge = NULL;
  AnotherAge = &age;
  cout << "input the changed age : ";
  cin >> *AnotherAge;
  cout << "now age is : " << age << endl;
  
  return 0; 
}
//sizeof(pointer),不管指针是什么类型，如果是32位，则结果都为4字节，如果是64位，结果都为8字节 
