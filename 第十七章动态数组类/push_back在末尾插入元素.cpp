#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
ʹ��push_back��ĩβ����Ԫ�� 
*/
int main()
{
   vector <int> vecIntegers;
   vecIntegers.push_back(50);
   vecIntegers.push_back(1);
   vecIntegers.push_back(987);
   vecIntegers.push_back(1001);
   
   cout << "The vector contains ";
   cout << vecIntegers.size() << " Elements" << endl;
   
   return 0;
}
/*
��ʼ���б�
vector <int> vecIntegers = {50,1,987,1001};

vector <int> vecMoreIntegers{50,1,987,1001}; 
*/
