#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   vector <int> vecIntegers(4, 90);
   cout << "The initial contents of the vector: ";
   vecIntegers.insert(vecIntegers.begin(), 25); //将25插入头部，第一种插入形式，形成5个元素 
   
   cout << vecIntegers.size() << endl;
   for(int index = 0; index < vecIntegers.size(); ++index)
      cout << vecIntegers[index] << " ";
   cout << endl;
   
   vecIntegers.insert(vecIntegers.end(), 2, 45); //第二种插入形式
   cout << vecIntegers.size() << endl;
   for(int index = 0; index < vecIntegers.size(); ++index)
      cout << vecIntegers[index] << " ";
   cout << endl;
 /*    
   vecIntegers.insert(vecIntegers.begin() + 1, vecAnother.begin(), vecAnother.end());
   第三种插入形式 
   cout << vecIntegers.size() << endl;
   for(int index = 0; index < vecIntegers.size(); ++index)
      cout << vecIntegers[index] << " ";
   cout << endl;
 */  
   return 0;
}
