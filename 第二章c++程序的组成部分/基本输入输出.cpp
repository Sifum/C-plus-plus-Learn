#include <iostream>
#include <string> 
//string头文件 
using namespace std;

int main()
{
  int InputNumber;
  cout << "Enter an integer: ";
  
  cin >> InputNumber;
  //std::cin读作stardard::see-in,用户输入变量值 
  cout << "Enter your name: ";
  string InputName;
  cin >> InputName;
  
  cout << "name:" << InputName << " ;number: " << InputNumber << endl;
  return 0;
}
