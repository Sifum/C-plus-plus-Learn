#include <iostream>
using namespace std;

int main()
{
	cout << "Enter number of integers you wish to reverse: ";
	try
	{
		int Input = 0;
		cin >> Input;
		
		int* pReservedInts = new int[Input];
		delete[] pReservedInts;
		
		cout << "successfully open RAM!" << endl;
		//������-1ʱ�������ڴ���� 
	}
	catch(...) //��׽���д��� 
	{
		cout << "Exception encountered. Got to end, sorry!" << endl;
	}
	
	return 0;
}
