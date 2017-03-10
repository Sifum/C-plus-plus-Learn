#include <iostream>
#include <vector> //std::vector，是方便且易于使用的动态数组 
using namespace std;

int main()
{
	vector<int> ArrNums (3);
	//定义动态数组
	 
	ArrNums[0] = 256;
	ArrNums[1] = 5865;
	ArrNums[2] = -321;
	
	cout << "Number of integers in array: " << ArrNums.size() << endl;
	//数组长度 
	cout << "Enter another number for the array" << endl;
	int AnotherNum = 0;
	cin >> AnotherNum;
	ArrNums.push_back(AnotherNum);//将值推入数组 
	
	cout << "Number of integers in array: " << ArrNums.size() << endl;
	cout << "Last element in array: " ;
	cout << ArrNums[ArrNums.size()-1] << endl;
	
	return 0;
}

