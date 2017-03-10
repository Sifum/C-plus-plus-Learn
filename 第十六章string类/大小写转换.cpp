#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
字符串的大小写转换：
transform 
*/
int main()
{
   cout << "Please enter a string for case-convertion: " << endl;
   cout << "> ";
   
   string strInput;
   getline(cin,strInput);
   cout << endl;
   
   transform(strInput.begin(), strInput.end(), strInput.begin(), toupper);
   cout << "The string converted to upper case is: " << endl;
   cout << strInput << endl;
   
   transform(strInput.begin(), strInput.end(), strInput.begin(), tolower);
   cout << "The string converted to lower case is: " << endl;
   cout << strInput << endl;   
   return 0;
}

