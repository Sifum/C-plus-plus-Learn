#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
using namespace std;

/*
c++11���� 
lambda���ʽ����[]��ͷ�����߱�������������һ��lambda���ʽ����������б���
����operator()�Ĳ��� 
[](int Element) {cout << element << ' ';}
[](type paramName) {//lambda expression code here;} 
[](type& paramName) {//lambda expression code here;} 
�Զ��ᱻչ����
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
