#include <iostream> 
using namespace std;

const double PI = 3.14159;
//���庯��ԭ�� 
// double Area(double InputRadius,double PI=3.14);���Ը��������ָ��Ĭ��ֵ������Щ��������λ�ڲ����б��ĩβ 
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
//�������� 
double Area(double InputRadius)
{
   return PI * InputRadius * InputRadius;	
}
double Circumference(double InputRadius)
{
   return 2 * PI * InputRadius;	
}
