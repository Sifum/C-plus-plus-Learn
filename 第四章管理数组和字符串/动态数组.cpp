#include <iostream>
#include <vector> //std::vector���Ƿ���������ʹ�õĶ�̬���� 
using namespace std;

int main()
{
	vector<int> ArrNums (3);
	//���嶯̬����
	 
	ArrNums[0] = 256;
	ArrNums[1] = 5865;
	ArrNums[2] = -321;
	
	cout << "Number of integers in array: " << ArrNums.size() << endl;
	//���鳤�� 
	cout << "Enter another number for the array" << endl;
	int AnotherNum = 0;
	cin >> AnotherNum;
	ArrNums.push_back(AnotherNum);//��ֵ�������� 
	
	cout << "Number of integers in array: " << ArrNums.size() << endl;
	cout << "Last element in array: " ;
	cout << ArrNums[ArrNums.size()-1] << endl;
	
	return 0;
}

