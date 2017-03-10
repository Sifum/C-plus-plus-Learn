#include <iostream>
#include <string>
#include <vector>
using namespace std;

//使用指针语法访问vector中的元素 
int main()
{
   vector <int> vecIntegerArray;
   
   vecIntegerArray.push_back(50);
   vecIntegerArray.push_back(1);
   vecIntegerArray.push_back(987);
   vecIntegerArray.push_back(1001);
   
   vector <int>::iterator iElementLocator = vecIntegerArray.begin();
   
   while(iElementLocator != vecIntegerArray.end())
   {
   	 size_t Index = distance(vecIntegerArray.begin(), iElementLocator);
     cout << "Element at position ";
	 cout << Index << " is: " << *iElementLocator << endl;
     ++ iElementLocator;
   }
   
   return 0;
}
