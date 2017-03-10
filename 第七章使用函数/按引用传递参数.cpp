#include <iostream> 
using namespace std;

const double PI = 3.14159;
void Area(double Radius, double& Result); 
//按引用传递参数
//作用：函数修改的变量在其外部（如调用函数）中也可用，将形参的类型声明为引用
//注意引用参数函数的返回是void 
int main()
{
  cout << "Enter radius: ";
  double Radius = 0;
  cin >> Radius;
  
  double AreaFetched = 0;
  Area(Radius, AreaFetched);
  
  cout << "The area is: " << AreaFetched << endl;
  
  return 0;
}

void Area(double Radius,double& Result)
{
  Result = PI * Radius * Radius;
}
