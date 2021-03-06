#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
  int Day, Month, Year;
public:
  Date(int InputDay, int InputMonth, int InputYear)
     :Day(InputDay), Month(InputMonth), Year(InputYear){};
  bool operator == (const Date& compareTo)
  {
  	return ((Day == compareTo.Day)&&(Month == compareTo.Month)&&(Year == compareTo.Year));
  }
  bool operator < (const Date& compareTo)
  {
  	if(Year < compareTo.Year)
  	  return true;
    else if(Month < compareTo.Month)
      return true;
    else if(Day < compareTo.Day)
      return false;
  }
  bool operator <= (const Date& compareTo)
  {
  	if(this -> operator == (compareTo))
  	  return true;
    else
      return this -> operator < (compareTo);
  }
  bool operator > (const Date& compareTo)
  {
  	return !(this -> operator <= (compareTo));
  }
  bool operator >= (const Date& compareTo)
  {
  	if(this -> operator == (compareTo))
  	  return true;
    else
      return this -> operator > (compareTo);
  }
  bool operator != (const Date& compareTo)
  {
  	return !(this -> operator == (compareTo));
  }
  void DisplayDate()
  {
  	cout << Day << " / " << Month << " / " << Year << endl;
  }
};
int main()
{
	Date Holiday1(25,12,2011);
	Date Holiday2(31,12,2011);
	
	cout << "Holiday 1 is:" ;
    Holiday1.DisplayDate();
    cout << "Holiday 2 is:";
    Holiday2.DisplayDate();
    
    if(Holiday1 < Holiday2)
       cout << "operator<: Holiday1 happens first" << endl;
    if(Holiday2 > Holiday1)
       cout << "operator>: Holiday2 happens later" << endl;
    if(Holiday1 <= Holiday2)
       cout << "operator<=: Holiday1 happens first" << endl;
    if(Holiday2 >= Holiday1)
       cout << "operator>=: Holiday2 happens later" << endl;
       
	return 0;
}
