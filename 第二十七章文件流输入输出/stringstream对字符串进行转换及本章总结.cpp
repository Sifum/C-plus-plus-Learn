#include <iostream>
#include <fstream>
#include <iomanip>
#include <string> 
#include <sstream>
using namespace std;

/*
std::stringstream对字符串进行转换 
本章总结：
只想读取文件时，务必使用ifstream;
只想写入文件时，务必使用ofstream;
务必使用is_open()检测打开状态。
*/
int main()
{
	cout << "Enter an integer: " ;
	int Input = 0;
	cin >> Input;
	
	stringstream converterStream;//定义转换对象 
	converterStream << Input;
	string strInput;  //定义转换后的格式 
	converterStream >> strInput;  //转换 
	
	
	cout << "Integer Input = " << Input << endl;
	cout << "String gained from integer, strInput = " << strInput << endl;
	
	stringstream anotherStream;//定义转换对象 
	anotherStream << strInput;
	int Copy = 0; //定义转换后的格式 
	anotherStream >> Copy;//转换
	
	cout << "Integer gained from string, Copy = " << Copy << endl; 
	
	return 0;
}
