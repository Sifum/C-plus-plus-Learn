#include <iostream>
#include <string>
using namespace std;

/*
��ƹ��캯�� 
����ָ������ݸ��Ƹ���ǰ�����·���Ļ�������
��������δָ��ͬһ����̬������ڴ��ַ 
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
    MyString(const MyString& CopySource)//���ƹ��캯�� 
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
  //SayHello��ֵ���ݸ�����UseMyString�����Զ����ø��ƹ��캯�� 
  //�β�Input������ʱ�����������Ը��ƺ���������ڴ��ַ����delete[]
  //��û��Ӱ��main()��SayHelloָ����ڴ�
  //��������ִ����Ϻ󣬶��ɹ������˸��ԵĶ��� 
  return 0;
}
