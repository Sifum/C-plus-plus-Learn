#include <iostream>
#include <string>
using namespace std;

//·ÃÎÊstd::stringµÄ×Ö·ûÄÚÈİ 
int main()
{
   string strSTLString("Hello String");
   cout << "Displaying the elements in the string using array-syntax: " << endl;
   for( size_t nCharCounter = 0; nCharCounter < strSTLString.length(); ++nCharCounter)
   {
   	 cout << "Character [" << nCharCounter << "] is: ";
   	 cout << strSTLString[nCharCounter] << endl;
   }
   cout << endl;
   
   cout << "Displaying the contents of the string using iterators: " <<endl;
   int charOffset = 0;
   string::const_iterator iCharacterLocator;
   for( iCharacterLocator = strSTLString.begin(); iCharacterLocator != strSTLString.end(); ++iCharacterLocator)
   {
   	 cout << "Character [" << charOffset++ << "] is: ";
   	 cout << *iCharacterLocator << endl;
   }
   cout << endl;
   
   cout << "The char* representation of the string is: ";
   cout << strSTLString.c_str() << endl; 
   
   return 0;
}

