#include <iostream>
using namespace std;

int main()
{
  cout << "This program will help you multiply two numbers" << endl;
  cout << "Enter the first number: ";
  int FirstNumber = 0;
  //变量初始化,语法：variable_type  variable_name 或 variable_type variable_name = initial_value;
  cin >> FirstNumber;
  
  cout << "Enter the second number: ";
  int SecondNumber = 0;
  cin >> SecondNumber;
   
  int MultiplycationResult = FirstNumber * SecondNumber;
  
  cout << FirstNumber << " x " << SecondNumber;
  cout << "=" << MultiplycationResult << endl;
  
  return 0;
}
//定义多个变量方法：int a=0,b=0; 
//在函数外声明的变量为全局变量，但谨慎声明 
