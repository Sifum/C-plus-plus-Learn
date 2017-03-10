#include <iostream>
#include <string> 
//std::string是动态的，在需要存储更多数组时其容量将增大 
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

