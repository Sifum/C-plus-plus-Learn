#include <iostream> 
using namespace std;

const double PI = 3.14159;
void Area(double Radius, double& Result); 
//�����ô��ݲ���
//���ã������޸ĵı��������ⲿ������ú�������Ҳ���ã����βε���������Ϊ����
//ע�����ò��������ķ�����void 
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
