#include <iostream>
#include <set> 
using namespace std;

/*
��set��multiset����Ԫ�أ�
setIntegers.insert(-1);
msetIntegers.insert(setIntegers.begin(), setIntegers.end()); 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	   cout << *iElement << ' ';//c++11֧��,����auto����T::const_iterator 
    cout << endl;
}
int main()
{
   set <int> setIntegers;
   multiset <int> msetIntegers;
   
   setIntegers.insert(50);
   setIntegers.insert(-1);
   setIntegers.insert(3000);
   cout << "Writing the contents of the set to the screen" << endl;
   DisplayContents(setIntegers);
   
   msetIntegers.insert(setIntegers.begin(), setIntegers.end());
   msetIntegers.insert(3000);
   
   cout << "Writing the contents of the multiset to screen" << endl;
   DisplayContents(msetIntegers);
   
   cout << "Number of instance of '3000' in the multiset are: "
   cout << msetIntegers.count(3000) << endl;
   //multiset::countȷ��multiset��������������Ԫ�أ�����ֵ��ͨ��ʵ�δ��ݸ����������ֵ��ͬ 
   return 0;
}
