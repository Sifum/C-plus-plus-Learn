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
  Date operator + (int DaysToAdd)
  {
  	Date newDate(Day + DaysToAdd, Month, Year);
  	return newDate;
  }
  Date operator - (int DaysToSub)
  {
  	return Date(Day - DaysToSub, Month, Year);
  }
  void DisplayDate()
  {
  	cout << Day << " / " << Month << " / " << Year << endl;
  }
};
int main()
{
	Date Holiday(25, 12, 2011);
	cout << "Holiday on: " ;
	Holiday.DisplayDate();
	
	Date PreviousHoliday(Holiday - 19);
	cout << "Previous holiday on: ";
	PreviousHoliday.DisplayDate();
	
	Date NextHoliday(Holiday + 6);
	cout << "Next holiday on: ";
	NextHoliday.DisplayDate();
		
	return 0;
}
