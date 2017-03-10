#include <iostream>
#include <string>
using namespace std;

/*
复制构造函数 
浅复制及其存在的问题 
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
  return 0;
}
