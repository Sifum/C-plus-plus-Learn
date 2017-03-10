#include <iostream>
#include <string>
#include <vector>
using namespace std;

//理解大小和容量 
int main()
{
   vector <int> vecIntegers(5);
   
   cout << "Vector of integers was instantiated with " << endl;
   cout << "Size: " << vecIntegers.size();
   cout << ", Capacity: " << vecIntegers.capacity() << endl;
   //capacity:查看vector的容量 
   vecIntegers.push_back(666);
   
   cout << "After inserting an additional element... " << endl;
   cout << "Size: " << vecIntegers.size();
   cout << ", Capacity: " << vecIntegers.capacity() << endl;
   
   vecIntegers.push_back(777);
   
   cout << "After inserting yet another element... " << endl;
   cout << "Size: " << vecIntegers.size();
   cout << ", Capacity: " << vecIntegers.capacity() << endl;
   
   return 0;
}
