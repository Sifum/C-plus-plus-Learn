#include <iostream>
#include <assert.h> 
#include <string>
using namespace std;

/*
模板类
实例化和具体化语法：TemplateClass <int> IntTemplate; 
*/
template <typename T1, typename T2>
class HoldsPair
{
private:
   T1 Value1;
   T2 Value2;//类中接受两个模板参数，可用来存储两个类型相同或不同的对象 
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
