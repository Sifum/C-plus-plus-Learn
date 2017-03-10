#include <iostream> 
using namespace std;
//递归函数,斐波那契数列

const double PI = 3.14159;
double Area(double Radius); //for circle
double Area(double Radius ,double height); //圆柱形 
int main()
{
  cout << "Enter z for Cylinder , c for Circle: ";
  char Choice = 'z';
  cin >> Choice;
  
  while(Choice != 'q')
  {
	  cout << "Enter radius: ";
	  double Radius = 0;
	  cin >> Radius;
	  
	  if( Choice == 'z')
	  {
	     cout << "Enter height: ";
	     double Height = 0;
	     cin >> Height;
	     
	     cout << "Area of Cylinder is: " << Area(Radius,Height) << endl;
	  }
	  else 
	     cout << "Area of circle is: " << Area(Radius) << endl; 
	     
      cout << "Enter z for Cylinder , c for Circle: ";
      cin >> Choice;
  }
     
  return 0;
}
//函数重载，函数名和返回类型相同，但参数不同的函数都被称为重载函数 
//可以将数组作为参数传递 
double Area(double Radius)
{
  return PI * Radius * Radius;	
}
double Area(double Radius, double Height)
{
   return 2 * PI * Radius * Radius + 2 * PI * Radius * Height;
}
