#include <iostream>
#include <string>
using namespace std;

int main()
{
   const char* constCStyleString = "Hello String!"; //动态字符数组 
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
常量字符串初始化STL string对象或将常量字符串赋给STL string对象：
const char* constCStyleString = "Hello String!";
std::string strFromConst(constCStyleString);
或
std::string strFromConst = constCStyleString; 
上述代码与下面类似：
std::string str("Hello Sting!");
限制字符串的前n个字符：
std::string str(constCStyleString,5);
包含指定数量的特定字符：
std::string str(10, 'a');
*/
