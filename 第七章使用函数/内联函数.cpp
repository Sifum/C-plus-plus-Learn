#include <iostream> 
using namespace std;

//内联函数 
//可以使用关键字inline发出请求，要求在函数被调用时就地展开他们 
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
