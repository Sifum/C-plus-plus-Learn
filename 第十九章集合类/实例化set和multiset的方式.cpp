#include <iostream>
#include <set> 
using namespace std;

/*
����set������multiset�ܹ����ٲ��Ҽ������Ǵ洢��һά�����е�ֵ��
set��multiset֮����������ڣ�ǰ��ֻ�ܴ洢Ψһ��ֵ�����߿ɴ洢�ظ���ֵ 
ʵ������
std::set <int> setIntegers;
std::multiset <int> msetIntegers;

std::set <Tuna> setIntegers;
std::multiset <Tuna> msetIntegers;

��������
std::set<int>::const_iterator iElementInSet;
std:multiset<int>::const_iterator iElementInMultiset;
��Ҫһ���������޸�ֵ����÷�const�����ĵ�������Ӧ��const_iterator�滻Ϊiterator 
*/
template <typename T>
struct SortDescending
{
	bool operator()(const T& lhs, const T& rhs)const  //�����Ԫ����ν��
	{
		return (lhs > rhs);
	}
};
int main()
{
   set<int> setIntegers1;
   multiset <int> msetIntegers1;
   
   set<int, SortDescending<int> > setIntegers2;//����Ҫ�ո� 
   multiset<int, SortDescending<int> > msetIntegers2; //ʵ����set��multisetʱָ������ν��
   
   set<int> setIntegers3(setIntegers1);
   multiset<int> msetIntegers3(setIntegers1.cbegin(), setIntegers1.cend()); 
   //c++11֧�� 
   return 0;
}
