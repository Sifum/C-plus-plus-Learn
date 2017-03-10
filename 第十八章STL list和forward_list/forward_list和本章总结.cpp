#include <iostream>
#include <vector>
#include <list> 
#include <string>
#include <forward_list> //c++11֧�� 
using namespace std;

/*
std::list˫������
std::forward_list����������ֻ������һ������������������ͷ�ļ�<forward_list> 
*/
template <typename T>
void DisplayContents(const T& Input)
{
	for(auto iElement = Input.cbegin(); iElement != Input.cend(); ++iElement)
	   cout << *iElement << ' ';//C++11֧�� 
    cout << endl;
}
int main()
{
   forward_list<int> flistIntegers;
   flistIntegers.push_front(0);
   flistIntegers.push_front(2);
   flistIntegers.push_front(2);
   flistIntegers.push_front(4);
   flistIntegers.push_front(3);
   flistIntegers.push_front(1);
   
   cout << "Contents of forward_list: " << endl;
   DisplayContents(flistIntegers);
   
   flistIntegers.remove(2); //ɾ����ֵΪ2������Ԫ�� 
   flistIntegers.sort();
   cout << "Contents after removing 2 and sorting: " << endl;
   DisplayContents(flistIntegers);
   
   return 0;
}
/*
1.�����ҪƵ���ز����ɾ��Ԫ�أ����������м�����ɾ��ʱ����Ӧʹ��list
2.��������STL������һ�������ǿ���ʹ��std::size()��ȷ��list��������Ԫ��
3.������STL������һ������ʹ�÷���list::clear()���list
4.����Ƶ�������˲����ɾ��Ԫ�أ��Ҳ������м�����ɾ��Ԫ�أ��벻Ҫʹ��
list��vector��deque���ٶ�Ҫ��ö�
*/
