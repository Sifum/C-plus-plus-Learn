#include <iostream> 
using namespace std;

//ָ������� 
int main()
{
  int MyNum[5] = {1,2,3,4,5};
  int* pNumber = MyNum;
  
  cout << "pNumber = " << hex << pNumber << endl;
  cout << "pNumber++ = " << hex << pNumber++ << " value = " << *(++pNumber) << endl;
  cout << "&MyNum[0] = " << hex << &MyNum[0] << endl;
  
  return 0;
}
