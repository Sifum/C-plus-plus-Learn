#include <iostream> 
using namespace std;

//指针和函数 
void CalArea(const double* const pPi,const double* const pRadius,double* const pArea)
{
   if(pPi && pRadius && pArea)
       *pArea = (*pPi) * (*pRadius) * (*pRadius);	
}
int main()
{
  const double Pi = 3.1416;
  
  cout << "Enter radius of circle : ";
  double Radius = 0;
  cin >> Radius;
  
  double Area = 0;
  CalArea(&Pi, &Radius, &Area);//Area调用函数后，存储结果 
  
  cout << "Area is = " << Area << endl; 
  
  return 0;
}
