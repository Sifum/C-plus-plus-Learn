#include <iostream>
#include <string>
using namespace std;

int main()
{
   string strSample("Hello String! wake up to a beautiful day!");
   cout << "The original sample string is: " << endl;
   cout << strSample << endl;
   
   cout << "Truncating the second sentence: " << endl;
   strSample.erase(13, 28);//����ƫ��λ�ú��ַ�����ɾ��ָ����Ŀ���ַ� 
   cout << strSample << endl;
   
   /*
   string::iterator iChars = find(strSample.begin(), strSample.end(), 'S');
   //c++�汾���⣬ansi c++���� 
   cout << "Erasing character 'S' from the sample string:" << endl;
   if(iChars != strSample.end())
     strSample.erase(iChars);
   */
 
   strSample.erase(strSample.begin(), strSample.end());
   //ɾ�������ַ� 
   if(strSample.length() == 0)
   	 cout << "The string si empty" << endl; 
   
   return 0;
}

