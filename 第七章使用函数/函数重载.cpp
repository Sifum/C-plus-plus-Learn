#include <iostream> 
using namespace std;
//�ݹ麯��,쳲���������

const double PI = 3.14159;
double Area(double Radius); //for circle
double Area(double Radius ,double height); //Բ���� 
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
//�������أ��������ͷ���������ͬ����������ͬ�ĺ���������Ϊ���غ��� 
//���Խ�������Ϊ�������� 
double Area(double Radius)
{
  return PI * Radius * Radius;	
}
double Area(double Radius, double Height)
{
   return 2 * PI * Radius * Radius + 2 * PI * Radius * Height;
}
