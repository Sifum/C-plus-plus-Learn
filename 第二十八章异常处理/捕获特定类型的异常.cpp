#include <iostream>
#include <exception>
using namespace std;

/*
引入<exception>头文件捕获错误
多个catch()捕获不同错误 
*/
int main()
{
	cout << "Enter number of integers you wish to reserve: ";
	try
	{
		int Input = 0;
		cin >> Input;
		
		int* pReservedInts = new int [Input];
		delete[] pReservedInts;
	}
	catch(std::bad_alloc& exp)
	{
		cout << "Exception encountered: " << exp.what() << endl;
		cout << "Got to end, sorry!" << endl;
	}
	catch(...)
	{
		cout << "Exception encountered. Got to end, sorry!" << endl;
	}
	
	return 0;
}
