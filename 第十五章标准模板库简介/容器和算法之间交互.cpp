#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h> 
#include <string>
using namespace std;

//ʹ�õ��������������㷨֮�佻�� 
int main()
{
   vector <int> vecIntegerArray; //���� 
   vecIntegerArray.push_back(50);
   vecIntegerArray.push_back(2991);
   vecIntegerArray.push_back(23);
   vecIntegerArray.push_back(9999);
   
   cout << "The contents of the vector are: " << endl;
   
   vector <int> ::iterator iArrayWalker = vecIntegerArray.begin();
   
   while(iArrayWalker != vecIntegerArray.end())
   {
   	  cout << *iArrayWalker << endl;
      ++ iArrayWalker;
   }
   
   vector <int>::iterator iElement = find(vecIntegerArray.begin(),vecIntegerArray.end(),2991);
   
   if(iElement != vecIntegerArray.end())
   {
   	 int Position = distance(vecIntegerArray.begin(), iElement);//�㷨 
   	 cout << "Value " << *iElement;
   	 cout << " found in the vector at position: " << Position << endl;
   }
   
   return 0;
}
/*
STL˳������������
std::vector �����붯̬����һ���������������� 
std::deque  ��vector���ƣ������ڿ�ͷ�����ɾ��Ԫ�� 
std::list  ��˫������һ���������κ�λ����ӻ�ɾ������ 
std::forward_list  ��������ֻ����һ��������� 

STL��������������
std::set �洢��ͬ��ֵ���ڲ���ʱ�������������ĸ��Ӷ�Ϊ����
std::unordered_set �洢��ͬ��ֵ���ڲ���ʱ�������򣬸��Ӷ�Ϊ����
std::map �洢��-ֵ�ԣ�������Ψһ�ļ����򣬸��Ӷ�Ϊ����
std::unordered_map  �洢��-ֵ�ԣ�������Ψһ�ļ����򣬸��Ӷ�Ϊ������c++11����
std::multiset ��set���ƣ�������洢���ֵ��ͬ�����ֵ����Ҫ��Ψһ��
std::unordered_multiset ��unordered_set���ƣ�������洢���ֵ��ͬ�����ֵ����Ҫ��Ψһ�ģ�c++11���� 
std::multimap ��map���ƣ�����Ҫ�����Ψһ��
std::unordered_multimap ��unordered_map���ƣ�����Ҫ�����Ψһ�ġ�c++11���� 

��������������˳�������͹��������ı��֣����������ض�������
std::stack ��LIFO�ķ����洢Ԫ�� 
std::queue ��FIFO�ķ�ʽ�洢Ԫ�� 
std::priority_queue  ���ض�˳��洢Ԫ�أ���Ϊ���ȼ���ߵ�Ԫ������λ�ڶ��п�ͷ 
 
STL�㷨��
std::find �ڼ����в���ֵ 
std::find_if  �����û�ָ����ν���ڼ����в���ֵ 
std::reverse  ��ת������Ԫ�ص�����˳�� 
std::remove_if �����û������ν�ʽ�Ԫ�شӼ�����ɾ�� 
std::transform  ʹ���û�����ı任�����������е�Ԫ�ؽ���ת��

��������
��򵥵ĵ�������ָ�룻
STL�еĵ�������ģ���࣬����ģ�����ܹ���STL�������в���
��Ϊ�����ࣺ��������������������
��һ����Ϊ���ࣺǰ���������˫���������������ʵ����� 
*/
