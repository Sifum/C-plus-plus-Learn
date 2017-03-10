#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
c++11新增 
lambda表达式：以[]打头，告诉编译器接下来是一个lambda表达式，后跟参数列表，提
供给operator()的参数 
[](int Element) {cout << element << ' ';}
[](type paramName) {//lambda expression code here;} 
[](type& paramName) {//lambda expression code here;} 
自动会被展开：
struct NoName
{
   void operator()(const int& element) const
   {
   	  cout << element << ' ';
   }
};
*/
int main()
{
   vector <int> vecIntegers;
   
   for(int nCount = 0; nCount < 10; ++nCount)
     vecIntegers.push_back(nCount);
   list <char> listChars;
   for(char nChar = 'a'; nChar < 'k'; ++nChar)
     listChars.push_back(nChar);
     
   cout << "Displaying vector of integers using a lambda: " << endl;
   
   for_each(vecIntegers.begin(), vecIntegers.end(), [](int& element){cout << element << ' ';});
   cout << endl << endl;
   
   cout << "Displaying list of characters using a lambda: " << endl;
   
   for_each(listChars.begin(), listChars.end(), [](int& element){cout << element << ' ';});
   cout << endl;
   
   return 0;
}
