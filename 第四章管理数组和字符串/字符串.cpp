#include <iostream>
#include <string> 
//std::string�Ƕ�̬�ģ�����Ҫ�洢��������ʱ������������ 
using namespace std;

int main()
{
   string Greetings ("Hello std::string!");
   cout << Greetings << endl;	
   
   cout << "Enter a line of text: " << endl;
   string FirstLine;
   getline(cin, FirstLine);
   
   cout << "your input is :" ;
   cout << FirstLine << endl;
   return 0;
}

