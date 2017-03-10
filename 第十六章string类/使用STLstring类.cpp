#include <iostream>
#include <string>
using namespace std;

int main()
{
   const char* constCStyleString = "Hello String!"; //��̬�ַ����� 
   cout << "Constant string is: " << constCStyleString << endl;
   
   string strFromConst(constCStyleString);
   cout << "strFromConst is: " << strFromConst << endl;
   
   string str2("Hello string");
   string str2Copy(str2);
   cout << "str2Copy is: " << str2Copy << endl;
   
   string strPartialCopy(constCStyleString, 5);
   cout << "strPartialCopy is: " << strPartialCopy << endl;
   
   string strRepeatChars(10, 'a');
   cout << "strRepeatChars is: " << strRepeatChars << endl;
   
   return 0;
}
/*
�����ַ�����ʼ��STL string����򽫳����ַ�������STL string����
const char* constCStyleString = "Hello String!";
std::string strFromConst(constCStyleString);
��
std::string strFromConst = constCStyleString; 
�����������������ƣ�
std::string str("Hello Sting!");
�����ַ�����ǰn���ַ���
std::string str(constCStyleString,5);
����ָ���������ض��ַ���
std::string str(10, 'a');
*/
