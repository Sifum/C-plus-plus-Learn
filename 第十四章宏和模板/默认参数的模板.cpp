#include <iostream>
#include <assert.h> 
#include <string>
using namespace std;

//包含默认参数的模板 
template <typename T1=int, typename T2=double>
class HoldsPair
{
private:
  T1 Value1;
  T2 Value2;
public:
  HoldsPair(const T1& value1, const T2& value2)
  {
  	Value1 = value1;
  	Value2 = value2;
  };
  const T1& GetFirstValue() const
  {
  	return Value1;
  };
  const T2& GetSecondValue() const
  {
  	return Value2;
  };
};

int main()
{
   HoldsPair <> mIntFloatPair(300, 10.09);
   HoldsPair <short, char*>mShortStringPair(25, "Learn template,");
   
   cout << "The first object contains - " << endl;
   cout << "Value1: " << mIntFloatPair.GetFirstValue() << endl;
   cout << "Value2: " << mIntFloatPair.GetSecondValue() << endl;
   
   cout << "The second object contains - " << endl;
   cout << "Value1: " << mShortStringPair.GetFirstValue() << endl;
   cout << "Value2: " << mShortStringPair.GetSecondValue() << endl;
   
   return 0;
}
