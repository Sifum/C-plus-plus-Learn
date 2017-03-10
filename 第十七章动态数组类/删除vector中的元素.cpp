#include <iostream>
#include <string>
#include <vector>
using namespace std;

//ɾ��vector�е�Ԫ��
template <typename T>
void DisplayVector(const vector<T>& vecInput)
{
  for(auto iElement = vecInput.cbegin(); iElement != vecInput.cend(); ++iElement)
   cout << *iElement << ' ' ; //��Ҫc++11֧�� 
  cout << endl;
}
int main()
{
   vector <int> vecIntegers;
   
   vecIntegers.push_back(50);
   vecIntegers.push_back(1);
   vecIntegers.push_back(987);
   vecIntegers.push_back(1001);
   
   cout << "Vector contains " << vecIntegers.size() << " elements: ";
   DisplayVector(vecIntegers);
   
   vecIntegers.pop_back();
   
   cout << "After a call to pop_back()" << endl;
   cout << "Vector contains " << vecIntegers.size() << " elements: ";
   DisplayVector(vecIntegers);
   
   return 0;
}
