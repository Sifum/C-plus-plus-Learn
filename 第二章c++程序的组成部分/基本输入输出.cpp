#include <iostream>
#include <string> 
//stringͷ�ļ� 
using namespace std;

int main()
{
  int InputNumber;
  cout << "Enter an integer: ";
  
  cin >> InputNumber;
  //std::cin����stardard::see-in,�û��������ֵ 
  cout << "Enter your name: ";
  string InputName;
  cin >> InputName;
  
  cout << "name:" << InputName << " ;number: " << InputNumber << endl;
  return 0;
}
