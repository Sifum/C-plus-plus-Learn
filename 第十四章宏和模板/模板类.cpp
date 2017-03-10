#include <iostream>
#include <assert.h> 
#include <string>
using namespace std;

/*
ģ����
ʵ�����;��廯�﷨��TemplateClass <int> IntTemplate; 
*/
template <typename T1, typename T2>
class HoldsPair
{
private:
   T1 Value1;
   T2 Value2;//���н�������ģ��������������洢����������ͬ��ͬ�Ķ��� 
public:
   HoldsPair(const T1& value1, const T2& value2)
   {
      Value1 = value1;
	  Value2 = value2;
   };
   void DisplayData()
   {
   	  cout << "Value1 " << Value1 << "---Value2 " << Value2 << endl;
   }
};
int main()
{
   HoldsPair <int, double> PairIntDouble(6, 1.99);
   PairIntDouble.DisplayData();
   
   return 0;
}
