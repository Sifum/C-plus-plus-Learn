#include <iostream>
#include <exception>
#include <string> 
using namespace std;

/*
std::bad_alloc�̳���C++��׼��std::exception;
bad_alloc:ʹ��new�����ڴ�ʧ��ʱ������
bad_cast:��ͼʹ��dynamic_castת����������ʱ������
ios_base::failure:��iostream���еĺ����ͷ���������
���и��鷽��what(),��ϸ�����˵����쳣��ԭ�� 
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
