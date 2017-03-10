#include <iostream>
#include <string>
#include <vector>
using namespace std;

//使用数组语法访问vector中的元素 
int main()
{
   vector <int> vecIntegerArray;
   
   vecIntegerArray.push_back(50);
   vecIntegerArray.push_back(1);
   vecIntegerArray.push_back(987);
   vecIntegerArray.push_back(1001);
   
   for(size_t Index = 0; Index < vecIntegerArray.size(); ++Index)
   {
   	 cout << "Element[" << Index << "] = " ;
   	 cout << vecIntegerArray[Index] << endl;
   }
   
   vecIntegerArray[2] = 2011;
   cout << "After replacement: " << endl;
   cout << "Element[2] = " << vecIntegerArray[2] << endl;
   
   
   return 0;
}
