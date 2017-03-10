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
  void operator += (int DaysToAdd)
  {
  	Day += DaysToAdd;
  }
  Date operator -= (int DaysToSub)
  {
  	Day -= DaysToSub;
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
	
	cout << "Holiday -= 19 gives: ";
	Holiday -= 19;
	Holiday.DisplayDate();
	
	cout << "Holiday += 25 gives: ";
	Holiday += 25;
	Holiday.DisplayDate();
		
	return 0;
}
