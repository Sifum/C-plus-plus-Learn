#include <iostream>
#include <sstream>
//我的编辑器找不到此文件 
#include <string>
using namespace std;

class Date
{
private:
  int Day;
  int Month;
  int Year;
public:
  Date(int InputDay, int InputMonth, int InputYear)
      :Day(InputDay), Month(InputMonth), Year(InputYear){};
  operator const char*()
  {
  	ostringstream formattedDate;
  	formattedDate << Day << " / " << Month << " / " << Year ;
  	DateInString = formattedDate.str();
  	return DateInString.c_str();
  }
};
int main()
{
	Date Holiday(25,12,2011);
	cout << "Holiday is on: " << Holiday << endl;
	
	return 0;
}
