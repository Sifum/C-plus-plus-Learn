#include <iostream>
#include <string>
using namespace std;

/*
std::strin::npos ʵ��ֵΪ-1
*/
int main()
{
   string strSample ("Good day String! Today is beautiful!");
   cout << "The sample string is: " << endl;
   cout << strSample << endl;
   
   size_t charPos = strSample.find("day", 0);
   
   if(charPos != string::npos)
   	 cout << "First instance of \"day\" was found at position " << charPos;
   else
     cout << "Substring not found. " << endl;
   
   cout << "Locating all instance of substring \"day\"" << endl;
   size_t SubstringPos = strSample.find("day", 0);
   
   while(SubstringPos != string::npos)
   {
   	 cout << "\"day\" found at position " << SubstringPos << endl;
     size_t nSearchPosition = SubstringPos + 1 ;
     SubstringPos = strSample.find("day", nSearchPosition);
   }
   cout << endl;
   
   cout << "Locating all instance of character 'a'" << endl;
   const char charToSearch = 'a';
   charPos = strSample.find(charToSearch, 0);
   
   while(charPos != string::npos)//std::string::nposʵ��ֵΪ-1������û��������Ԫ�� 
   {
   	 cout << "'" << charToSearch << "' found" ;
     cout << " at position: " << charPos << endl;
	 size_t charSearchPos = charPos + 1;
	 charPos = strSample.find(charToSearch, charSearchPos);
   }
   
   return 0;
}
/*
��find()���ƺ�����
find_first_of(),find_first_not_of(),find_last_of(),find_last_not_of() 
*/
