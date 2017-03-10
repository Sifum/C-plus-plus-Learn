#include <iostream>
#include <set> 
using namespace std;

/*
ɾ��STL set��multiset�е�Ԫ��
setObject.erase(key);���ݼ�ɾ��ֵ 
setObject.erase(iElement);����һ����������Ϊ����
setObject.erase(iLowerBound, iUpperBound); ָ���߽� 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	   cout << *iElement << ' ';
    cout << endl;
}
typedef multiset <int> MSETINT;
int main()
{
   MSETINT msetIntegers;
   
   msetIntegers.insert(43);
   msetIntegers.insert(78);
   msetIntegers.insert(78);
   msetIntegers.insert(-1);
   msetIntegers.insert(124);
   
   cout << "multiset contains " << msetIntegers.size() << " elements.";
   cout << " These are: " << endl;
   
   DisplayContents(msetIntegers);
   
   cout << "Please enter a number to be erased from the set" << endl;
   int nNumberToErase = 0;
   cin >> nNumberToErase;
   
   msetIntegers.erase(nNumberToErase);
   
   cout << "multiset contains " << msetIntegers.size() << " elements.";
   cout << " These are: " << endl;
   DisplayContents(msetIntegers);
    
   return 0;
}
