#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;

/*
deque��һ����̬�����࣬��vector���ƣ�֧�������鿪ͷ�ͽ�β�����ɾ��Ԫ��
deque <int> dpIntegers; ��Ҫ����ͷ�ļ�<deque> 
vector:push_back,pop_back
deque����push_front,pop_front 
*/
int main()
{
   deque <int> dpIntegers;
   dpIntegers.push_back(3);
   dpIntegers.push_back(4);
   dpIntegers.push_back(5);
   
   dpIntegers.push_front(2);
   dpIntegers.push_front(1);
   dpIntegers.push_front(0);
   
   cout << "The contents of the deque after inserting elements ";
   cout << "at the top and bottom are: " << endl;
   
   for(size_t nCount = 0; nCount < dpIntegers.size(); ++nCount)
   {
   	 cout << "Element [" << nCount << "] = ";
   	 cout << dpIntegers[nCount] << endl;
   }
   cout << endl;
   
   dpIntegers.pop_front();
   dpIntegers.pop_back();
   
   cout << "The contents of the deque after erasing an element ";
   cout << "form the top and bottom are: " << endl;
   
   for(auto iElementLocator = dpIntegers.begin(); iElementLocator != dpIntegers.end(); ++iElementLocator)
   {
   	 size_t Offset = distance(dpIntegers.begin(), iElementLocator);
   	 cout << "Element [" << Offset << "] = " << *iElementLocator << endl;
   }
   
   return 0;
}
/*
�ڲ�֪����Ҫ�洢���ٸ�Ԫ��ʱ�����ʹ�ö�̬����vector��deque;
vectorһ�����ݣ�deque�����������ݣ� 
*/
