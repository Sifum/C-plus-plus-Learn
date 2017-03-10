#include <iostream>
#include <string>
using namespace std;

//析构函数 
/*
1.析构函数在对象销毁时自动调用
2.~类名：析构函数声明
3.类外声明方法:类名：~类名(){} 
4.析构函数不能重载 
*/
class MyString
{
 private:
    char* Buffer;   
 public:
    MyString(const char* InitialInput)
    {
       if(InitialInput != NULL)
	   {
	     Buffer = new char[strlen(InitialInput) + 1];
	     strcpy(Buffer, InitialInput);
	   }
	   else
         Buffer = NULL; //防止指针包含随机值，所以声明为NULL 
    }
    ~MyString()
    {
       cout << "Invoking destructor, clearing up" << endl;
	   if(Buffer != NULL)//析构函数确保分配的内存自动被归还给系统 
	     delete[] Buffer;	
    }
    int GetLength()
    {
   	   return strlen(Buffer);
    }
    const char* GetString()
    {
       return Buffer;	
    }
};
int main()//在main中，无须调用new和delete，main执行完毕时，自动调用析构函数 
{
  MyString SayHello("Hello from String Class ");
  cout << "String buffer in MyString is " << SayHello.GetLength();
  cout << " characters long" << endl;
  
  cout << "Buffer contains: ";
  cout << "Buffer contains: " << SayHello.GetString() << endl;
  return 0;
}
/*

*/
