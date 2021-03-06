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
	Date Holiday1(25, 12, 2011);
	Date Holiday2(31, 12, 2011);
	
	cout << "Holiday 1 is: ";
	Holiday1.DisplayDate();
	cout << "Holiday 2 is: ";
	Holiday2.DisplayDate();
	
	if(Holiday1 == Holiday2)
	  cout << "Equality operator: The two are on the same day" << endl;
    else
      cout << "Equality operator: The two are on the different days" << endl;
    
    if(Holiday1 != Holiday2)
      cout << "Inequality operator: The two are on different days" << endl;
    else
      cout << "Inequality operator: The two are on the same day" << endl;
		
	return 0;
}
