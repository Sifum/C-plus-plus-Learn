#include <iostream>
#include <string>
using namespace std;

//�������� 
/*
1.���������ڶ�������ʱ�Զ�����
2.~������������������
3.������������:������~����(){} 
4.���������������� 
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
         Buffer = NULL; //��ָֹ��������ֵ����������ΪNULL 
    }
    ~MyString()
    {
       cout << "Invoking destructor, clearing up" << endl;
	   if(Buffer != NULL)//��������ȷ��������ڴ��Զ����黹��ϵͳ 
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
int main()//��main�У��������new��delete��mainִ�����ʱ���Զ������������� 
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
