#include <iostream>
#include <iomanip>
using namespace std;

/*
C++流类：
cout 标准输出流 
cin 标准输入流
cerr 用于显示错误信息的标准输出流
fstream 用于操作文件的输入和输出流，继承了ofstream和ifstream
ofstream 用于操作文件的输出流类，即用于创建文件
ifstream 用于操作文件的输入流类，即用于读取文件
stringstream 用于操作字符串的输入和输出流类，继承了istringstream和ostringstream,通常
用于在字符串和其他类型之间进行转换

控制符：
endl 插入换行符
ends 插入空格符
dec 以十进制方式输入或输出
hex 以十六进制方式输入或输出
oct 以八进制方式输入或输出
fixed 让流以定点表示法显示数据
scientific 让流以科学表示法显示数据

<iomanip>控制符：
setprecision 设置小数精度
setw 设置字段宽度
setfill 设置填充字符
setbase 设置基数，与使用dec,hex或oct等效
setiosflag 通过类型为std::ios_base::fmtflags的掩码输入参数设置标志
resetiosflag 将std::ios_base::fmtflags参数指定的标志重置为默认值 
*/
int main()
{
	const double Pi = (double)22.0 / 7;
	cout << "Pi = " << Pi << endl;
	
	cout << endl << "Setting precision to 7: " << endl;
	cout << setprecision(7);   //7位精度 
	cout << "Pi = " << Pi << endl;
	cout << fixed << "Fixed Pi = " << Pi << endl;
	cout << scientific << "Scientific Pi = " << Pi << endl;
	
	cout << endl << "Setting precision to 10: " << endl;
	cout << setprecision(10);
	cout << "Pi = " << Pi << endl;
	cout << fixed << "Fixed Pi = " << Pi << endl;
	cout << scientific << "Scientific Pi = " << Pi << endl;
	
	cout << endl << "Enter a radius: " ;
	double Radius = 0.0;
	cin >> Radius;
	cout << "Area of circle: " << 2*Pi*Radius*Radius << endl;
	
	return 0;
}
