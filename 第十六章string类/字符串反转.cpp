#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
�ַ�����ת��
reverse������Ҫ���ļ�algorithm������ 
*/
int main()
{
   string strSample("Hello String! We will reverse you!");
   cout << "The original sample string is: " << endl;
   cout << strSample << endl;
   
   reverse(strSample.begin(), strSample.end());
   
   cout << "After applying the std::reverse algorithm: " << endl;
   cout << strSample << endl;
      
   return 0;
}

