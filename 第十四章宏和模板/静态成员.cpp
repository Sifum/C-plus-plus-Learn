#include <iostream>
#include <assert.h> 
#include <string>
using namespace std;

//ģ�������ڴ��������ͼ�����������ڴ����������ͼ
template <typename T>
class TestStatic
{
public:
  static int StaticValue;
};
template<typename T> int TestStatic<T>::StaticValue;
//��ʼ��ģ����ľ�̬��Ա 
int main()
{
   TestStatic<int> Int_Year;
   cout << "Setting StaticValue for Int_Year to 2011" << endl;
   Int_Year.StaticValue = 2011;
   TestStatic<int> Int_2;
   
   TestStatic<double> Double_1;
   TestStatic<double> Double_2;
   cout << "Setting StaticValue for Double_2 to 1011" << endl;
   Double_2.StaticValue = 1011;
   
   cout << "Int_2.StaticValue = " << Int_2.StaticValue << endl;
   cout << "Double_1.StaticValue = " << Double_1.StaticValue << endl;
   
   return 0;
}
