#include <iostream> 
using namespace std;

//最佳实践1
int main()
{
  cout << "Is it sunny (y/n)? ";
  char UserInput = 'y';
  cin >> UserInput;
  
  if(UserInput == 'y')
  {
     int* pTemperature = new int;//初始化分配内存空间 
	 *pTemperature = 30;
	 
	 cout << "Temperature is: " << *pTemperature << endl;
	 //回收 
	 delete pTemperature;	
  }
  
  return 0;
}
