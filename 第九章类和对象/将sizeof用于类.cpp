#include <iostream>
#include <string>
using namespace std;

/*
sizeof用于确定指定类型需要多少内存（单位为字节）
也可用于类，指出类声明中所有数据属性占用的总内存量（单位为字节）
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
   MyString(const MyString& CopySource)
   {
   	 if(CopySource.Buffer != NULL)
   	 {
   	 	Buffer = new char[strlen(CopySource.Buffer) + 1];
   	 	strcpy(Buffer, CopySource.Buffer);
   	 }
   	 else 
   	    Buffer = NULL;
   }
   ~MyString()
   {
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
class Human
{
private://int占用4字节，bool占用1字节，MyString占用4字节
//他们的总和与输出数不一致，因为受字填充和其他因素影响 
   int Age;
   bool Gender;
   MyString Name;
public:
   Human(const MyString& InputName, int InputAge, bool InputGender)
     :Name(InputName), Age(InputAge), Gender(InputGender){}
   int GetAge()
   {
     return Age;
   }
};
int main()
{
  MyString FirstMan("Adam");
  MyString FirstWoman("Eve");
  
  cout << "sizeof(MyString) = " << sizeof(MyString) << endl;
  cout << "sizeof(FirstMan) = " << sizeof(FirstMan) << endl;
  cout << "sizeof(FirstWoman) = " << sizeof(FirstWoman) << endl;
  
  Human FirstMaleHuman(FirstMan, 25, true);
  Human FirstFemaleHuman(FirstWoman, 18, false);
  
  cout << "sizeof(Human) = " << sizeof(Human) << endl;
  cout << "sizeof(FirstMaleHuman) = " << sizeof(FirstMaleHuman) << endl;
  cout << "sizeof(FirstFemaleHuman) = " << sizeof(FirstFemaleHuman) << endl;
  return 0;
}
