#include <iostream>
using namespace std;

int main()
{
	const int Arr_length = 5;
   //element-type array-name[number of elements] = {optional initial values}
   int MyNumbers[Arr_length] = {34,56,-21,5002,365};
   cout << "Third element at index 2: " << MyNumbers[2] << endl;
   
   //修改数组中的值
   cout << "input the third element: " << endl;
   cin >> MyNumbers[2];
   cout << "Modified third element at index 2: " << MyNumbers[2] << endl;
   //多维数组 
   int TwoRows[2][2] = {{501,30},{50,40}};
   cout << "TwoRows[2][1]: " << TwoRows[2][1] << endl;
   
   return 0;
}

