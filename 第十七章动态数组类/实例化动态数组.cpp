#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
vector�ص㣺
1.������ĩβ���Ԫ�������ʱ���ǹ̶��ģ�����ĩβ����Ԫ�ص�����ʱ�䲻�������С���죬��
ĩβɾ��Ԫ��Ҳ��ˣ�
2.�������м���ӻ�ɾ��Ԫ������ʱ�����Ԫ�غ����Ԫ�ظ��������ȣ�
3.�洢��Ԫ�����Ƕ�̬�ġ�

����ʵ����std::vector�ķ�����ָ�����Ⱥͳ�ʼֵ�Լ�������һ��vector�е�ֵ 
*/
int main()
{
   vector <int> vecIntegers;
   vector <int> vecWithTenElements(10);
   //��ʼ��10��Ԫ�أ�ÿ��Ԫ�ص�ֵΪ90
   vector <int> vecWithTenInitializedElements(10, 90);
   //һ��vectorʵ������һ��vector�����ݣ�������vector�������һ����
   vector <int> vecArrayCopy(vecWithTenInitializedElements);
   //Ҫ��c++11������
   vector <int> vecSomeElementsCopied(vecWithTenElements.cbegin(), vecWithTenElements.cbegin() + 5);
    
   return 0;
}

