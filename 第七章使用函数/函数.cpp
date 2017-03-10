#include <iostream> 
using namespace std;

const double PI = 3.14159;
//定义函数原型 
// double Area(double InputRadius,double PI=3.14);可以给多个参数指定默认值，但这些参数必须位于参数列表的末尾 
double Area(double InputRadius);
double Circumference(double InputRadius);
int main()
{
   cout << "Enter radius: ";
   double Radius = 0;
   cin >> Radius;
   
   cout << "Area is: " << Area(Radius) << endl;
   
   cout << "Circumference: " << Circumference(Radius) << endl;
   
   return 0;  
}
//函数定义 
double Area(double InputRadius)
{
   return PI * InputRadius * InputRadius;	
}
double Circumference(double InputRadius)
{
   return 2 * PI * InputRadius;	
}
