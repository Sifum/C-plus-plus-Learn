#include <iostream>
using namespace std;

int main()
{
  cout << "This program will help you multiply two numbers" << endl;
  cout << "Enter the first number: ";
  int FirstNumber = 0;
  //������ʼ��,�﷨��variable_type  variable_name �� variable_type variable_name = initial_value;
  cin >> FirstNumber;
  
  cout << "Enter the second number: ";
  int SecondNumber = 0;
  cin >> SecondNumber;
   
  int MultiplycationResult = FirstNumber * SecondNumber;
  
  cout << FirstNumber << " x " << SecondNumber;
  cout << "=" << MultiplycationResult << endl;
  
  return 0;
}
//����������������int a=0,b=0; 
//�ں����������ı���Ϊȫ�ֱ��������������� 
