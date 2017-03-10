#include <iostream> 
using namespace std;

/*
为了禁止修改传入的值，必须使用关键字const将其声明为const引用
Number引用参数不能修改。 
*/
void CalculateSquare(const int& Number, int& Result)
{
   Result = Number * Number;	
   //Number *= Number; 出错 
}
int main()
{
  cout << "Enter a number you wish to square: ";
  int Number = 0;
  cin >> Number;
  
  int Square = 0;
  CalculateSquare(Number, Square);
  cout << Number << "^2 = " << Square << endl; 
  
  return 0;
}

