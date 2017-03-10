#include <iostream> 
using namespace std;

//const用于指针，分三种情况 
int main()
{
 //1.数据为常量不能修改，但指针可以指向其他地址
  int HoursInDay = 24;
  const int* pInteger = &HoursInDay;
  int MonthsInYear = 12;
  pInteger = &MonthsInYear;
  //*pInteger =13;但这样修改数值是不行的 
  cout << "value is :" << *pInteger << endl; 
  cout << "address is :" << pInteger << endl; 

 //2.地址是常量不能修改，但可修改数据
  int DaysInMonth = 30;
  int* const pDaysInMonth = &DaysInMonth;
  *pDaysInMonth = 20;
  /*int DaysInLunarMonth = 28;
  pDaysInMonth = &DaysInLunarMonth;这样改变地址是不行的*/
  cout << "value is : " << *pDaysInMonth << endl;
  
  //3.最严格的模式是数据和地址都无法修改 
  int HoursInDays = 24;
  const int* const pHoursInDays = &HoursInDays;
  //不可行省略 
  
  return 0;
}
