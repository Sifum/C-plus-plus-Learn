#include <iostream>
#include <string>
using namespace std;

/*
深复制构造函数 
即将指向的内容复制给当前对象新分配的缓冲区中
两个对象并未指向同一个动态分配的内存地址 
*/
class MyString
{
 private:
    char* Buffer;   
 public:
    MyString(const char* InitialInput)
    {
	  cout << "Constructor: creating new MyString" << endl; 
       if(InitialInput != NULL)
	   {
	     Buffer = new char[strlen(InitialInput) + 1];
	     strcpy(Buffer, InitialInput);
	     
	     cout << "Buffer points to: 0x" << hex;
	     cout << (unsigned int*)Buffer << endl;
	   }
	   else
         Buffer = NULL; 
    }
    MyString(const MyString& CopySource)//复制构造函数 
    {
       cout << "Copy contructor: copying from MyString" << endl;
	   if(CopySource.Buffer != NULL)
	   {
	      Buffer = new char [strlen(CopySource.Buffer) + 1];
	      
	      strcpy(Buffer, CopySource.Buffer);
	      
	      cout << "Buffer points to: 0x" << hex;
	      cout << (unsigned int*)Buffer << endl;
	   }
	   else
	     Buffer = NULL;
    }
    ~MyString()
    {
       cout << "Invoking destructor, clearing up" << endl;
	   if(Buffer != NULL)
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
void UseMyString(MyString Input)
{
  cout << "String buffer in MyString is " << Input.GetLength();
  cout << "chraracters long" << endl;
  
  cout << "Buffer contains: " << Input.GetString() << endl;
  return;	
}
int main()
{
  MyString SayHello("Hello from String Class ");

  UseMyString(SayHello);
  //SayHello按值传递给函数UseMyString，将自动调用复制构造函数 
  //形参Input被销毁时，析构函数对复制函数分配的内存地址调用delete[]
  //而没有影响main()中SayHello指向的内存
  //两个函数执行完毕后，都成功销毁了各自的对象。 
  return 0;
}
