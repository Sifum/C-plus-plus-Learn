#include <iostream>
#include <string>
using namespace std;

class MyString
{
private:
  char* Buffer;
public:
  MyString(const char* InitialInput)
  {
  	if(InitialInput != NULL)
  	{
  		Buffer = new char [strlen(InitialInput) + 1];
  		strcpy(Buffer, InitialInput);
  	}else
  	  Buffer = NULL;
  }
  MyString(const MyString& CopySource);
  MyString& operator = (const MyString& CopySource)
  {
  	if((this != &CopySource) && (CopySource.Buffer != NULL))
  	{
  		if(Buffer != NULL)
  		  delete[] Buffer;
	    Buffer = new char [strlen(CopySource.Buffer) + 1];
	    strcpy(Buffer, CopySource.Buffer);
  	}
  	return *this;
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
  operator const char*()
  {
  	return Buffer;
  }
};
int main()
{
	MyString String1("Hello ");
	MyString String2(" World");
	
	cout << "Before assignment: " << endl;
	cout << String1 << String2 << endl;
	String2 = String1;
	cout << "After assignment String2 = String1: " << endl;
	cout << String1 << String2 << endl;
       
	return 0;
}
