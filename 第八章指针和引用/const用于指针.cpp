#include <iostream> 
using namespace std;

//const����ָ�룬��������� 
int main()
{
 //1.����Ϊ���������޸ģ���ָ�����ָ��������ַ
  int HoursInDay = 24;
  const int* pInteger = &HoursInDay;
  int MonthsInYear = 12;
  pInteger = &MonthsInYear;
  //*pInteger =13;�������޸���ֵ�ǲ��е� 
  cout << "value is :" << *pInteger << endl; 
  cout << "address is :" << pInteger << endl; 

 //2.��ַ�ǳ��������޸ģ������޸�����
  int DaysInMonth = 30;
  int* const pDaysInMonth = &DaysInMonth;
  *pDaysInMonth = 20;
  /*int DaysInLunarMonth = 28;
  pDaysInMonth = &DaysInLunarMonth;�����ı��ַ�ǲ��е�*/
  cout << "value is : " << *pDaysInMonth << endl;
  
  //3.���ϸ��ģʽ�����ݺ͵�ַ���޷��޸� 
  int HoursInDays = 24;
  const int* const pHoursInDays = &HoursInDays;
  //������ʡ�� 
  
  return 0;
}
