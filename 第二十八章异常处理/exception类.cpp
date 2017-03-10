#include <iostream>
#include <exception>
#include <string> 
using namespace std;

/*
std::bad_alloc继承了C++标准类std::exception;
bad_alloc:使用new请求内存失败时引发；
bad_cast:试图使用dynamic_cast转换错误类型时引发；
ios_base::failure:由iostream库中的函数和方法引发。
其有个虚方法what(),详细描述了导致异常的原因。 
*/
class CustomException: public std::exception
{
	string Reason;
public:
    CustomException(const char* why):Reason(why){}
    
    virtual const char* what() const throw()
    {
    	return Reason.c_str();
    }
};

double Divide(double Dividend, double Divisor)
{
	if(Divisor == 0)
	   throw CustomException("CustomException: Dividing by 0 is a crime");
    
    return (Dividend / Divisor);
}

int main()
{
	cout << "Enter dividend: ";
	double Dividend = 0;
	cin >> Dividend ;
	cout << "Enter divisor: ";
	double Divisor = 0;
	cin >> Divisor;
	
	try
	{
		cout << "Result of division is: " << Divide(Dividend, Divisor);
	} 
	catch(exception& exp)
	{
		cout << exp.what() << endl;
		cout << "Sorry, can't continue!" << endl;
	}
	
	return 0;
}
