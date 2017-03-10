#include <iostream>
#include <string>
using namespace std;

//前缀递增和递减 
class Date
{
private:
  int Day;
  int Month;
  int Year;
public:
  Date(int InputDay, int InputMonth, int InputYear)
      :Day(InputDay), Month(InputMonth), Year(InputYear){};
  Date& operator ++()
  {
  	++Day;
  	return *this;
  }
  Date& operator --()
  {
  	--Day;
  	return *this;
  }
  void DisplayDate()
  {
  	cout << Day << " / " << Month << " / " << Year << endl;
  }
};
int main()
{
	Date Holiday(25,12,2011);
	
	cout << "The date object is initialized to: ";
	Holiday.DisplayDate();
	
	++ Holiday;
	
	cout << "Date after prefix-increment is: ";
	
	Holiday.DisplayDate();
	
	--Holiday;
	--Holiday;
	cout << "Date after two prefix-decrements is: ";
	Holiday.DisplayDate();
	
	return 0;
}
/*
后缀递增和递减
 Date operator ++(int)
 {
 	Data Copy(Day, Month, Year);
 	++Day;
 	return Copy;
 }
 Date operator --(int)
 {
 	Data Copy(Day, Month, Year);
 	--Day;
 	return Copy;
 }
*/
