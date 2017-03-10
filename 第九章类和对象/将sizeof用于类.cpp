#include <iostream>
#include <string>
using namespace std;

/*
sizeof����ȷ��ָ��������Ҫ�����ڴ棨��λΪ�ֽڣ�
Ҳ�������ָ࣬����������������������ռ�õ����ڴ�������λΪ�ֽڣ�
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
private://intռ��4�ֽڣ�boolռ��1�ֽڣ�MyStringռ��4�ֽ�
//���ǵ��ܺ����������һ�£���Ϊ����������������Ӱ�� 
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
