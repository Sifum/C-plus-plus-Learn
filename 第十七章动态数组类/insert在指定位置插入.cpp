#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   vector <int> vecIntegers(4, 90);
   cout << "The initial contents of the vector: ";
   vecIntegers.insert(vecIntegers.begin(), 25); //��25����ͷ������һ�ֲ�����ʽ���γ�5��Ԫ�� 
   
   cout << vecIntegers.size() << endl;
   for(int index = 0; index < vecIntegers.size(); ++index)
      cout << vecIntegers[index] << " ";
   cout << endl;
   
   vecIntegers.insert(vecIntegers.end(), 2, 45); //�ڶ��ֲ�����ʽ
   cout << vecIntegers.size() << endl;
   for(int index = 0; index < vecIntegers.size(); ++index)
      cout << vecIntegers[index] << " ";
   cout << endl;
 /*    
   vecIntegers.insert(vecIntegers.begin() + 1, vecAnother.begin(), vecAnother.end());
   �����ֲ�����ʽ 
   cout << vecIntegers.size() << endl;
   for(int index = 0; index < vecIntegers.size(); ++index)
      cout << vecIntegers[index] << " ";
   cout << endl;
 */  
   return 0;
}
