#include <iostream> 
using namespace std;

//���ʵ��1
int main()
{
  cout << "Is it sunny (y/n)? ";
  char UserInput = 'y';
  cin >> UserInput;
  
  if(UserInput == 'y')
  {
     int* pTemperature = new int;//��ʼ�������ڴ�ռ� 
	 *pTemperature = 30;
	 
	 cout << "Temperature is: " << *pTemperature << endl;
	 //���� 
	 delete pTemperature;	
  }
  
  return 0;
}
