#include <iostream> 
using namespace std;

//�������� 
//����ʹ�ùؼ���inline��������Ҫ���ں���������ʱ�͵�չ������ 
inline long DoubleNum(int InputNum)
{
   return InputNum * 2;	
}
int main()
{
  cout << "Enter an integer : ";
  int InputNum = 0;
  cin >> InputNum;
  
  cout << "Double is: " << DoubleNum(InputNum) << endl; 
  
  return 0;
}
